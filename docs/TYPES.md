# Shared class types

Matched units were drafted one function at a time, so each one declares its own throwaway
view of the object it works on: `typedef struct Object {char unknown0[0x70]; float f70;} Object;`
in C, or in C++ a `class Object` with `char unknown0[0x18]` followed by placeholder virtuals, plus
an `ObjectData` cast view. `src/include/classes/<Class>.h` replaces those views with one
layout per recovered class (see [CLASSES.md](CLASSES.md)). Converted units `#include` the header
and use `<Class> *` in place of the local type. **No compiled byte changes.**

## What a class header contains

- One `struct`, or a `class` in C++, named after the game's class string, with the class's
  full size from the constructor's size field. It is flattened: inherited fields come first, and a
  `/* TOKeyCave01 */` comment marks where each subclass's own fields begin. The `Inheritance:`
  line in the header comment gives the chain. A `sizeof` check pins the size.
- The vtable pointer sits at `+0x18`, after the 0x18-byte TObject header, where CodeWarrior
  puts it for these units. In C it is `void *dispatch` (or whatever name the C units use). In
  C++ it is the class's virtual slots `v0` to `vN`, so `o->v16()` dispatches through slot 16
  exactly as the local classes did. A slot keeps a signature only when the units that call it
  agree and it uses built-in types only. Every other slot is `void vN()`.
- When units name a field differently, the header takes a descriptive name (`visible`) over a
  mechanical one (`f35c`), and an existing header's name always wins. `convert` renames the
  unit's member accesses (`o->f35c` becomes `o->visible`, `o->dispatch` becomes `o->vtable`)
  only when no other struct in the unit uses either name. A rename is still only accepted
  if the unit stays byte-exact.
- Field names are the units' own names (`fXX` = hex offset; a few, such as `tag`, `size` and
  `dispatch`, come from the TObject layout). Gaps are `char pad_XX[n]`.
- A pointer to an object the header doesn't describe is an opaque `struct <Base>_pXX *`,
  named after the most basic class that owns that offset. A unit that dereferences the pointer
  completes the tag itself, keeping its own view of the pointee: `typedef struct TOKey_p38
  TOKey_p38; struct TOKey_p38 {...};`.
- An embedded aggregate is allowed only when it is a shared type (`Vector3`, from
  `src/include/vector3.h`). The header includes it, and converted units drop their local copy.

Headers are plain C plus `#ifdef __cplusplus` branches, so one header serves both `.c` and
`.cpp` units. SHC units take no project headers yet and keep their local types.

## Evidence and conflicts

`tools/class_types.py` assigns a unit to a class by its function name (`<Class>_<method>_<addr>`,
the longest class name that matches). It reads the unit's `this` type and cast views and records
every declared field (offset, width, type, name) and every virtual slot the unit calls. The
evidence for a class comes from its own units and its ancestors' units: a base method sees the
same bytes in every subclass, but a subclass's evidence never reaches its base. At each offset
the view with the most units wins. An existing header outranks the units, and an ancestor's
header outranks the class's own. A committed header is therefore a contract: later batches only
fill its gaps, and a unit whose view contradicts it stays local.

A unit keeps its local type when its view differs from the header. The conflict classes are:

| Class | Example |
|---|---|
| C++ unit writes the vtable pointer as data | constructors and destructors that store `dispatch` through an `ObjectData` view |
| aggregate / overlap | `Vector3 f3c` in one unit, `float f40` in another |
| unit-local aggregate | an embedded `Block_p0_78` that no shared header describes |
| pointer vs int | `Arg0_90 *f90` against `int f90` |
| signedness | `unsigned char` against `char` |
| member rename clash | the unit's name and the header's name differ, and another struct in the unit also uses one of them |
| beyond size | a view running past the constructor's size field (`Vector3 f38` in a 0x40-byte object) |
| `sizeof` of the local view | prefix views pinned with `check_prefix[sizeof(...)]` |
| virtual signature | a slot called with unit-local parameter types (`Frame *`) |

## Adding classes

```
python3 tools/class_types.py layout @TOKey          # merged layout + conflicts (@ = class and subclasses)
python3 tools/class_types.py emit @TOKey            # write src/include/classes/*.h (bases first)
python3 tools/class_types.py convert @TOKey         # dry run: converted / local (why) / n/a per unit
python3 tools/class_types.py convert @TOKey --write # rewrite units and their `headers` in config/project.json
python3 tools/class_types.py check                  # header contract, no compiler needed (also a unit test)
```

Delete any header that no unit includes; `check` requires every header to have a user. Rebuild
every changed unit. If a unit isn't exact, restore it and rerun with `convert --skip UNIT_ID`.

## Verification rule

A type change is a source-only rewrite and has to prove it changed nothing:

1. Every converted unit compiles to bytes identical to its reference range.
   `python3 tools/verify_source.py` builds every unit twice from fresh.
2. `python3 tools/progress.py --record` may change only the proof hashes of the changed sources
   and manifest; the figures must stay the same.
3. `python3 tools/verify_source.py --check`, the unit tests,
   `python3 tools/project.py build --source-only` (`source_only_build_exact`),
   `python3 tools/check_publication.py` and `python3 tools/nonmatching.py check` must all pass.
4. `tools/matching.py` must not change.

If a header change breaks any unit that already includes the header, fix the header. Never
change a unit's behaviour to fit the header.
