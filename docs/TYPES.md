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
| aggregate / overlap | `Vector3 f3c` in one unit, `float f40` in another |
| unit-local aggregate | an embedded `Block_p0_78` that no shared header describes |
| pointer vs int | `Arg0_90 *f90` against `int f90`, where the header's type doesn't compile exactly in the unit (see `--loose`) |
| signedness | `unsigned char` against `char` |
| member rename clash | the unit's name and the header's name differ, and another struct in the unit also uses one of them |
| beyond size | a view running past the constructor's size field (`Vector3 f38` in a 0x40-byte object) |
| `sizeof` of the local view | prefix views pinned with `check_prefix[sizeof(...)]` |
| virtual signature | a slot called with unit-local parameter types (`Frame *`) |

## Constructors and pointer-vs-int views

- A C++ constructor or destructor that installs a vtable can't name the vtable pointer, since
  in C++ it is the class's implicit vptr. It writes through the `TOBJECT_VTABLE(o)` macro
  instead (`src/include/object_vtable.h`, `*(void **)((char *)(o) + 0x18)`). `convert` makes
  this rewrite (`((ObjectData *)o)->dispatch = ...` becomes `TOBJECT_VTABLE(o) = ...`) and
  adds the header to the unit.
- `convert --loose` also tries units whose view of a field is `int` where the header has a
  pointer, or the reverse. Such a unit keeps only if it compiles and stays byte-exact under
  the header's type; otherwise it goes on the `--skip` list.

## Units not named for a class method

Most matched units are named for what they do, not for a class. `config/class-attribution.json`
records the units that were adopted onto a class header by evidence instead, with the signals
that support the attribution:

- `slot`: the function is a vtable slot of the class, or a common ancestor of every class whose
  vtable has it.
- `ctor`: it is the class's constructor or destructor (stores its vtable and class name).
- `callers`: every caller is a method of the class and passes `this`.
- `layout_unique`: the unit's view of its first parameter matches one class family's header on
  3 or more fields past the TObject header, within the class size.
- `layout` / `layout_any`: weaker layout agreement, only counted next to another signal.

A unit is attributed with one strong signal (`slot`, `ctor`, `layout_unique`) or two that agree.
Any disagreement leaves it unattributed. The unit then converts like any other and must stay
byte-exact. `convert --attribution config/class-attribution.json` replays the attribution;
`check` verifies every attributed unit includes its class header.

Attributed units are evidence too (`emit --attribution FILE`). They can fill a header's gaps,
and they can give a class its first header. An existing header is only ever extended: every
field and slot signature it had stays, and `emit` refuses anything else. A new field must not
overlap or contradict a subclass's committed header, and it must not bring `vector3.h` into a
header whose users don't declare it. After a header grows, every unit that includes it is
rebuilt, not just the newly converted ones.

Two late signals:
- `tobject_layout`: the unit's view touches only the documented TObject header, each field at
  its documented width and kind, with at least two fields or the vtable, and calls no virtual
  slot past TObject's 5.
- `callers_propagated`: every caller is already attributed to one class, by name or here, and
  passes `this`, and the unit's view fits that class's header. This is iterated to a fixpoint.

`TObject.h` describes TObject's own units with the documented names (`tag`, `flags`,
`link_08`, `link_0c`, `parent`, `child`, `vtable`, `size`). It is the root of nearly every
class, but its subclasses' flattened headers came first and disagree among themselves in that
area (`int tag` against `void *name`, `short` against `unsigned short size`). So `TObject.h` is
not an authority for subclass headers, and TObject-attributed units are not evidence for them.

Two more rewrites are applied during conversion, and again kept only when the unit stays exact:
- a `float` that falls inside a header `Vector3` becomes a member access (`o->f40` becomes
  `o->f3c.y`);
- a static `sizeof` assertion that only guards the unit's local view is dropped with that view.

## Adding classes

```
python3 tools/class_types.py layout @TOKey          # merged layout + conflicts (@ = class and subclasses)
python3 tools/class_types.py emit @TOKey            # write src/include/classes/*.h (bases first)
python3 tools/class_types.py convert @TOKey         # dry run: converted / local (why) / n/a per unit
python3 tools/class_types.py convert @TOKey --write # rewrite units and their `headers` in config/project.json
python3 tools/class_types.py convert @TOKey --loose --write --skip UNIT ...   # also try pointer-vs-int views
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

## Record types (non-class shared types)

`src/include/types/<Name>.h` holds shared types for data that isn't a TObject class: dialog,
view and timer records and the like. `config/record-types.json` names each type, states the
evidence for it, and lists its units:
- `units`: a family of matched units that pass the record to each other as their first argument
  (found by clustering this-passing calls among units with no class attribution);
- `layout_units`: units whose view of their first argument matches that record header, and no
  other record or class header, on 3 or more fields.

Record headers are built and converted by the same tool and rules as class headers (`emit` /
`convert` with the record's name). Headers are only ever extended, a unit stays local on any
conflict, and every converted unit must be byte-exact. A record has no vtable and no assumed
size. When two offsets carry the same unit name, the later one gets its offset as a suffix
(`phase_b8`).

A registry entry can give evidenced field names (`"names": {"0x2": "entity_id"}`), and these
win over the units' mechanical names. `SubcommandPacket` covers only the common 6x header: the
handlers that read nothing beyond the entity id at +2 use it, and handlers that read a payload
keep their local views. `convert --loose` also tries a signedness difference against the header,
and keeps the unit only if it compiles exactly. The unsigned `entity_id` readers did not.

A layout assertion that includes the local view's `sizeof` keeps its offset terms. Only the
size term goes, and the compile checks the offset terms against the header.

## Future work

This track covers class objects only. Roughly 6,000 matched units still use per-unit types
because they have no object struct, use a struct that no class header fits, or already use one
of the older shared views (FollowEffect, ColorEffect, effect views). Most of these are not
TObject-derived objects at all: they are effect records, render state, resource and list
nodes, and SDK data. Covering them needs non-class shared types. Each would need its own
evidence base: allocation sizes, the tables and lists that hold the records, and the functions
that create and walk them, rather than vtables and class-name strings. The same rules would
apply: headers are only ever extended, a unit stays local on any conflict, and every changed
unit must stay byte-exact. The 1,024 units whose view fits several flattened class headers
could also be revisited once more of the class hierarchy is recovered, since a parent link
turns several look-alike headers into one family.
