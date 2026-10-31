# Systems map

This page is a guide to *Phantasy Star Online Ver. 2* for the European Dreamcast (build **2OPF**). It is for
anyone who wants to read, mod or port the game: it says which part of the executable does what, where it lives,
and how sure we are. It is a map, not a specification. Every claim gives its evidence and a confidence level.

- **Names are proposals.** No original symbol names survive for this build. The names here and in
  [`config/names.json`](../config/names.json) are descriptive reconstructions. They have **not** been applied to
  `src/` yet, so source files still use mechanical names such as `operation_8c0330e4`. Several files may use different
  local names for the same address.
- **Confidence.** *High*: a direct structural or textual proof (a table, a string that names the API, an address
  published by newserv that equals ours). *Medium*: a consistent but indirect argument (call pattern, vtable slot
  position, unique usage). *Low*: plausible but unproven. Low claims are only described here; they never become names.
- **Community sources.** Many network and object names come from
  [newserv](https://github.com/fuzziqersoftware/newserv), the public PSO server project (commit `8a75f6ef`). When
  an entry relies on it, its evidence says so. The rest comes from the structure of the decoded executable:
  vtables, class-name strings, tables, the call graph, SDK version banners and SDK error strings.
- **Classes.** C++ classes recovered from vtables and class-name strings are listed in [CLASSES.md](CLASSES.md).

## How to look a function up

1. **By address.** `python3 tools/names.py 0x8c0330e4` prints the proposed name, its confidence and its evidence.
   If the address is inside a function, it also reports the nearest named function below it and the repo
   module that contains the address. Addresses are runtime addresses; the executable loads at `0x8c010000`.
2. **By name.** `python3 tools/names.py TObject_ctor`. For a substring search, use
   `python3 tools/names.py --grep Volopt`.
3. **In the sources.** Search `src/` for the address without `0x` (e.g. `8c0330e4`). Module file names and most
   symbols include it. Callees are bound by address in each unit's `symbols` in `config/project.json`.
4. **By system.** Use the map below. Game code is laid out per source file, not per system, so for objects,
   enemies, items and windows it is usually faster to find the class in [CLASSES.md](CLASSES.md) and follow its
   constructor and vtable.

`config/names.json` holds two sets: **curated** (about 850 reviewed entry points: network handlers, DAT object
factories, the main loop, file/sound/save layers, SDK APIs and core classes) and **extended** (about 4,050
mechanical names: class constructors/destructors/vtable slots, quest-opcode handlers and per-area asset loaders).
`python3 tools/names.py --lint` checks the file. The manifest is not a build input and does not affect
verification.

## Summary

| System | Where | Key entry points | Conf. |
|---|---|---|---|
| Startup | `0x8c340848` (SHC crt) → `0x8c01bbec` | `startup_8c340848`, `game_main` 0x8c01bbec, `game_init` 0x8c01bc98 | high |
| Main loop / game modes | `0x8c01bbec`–`0x8c01c260`, table `0x8c2e3258` | 35 {init,frame,exit} modes, `request_game_mode` 0x8c01c1a4, `mode_main_frame` 0x8c1cbc88 | high (loop), medium (frame order) |
| Task/object system | TObject ctor `0x8c0330e4`, vtable `0x8c261580` | 730 classes; slots dtor/update/render/render_shadow; heap `0x8c122700` + `*0x8c4d97e0` | high |
| Rendering | Ninja `0x8c37b5c4`–~`0x8c391d00`, Kamui 2 ~`0x8c391d00`–`0x8c3c8000` | njRotateY (435 callers), njPush/PopMatrix(Ex), `wait_vsync_and_flip` 0x8c380516 | high (module), medium (names) |
| Player | `TObjPlayer` vtable `0x8c261318` (87 slots, size 0xc7c) | ctors 0x8c01e920/0x8c01ef50/0x8c01f4f0, dtor 0x8c01fa18; 6x3E–6x58 handlers | high |
| Enemies / NPCs | `TObjEnemy` vtable `0x8c260fd8` (89 slots, size 0x390); enemy DAT tables `0x8c2edfc8` | 66 enemy/NPC factories, 41 TObjEne*, 25 TBoss*, 36 TObjNpc* | high |
| Map objects | object DAT tables `0x8c2e8ad8` | 186 object-type factories (TObjDoor, TObjLight, TOKey* …) | high |
| Items / inventory | TItem update `0x8c073578`; TItemWpn* (142 classes), TItemObj*, TItemMag | 6x25–6x2B, 6x59–6x63 handlers; ItemPMT/ItemCT tables | high/medium |
| Quests | opcode table `0x8c317ba8`, interpreter `0x8c16c27c` | 369 `quest_op_*`, TQuestThread, TQuestList{Offline,Online,VM} | high |
| Menus / UI | `TWindow*` (73 classes), `TShop*` (11), TWindowCtrlMain | constructors in [CLASSES.md](CLASSES.md) | high (classes), low (behaviour) |
| Text / fonts | `load_system_font` 0x8c04ae94 (S18all04.fon) | TNECFontEORFunction, TFontSmall* | medium |
| Networking (PSO protocol) | cmd table `0x8c2e7628`, subcmd table `0x8c2ed3dc` | 61 command + 147 subcommand handlers, `dispatch_game_command` 0x8c02d368, TGameProtocol | high |
| Networking (stack) | ACCESS nt* `0x8c1f3000`–`0x8c205000`, ntTcp `0x8c3c88e8`, modem `0x8c3d0694`+ | PPP/LCP, dialer 0x8c2003cc, TTcpSocket/TUdpSocket | high (module) |
| Sound | sd driver `0x8c343050`–`0x8c349500`, CRI ADX/ADXT/mwSnd `0x8c349590`–`0x8c355700` | `sound_init` 0x8c05f670, `bgm_init_adxt` 0x8c100164, `play_se` 0x8c05fbf8 | high (modules), medium (play_se) |
| Files | gdFs/gdCi/cvFs/ADXF (`0x8c34c95a`…`0x8c358a60`), game TGStream `0x8c1a80d4` | ADXF_Open/ReadNw32, `file_load` 0x8c104d00, per-area asset tables `0x8c2ed250`/`0x8c2eeea4` | high |
| Save (VMU) | game layer `0x8c010080`–`0x8c0102ec`, SDK bu `0x8c37226c`–`0x8c378000` | `vmu_find_file`, PSO______SYS load/save 0x8c181074/0x8c1818c0, char file `0x8c4db9e0` | high (files), medium (wrappers) |
| Input | Shinobi pd/pdKbd `0x8c369b72`–`0x8c36b100` | game-called 0x8c369eb8, `reset_controller_state` 0x8c01d9dc | medium |


## Image layout (high confidence)

| Range | Contents | Evidence |
|---|---|---|
| `0x8c010000`–`0x8c010030` | Entry stub. It jumps through the pointer at `+0x2c` to `0x8c340848`. | `config/analysis.json` evidence list |
| `0x8c010080`–`0x8c260000` | Game code, compiled with CodeWarrior (10,940 admitted CW units, all here). Classes are **not** grouped by system: `TItemWpn*` constructors span `0x8c077860`–`0x8c255e68`, and `TWindow*` spans `0x8c0dc9ac`–`0x8c254f6c`. The code is laid out per source file, so use class membership rather than address ranges to find a system. | ctor addresses in [CLASSES.md](CLASSES.md) |
| `0x8c1f0000`–`0x8c205000` | A Hitachi-SHC-shaped library block inside the game range. | [START_HERE.md](START_HERE.md), SDK version banners |
| `0x8c260000`–`0x8c282000` | Vtables and function tables. Of the 1,147 vtables known, 1,119 are already typed in `src/data/vtables_*.c`. | `config/data.json` |
| `0x8c284000`–`0x8c340000` | Strings, float tables and pointer tables, plus the DAT constructor tables (`0x8c2e8ad8`…) and the network handler tables (`0x8c2e7628`, `0x8c2ed3dc`). | `src/data/strings_*.c`, tables below |
| `0x8c340000`–`0x8c3f0000` | SDK libraries (Katana: Kamui/Ninja/Shinobi/sound/GD/MPEG/network stack), compiled with SHC. | see SDK section |
| `0x8c3f0000`–`0x8c40a000` | SDK data and the tail of the MPEG decoder (`0x8c400afc` …). | `src/sdk/shc_mpeg_mc_8c400afc.c` |
| `0x8c40a000`+ | BSS (not in the image). Includes `root_protocol` at `0x8c418a00`, the item/heap globals at `0x8c44be98`… and the character file at `0x8c4db9e0`. | newserv `GetExtendedPlayerInfoDC.s` (2OPF column) |

The build is **2OPF** (PSO DC v2, Europe). This is confirmed three ways:

- newserv's `System/VersionDetect.s` identifies v2 EU by the address `0x8C2E7CE0`, which is exactly
  the repo's `src/data/strings_8c2e7ce0.c` ("DreamCast Lobby Server. Copyright SEGA Enterprises. 1999").
- The 2OPF column of `RareDropNotificationsDC.s` names `0x8C05FBF8`, the repo's parked target `emit_5fbf8`.
- The DAT constructor addresses match newserv's 2OEF ones after piecewise shifts. They are identical below
  `0x8c034500` and shifted by −0x364 … −0x5524 above that.

## Task / object system (high confidence)

- **TObject** (vtable `0x8c261580`, ctor `0x8c0330e4`, dtor `0x8c03311c`): the engine's universal node.
  It has the same layout as newserv's GameCube `TObject`:
  - `+0x00` class-name `char*`
  - `+0x04` u16 flags
  - `+0x08`/`+0x0c` sibling links
  - `+0x10` parent
  - `+0x14` first child
  - `+0x18` vtable

  The repo's `src/include/hierarchy.h` already models this as `HierarchyNode`.
- **Vtable slots**: 0 destroy (deleting destructor), 1 update, 2 render, 3 render_shadow, 4 debug print.
  The base implementations of slots 1–3 are the empty stubs `0x8c0111c4`, `0x8c0111c8` and `0x8c0111cc`.
  These three stubs occur in 96, 277 and 713 vtables respectively. Slot 4 `0x8c033470` is shared by 1,114
  vtables and forwards to the debug printer `0x8c011efc`.
- **Object size field**: every constructor writes the object's size to the u16 at `+0x1e`. For example,
  the TObjEnemy ctor writes `0x390`. This matches the size passed to the allocator in 336 of the 347
  cases where both are known.
- **The common 14-slot base** (vtable `0x8c2612d8`, ctor `0x8c01d1ec`, 58 direct callers; the repo calls
  it `shared_object`) adds slots 5–13, which more than 500 vtables inherit. No class-name string is set
  in its constructor, so its original name is unknown.
- **Heap**: allocate is `0x8c122700`, called as `(heap, size)`. The game-object heap handle is
  `*0x8c4d97e0`. Factories pass the default parent from `*0x8c44be98`.
- **Object hierarchy dump**: `0x8c033330` prints the tree recursively with indentation, and
  `0x8c033b84` prints "TObject" statistics. Both go through `0x8c011ef4`/`0x8c011efc`.
- **Classes recovered**: 730 named classes, with sizes for 721 of them. The two biggest families are
  `TObjEnemy` (89 slots, size 0x390), with `TObjEnemyCustom`, `TObjEneDD` and `TObjNpcBase` as
  intermediate bases, and the 59-slot item-weapon family `TItemWpn*` (142 classes). See [CLASSES.md](CLASSES.md).

## Startup and main loop (high)
- `0x8c340848` (SHC crt startup) calls `game_main` `0x8c01bbec`.
- `game_main` calls `game_init` `0x8c01bc98` once. It then loops while `g_game_mode_state.current`
  (`0x8c41cb00`+0) is nonzero. Each pass calls `g_game_mode_table` (`0x8c2e3258`, 35 entries of
  {init, frame, exit}): init once, frame repeatedly (incrementing `g_frame_counter` `0x8c418244`) until
  `+0x10` (the exit request) is set, then exit. After that the next mode is copied from `+4`. Mode 0
  ends the loop and runs `game_shutdown` `0x8c01c054`.
- `request_game_mode` `0x8c01c1a4` (37 callers) and `get_game_mode` `0x8c01c25c` (83 callers) form the
  public API.
- Modes identified: 1 SEGA logo (TAdSEGAlogo), 6 opening movie (pso_op3600.sfd), 16 scene transition
  (map_visuallobby, already named in the repo), 17 ending (ed_128al), 18–25 SFD movies, 27 title
  (title.adx, TAdBack). Modes 2, 3, 8, 10–13, 28, 33 and 34 share `mode_main_frame` `0x8c1cbc88` and
  `mode_main_exit` `0x8c1cbf08` (medium).
- The standard frame (from `mode_main_frame`) runs in this order: input (`0x8c01daf0`, `0x8c01dea8`),
  root update, root render, describe and output traversals of `g_root_task` `0x8c44bec8`, the file task
  queue, sound update `0x8c05f9e4`, then `wait_vsync_and_flip` `0x8c380516` (medium for the input and
  sound roles).
- `create_standard_task_tree` `0x8c014498` (medium) is called first by almost every mode init. It
  builds the six fixed task nodes.


At the SDK level, startup runs `startup_8c340848` → section init `init_sections_8c340888` → the Shinobi init (it references the "syStartCw Ver 1.17" / Shinobi banners) → `game_main`.


## Task/object system: game-side details
- TObject (newserv layout: name +0, flags +4, sibling links +8/+0xc, parent +0x10, children +0x14,
  vtable +0x18). The constructor is `0x8c0330e4` and the vtable is `0x8c261580`. Its slots are destroy,
  update `0x8c0111c4`, render `0x8c0111c8`, render_shadow `0x8c0111cc`, and slot 4 `0x8c033470`.
  Slot 4 is shared by 1114 vtables. The default update, render and render_shadow are empty 4-byte
  functions.
- The 14-slot base vtable `0x8c2612d8` belongs to the constructor `0x8c01d1ec` (58 callers), which
  calls the TObject constructor first (medium).
- Allocation: `heap_alloc` `0x8c122700` (first-fit BlockHeap, from source). The object heap handle is
  `g_object_heap` `0x8c4d97e0`. DAT factories call `heap_alloc(*0x8c4d97e0, size)` and then the
  constructor with parent `*0x8c44be98`. The SDK malloc/free thunks are `0x8c011ecc`, `0x8c011e9c` and
  `0x8c011ec0`. The C++ runtime has operator new `0x8c18de4c` (bad_alloc string), delete `0x8c18de08`
  and exception strings.
- Debug output is stripped: `0x8c011ef4` and `0x8c03ef80` are empty and still receive the format
  strings.


## Player (high)

- `TObjPlayer`: vtable `0x8c261318` (87 slots), size `0xc7c`, three constructors (`0x8c01e920`, `0x8c01ef50`,
  `0x8c01f4f0`) and destructor `0x8c01fa18`. Player-state subcommands are dispatched to:
  - movement: 6x3E stop, 6x3F/6x20 set position, 6x40 walk, 6x42 run;
  - attacks: 6x43–6x46;
  - techniques: 6x47/6x48;
  - damage and death: 6x4B–6x4F;
  - photon blast: 6x37–6x3B, 6x49.

  These handlers are at `0x8c1e92f8`–`0x8c1f1258`.
- Player sub-objects found through classes: `TPlyItem`, `TPlyOnCreated`, `TPlyOnCountOver` and the
  techniques `TTec*` (21 classes, e.g. TTecMegid, TTecBarta).

## Enemies, NPCs and bosses (high)

- `TObjEnemy` (vtable `0x8c260fd8`, 89 slots, size 0x390, ctor `0x8c012008`) is the base. Intermediate bases:
  `TObjEnemyCustom` (0x3a8), `TObjEneDD` (109 slots; De Rol Le family), `TObjNpcBase` (98 slots).
- The enemy DAT tables give 66 type → factory bindings (see the next section). Bosses: `TBoss2DeRolLe` (0x77c),
  `TBoss3Volopt*` (6 parts), `TBoss4*` (Dark Falz forms), `TBoss1Dragon*` effects. Boss subcommands are
  6x10–6x19 and 6x84/6x85.

## Map objects and enemies: DAT constructor tables (high)

- **Object tables**: 16 per-area tables starting at `0x8c2e8ad8`. **Enemy/NPC tables**: 14 tables
  starting at `0x8c2edfc8`. Each record is `{u32 type, factory, float 250000.0, u32 0}`, and each
  table ends with type `0xFFFF`.
- Joined with newserv `notes/dat-constructor-tables.txt`, they give **252 type → factory** bindings:
  - 186 object types, e.g. `0x0004 TObjLight → 0x8c0ed844`, which allocates 0x104 bytes and calls the
    ctor `0x8c0ed888`;
  - 66 enemy/NPC types, e.g. `0x0040 TObjEneMoja → 0x8c038738`.
- The class name recovered independently from the constructor agrees with newserv's label in 164
  cases. The 23 "differences" are cases where the factory builds a shared base class, e.g. the
  forest warps build `TObjWarpBase`.
- Missing types (Dragon `0xC0`, De Rol Le `0xC1`, Dark Falz `0xC8`) live in short boss-only tables
  that the scanner did not reach. Their classes are still named via constructors, e.g. `TBoss2DeRolLe`.


## Files and resources (high)
- GD streaming class TGStream: `0x8c1a80d4` opens a GSL archive and reads its TOC (48-byte entries,
  max 255). `0x8c1a86a8` opens the per-area archive from `g_area_gsl_table` `0x8c323e8c`
  ("gsl_city.gsl"…). `0x8c1a8484` reads sectors and waits in `loading_wait_frame` `0x8c104c60`, which
  keeps the task tree running during loads.
- Wrappers: `file_load` `0x8c104d00`, `load_resource` `0x8c104e9c`, `load_named_resource`
  `0x8c104f68`, `malloc_load_file` `0x8c1050d8` ("MallocLoadFilePrc") and `load_pvm_file_tls`
  `0x8c118528` (its own error string).
- Per-area asset tables (high): `g_area_object_asset_tables` `0x8c2ed250` and
  `g_area_enemy_asset_tables` `0x8c2eeea4`. Each holds 18 pointers, one per area, to function tables of
  (load, release) pairs. The load slots open `bm_*.bml`/`*.nj` files. They are driven by
  `load_/release_area_object_assets` `0x8c033f14`/`0x8c033f5c` and the enemy equivalents
  `0x8c03c3ec`/`0x8c03c414`. All 314 pair members are named from the bml file they load (extended set in `config/names.json`;
  high where a .bml string is present, medium otherwise).


## Areas and maps (high/medium)
- Current area: `g_current_area` `0x8c44be04`, read through `get_current_area` `0x8c032b10`
  (200 callers). newserv's 2OPF rare-drop patch compares a floor item's area byte with this global.
- Data files: fogentry.dat (`0x8c121334`), lightentry.bin (`0x8c013f54`), SetDataTableOnUlti.rel,
  BattleParamEntry(_on).dat (`0x8c17963c`), npcplayerchar.dat, map_city_off_j.bin, judgemes*_HG.rel.


## Items (high/medium)
- `TItem_update` `0x8c073578` is high: it is newserv's "TItem::update" (patch site 0x8c073654) and the
  shared slot 1 of 177 TItem* vtables.
- Also: the on-floor helper `0x8c07383c`, `minimap_add_marker` `0x8c102cd0` and `create_floor_item`
  `0x8c162de4` (the 6x5F hook target).
- MAG render: `TItemMagSub_render` `0x8c1f2354` (newserv InvisibleMag).
- Tekker window code: `0x8c19b710` (FastTekker).
- Quest drop restriction: `0x8c219e54` (RaresInQuests).
- Tables: ItemPMT.prs `0x8c157ff0`, ItemCT/PT/RT.afs `0x8c218998`, ItemKT.afs, ItemModel/ItemTexture.afs
  `0x8c193bf8`.

- Class families: 142 weapon classes `TItemWpn*` (59-slot vtables), 13 `TItemObj*` consumables (base `TItemObject`, size
  0x148), 12 `TItemEff*` effects, `TItemMag` (48 slots). Inventory subcommands: 6x25 equip, 6x26 unequip, 6x27 use,
  6x28 feed MAG, 6x29 delete, 6x2A drop, 6x2B create. Floor items: 6x59 pickup, 6x5A request pickup, 6x5C/6x63
  destroy, 6x5D drop meseta/stack, 6x5E shop buy, 6x5F drop from box/enemy, 6x60 request drop.


## Quests (high)
- `g_quest_opcode_table` `0x8c317ba8` holds 512 pairs of {argument decoder, handler}: opcodes
  0x00–0xFF, then 0xF800–0xF8FF. All 369 opcodes that newserv QuestScript.cc marks valid for DC v2 have
  non-null handlers, and no other entry is populated. That exact match is the basis for the 369
  `quest_op_*` names.
- Interpreter: `quest_thread_run` `0x8c16c27c` (fetches a byte, applies the 0xF8 prefix, dispatches,
  and loops until the sync flag `0x8c4db428` is set). The script base is `0x8c4db400`, the pc
  `0x8c4db420` and the register array pointer `0x8c4db408`. TQuestThread creation is `0x8c1735f8`
  (called by opcode `thread`).
- Quest lists: TQuestListOffline (QtOffTitleList_j.rel), TQuestListOnline ("quest_online"), and
  TQuestListVM ("quest_vm_load", VMU files PSO______0xx, `0x8c22ab48`).


## Menus and UI (high for class identity, low for behaviour)

Menus are object classes. There are 87 UI classes, each with a constructor, vtable and size in [CLASSES.md](CLASSES.md). They
include `TWindowCtrlMain` (created by every mode), `TWindowMainMenu`/`TWindowMainMenuCommand`, `TWindowChat`,
`TWindowSubSymbolChat*`, `TWindowKeyBoardSoft/Hard`, `TWindowSubItemList`, `TWindowStatus`, `TWindowSubQuestBoard`,
`TWindowMessage*`, and the shop sequences `TShopSequence`, `TShopEquipmentSequence`, `TShopItemTecSequence`
and `TShopWindowBase`. Title and attract screens are the `TAd*` classes (TAdTitle, TAdSEGAlogo, TAdPSOPlay …). Per-window
behaviour (slots 5+) is not yet named. Their constructors and update/render slots are in the extended set of `config/names.json`.


## Text and fonts (medium)
- `load_system_font` `0x8c04ae94` loads S18all04.fon and creates TNECFontEORFunction. The text set
  key is "TextJapanese" (`0x8c04c448`), and symbolchat.dat is loaded by `0x8c21f234`.
- The font task classes (TFontSmallTask, TFontSmallHelp, TFontSmallLobby) are covered by the class recovery in [CLASSES.md](CLASSES.md).


## Networking

### PSO protocol (game code)


- **Game-command handler table** `0x8c2e7628`: 61 CodeWarrior pointer-to-member records
  `{-1, handler, 0}`. Every handler address is identical to newserv's DCv2USA column, so the low
  code (below `0x8c034500`) is byte-identical between US and EU.
  - The dispatcher is `0x8c02d368`. It calls `ptmf_scall` `0x8c18e6e4` and references the
    lobby-server banner.
  - Handlers live at `0x8c02dac4`–`0x8c030530`. For example, `01` lobby message box is
    `0x8c02dac4`, `64` join game is `0x8c02e098`, `13`/`A7` quest/download file writes are
    `0x8c02e224`/`0x8c02e1ec`, and `B2` execute code is `0x8c02fcf4`.
- **Subcommand table** `0x8c2ed3dc`: 147 records `{u16 cmd, u16 flags, u32 handler}`, ending with
  `6x00`. The flags (1 = lobby, 2 = Pioneer 2, 4 = field) match newserv. Handlers are spread through
  the game code next to the systems they drive:
  - movement and attacks: `6x3E`–`6x4F` at `0x8c1e92f8`–`0x8c1efad8`;
  - item pickup and drops: `6x59`–`6x63` at `0x8c0739a0`, `0x8c194e48`, …;
  - bosses: `6x10`–`6x19`;
  - join sync: `6x6B`–`6x72` at `0x8c01ae4c`–`0x8c01b31c`.
- **Subcommand dispatchers** belong to `TGameProtocol` (ctor `0x8c036a0c`, vtable `0x8c2615b8`):
  `0x8c036b4c`, `0x8c036c38` (from `60`/`62`/`6C`/`6D`) and `0x8c036d04` (send path).
- **Sockets**: `TTcpSocket` (ctor `0x8c02cc88`) and `TUdpSocket` (`0x8c09c9a0`).
  `0x8c0158bc` holds the server host names `master.pso.dream-key.com` and `sg607634.sonicteam.com`.
- **Protocol helpers from newserv**: `root_protocol` is at `0x8c418a00`, and
  `TProtocol::wait_send_drain` is `0x8c010a1c`.


Other game-side facts from string analysis:
- `TProtocol_wait_send_drain` `0x8c010a1c` and `g_root_protocol` `0x8c418a00` come from newserv.
- Login servers: `g_login_server_table` `0x8c2e2f24` (master.pso.dream-key.com /
  sg607634.sonicteam.com / ddplanet.sega.co.jp on ports 9200/9201). The idle-disconnect check is
  `0x8c01b5d0` (newserv DisableIdleDisconnect site 0x8c01b6a8).
- The PPP/modem/TCP library at 0x8c1f0000–0x8c207000 has source-file debug strings (custom\emb_misc.c,
  kernel\ppp.c, pppcon\pppapi.c, tcppapi\tcppapi.c) and ACCESS Co. copyright. A few clear
  string-named helpers are included (LCP code/state names, modem dial/result, PAP response). The rest is
  left to the SDK section below.


### Network stack and modem (SDK)

- The ACCESS Co. nt* stack occupies the SHC block `0x8c1f3000`–`0x8c205000`: ntAsk, ntPpp, ntDhc, ntDns,
  ntDmcn, ntInf, ntLD and ntIniMdm. Entry points:
  - `ntAsk_init` `0x8c1f8c96`;
  - PPP LCP/FSM name tables `0x8c200d64` and `0x8c200de2`;
  - modem result parser `0x8c200848` and dialer `0x8c2003cc`;
  - `tcppapi_init` `0x8c203e70`.

  Evidence: the DEBUG `%s(%d)` source paths (custom\emb_misc.c, kernel\ppp.c, tcppapi\tcppapi.c). Confidence: high.
- ntTcp glue sits at `0x8c3c88e8`–`0x8c3ca800` ("ntTcp Ver 1.05"). The built-in modem driver (Rockwell controller,
  TRISIGNAL data pump) starts at `0x8c3d0694`; `modem_identify` is `0x8c3d203c`.


## Sound (high/medium)
- `sound_init` `0x8c05f670` loads manatee.drv and then runs `bgm_init_adxt` `0x8c100164` (two ADXT
  BGM streams plus one extra, error "can't create ADXT-BGM #%d").
- BGM: the name table is `0x8c308448` and the area BGM archive is slbgm_forest.afs (`0x8c100850`).
- Sound effects: bank table `0x8c2fc788` (se_*.mlt). `play_se` `0x8c05fbf8` is medium, based on
  newserv's rare-drop sound id 0x50013 and its 570 callers. This is the repo's parked target
  `emit_5fbf8`.


SDK side: the sd driver (AICA) ← CRI mwSnd/mwSb ← mwRna/ADXT/ADXSTM/LSC. ADX is used for music and streams. See the SDK module map below.


## Save / VMU (high/medium)
- VMU layer at 0x8c010080–0x8c0102ec: `vmu_init`, the per-port event callback, `vmu_find_file`
  (8 drives from `0x8c2e20b8`), free-block search, and load/save wrappers over the SDK backup library
  (0x8c3725xx–0x8c372fxx).
- Files: "PSO______SYS" (`0x8c319870`, load `0x8c181074` / save `0x8c1818c0`), "PSO______2GC"
  (`0x8c319912`), the VMU description strings PSOV2/MAIN_DATA, PSOV2/GUILD_CARD and PSOV2/DOWNLOAD, and
  the screenshot "PSO______IMG" (`0x8c0425ee`).
- Character data (newserv 2OPF): `0x8c4db9e0`/`0x8c4db9e4`. The character-save flows `0x8c17e6f0`,
  `0x8c17fff4`, `0x8c1811a0`, `0x8c181dec` and `0x8c18280c` contain newserv's ItemLossPrevention 2OPF
  patch sites (left unnamed, medium as a group).
- Anti-tamper (medium): `0x8c199628` hangs if 0x8c004000–0x8c008000 is nonzero before loading the
  difficulty texture.


SDK side: the bu VMS file system is at `0x8c37226c`–`0x8c378000` ("bu Ver 1.51"). The game calls its wrapper layer `0x8c3727a0`–`0x8c372ebc`. Which official bu* API each wrapper is remains unestablished (medium).


## Input (medium)
- `reset_controller_state` `0x8c01d9dc` resets 4 port records at `*0x8c41cba0`+0x20.
- Every mode creates TCameraCtrl (`0x8c0a1448`) and TWindowCtrlMain.
- Menus and windows are almost entirely TWindow* classes, with names available only through their
  constructors (see [CLASSES.md](CLASSES.md)).
- SDK: pd/pdKbd (maple) at `0x8c369b72`–`0x8c36b100`. The game calls `0x8c369eb8` (13 callers), `0x8c36a868` and `0x8c36a880`.


## Rendering (high for modules, medium for names)
- Ninja (math, matrix stack, print, draw) on top of Kamui 2. CRI mwRnv2
  feeds Sofdec frames into Kamui textures. Confidence: high for the module; individual
  Kamui entry names were not identified.
- Game side: render traversal of the task tree in `mode_main_frame`; per-object `*_render`/`*_render_shadow` vtable slots; `wait_vsync_and_flip` `0x8c380516`. The Ninja math names (njRotateX/Y/Z, njTranslate, njPush/PopMatrix, njSin/njCos …) are in `config/names.json`.


# SDK and library detail


Scope: 0x8c340000–0x8c3f0000 (SDK/middleware, SHC-compiled), the SHC library block
0x8c1f3000–0x8c205000 (network stack), and the C runtime. Evidence comes from the decoded
image (call graph and string references), the repo's SHC units in
`src/sdk` / `config/project.json`, and newserv (vendor copy, commit in `config/decoded.json`).
SDK names are in `config/names.json` (177 entries: 91 high, 86 medium).

### Method

1. **Library version banners.** The data segment at 0x8c3f30e0–0x8c3f8eb4 holds the
   build banners, one per library. Their order is the link order, so it gives the module
   order for the code. A few banners have a single code reference, which marks the
   module's init/banner routine.
2. **CRI Middleware error strings.** These name their function, for example
   `E9040822:'adxf' is NULL.(ADXF_Stop)`, `cvFsOpen #1:...` or
   `E1233:sdPstmPlay return error in mwSndPlay`. Shared literal pools blur
   function boundaries, so each string-load was attributed with an
   rts/literal-pool/prologue heuristic. A routine got an API name only
   when its strings name a single API (high). Cases that were ambiguous or duplicated
   were resolved by hand (medium).
3. **Ninja math.** Identified by instruction shape plus the Ninja calling convention:
   matrix argument in r4, where NULL means the current XMTRX; Angle in r5 → `fsca`. Also
   the identity matrix at 0x8c400500 and the matrix-stack globals at
   0x8c57553c/0x8c57561c/0x8c575620. Official nj* names are given only where the
   semantics are unambiguous (medium). Everything else in this group got a descriptive name.
4. **newserv 2OPF anchors.** `malloc9` = 0x8C36CD2A and `free9` = 0x8C36CDF8
   (GetExtendedPlayerInfoDC.s). Also `VersionDetect.s`: the v2 EU marker is 0x8C2E7CE0, which
   is the "DreamCast Lobby Server. Copyright SEGA Enterprises. 1999" string, so this build is 2OPF.

### Module map (code order follows banner/link order)

| Range (approx.) | Module | Key entry points | Evidence | Conf. |
|---|---|---|---|---|
| 0x8c340848–0x8c340cb0 | Startup (SHC crt, `syStartCw Ver 1.17`) | `startup_8c340848` (= main_startup in config/analysis.json), `init_sections_8c340888` | Existing SHC unit shc_startup. References the Shinobi banner. Decoded image offset 0x2c points here | high |
| 0x8c340cb0–0x8c343000 | CRI Sofdec movie player (mwPly/mwSfd "Ver.2.28PSO2B", a PSO-specific build) | mwPlyCreateSofdec 0x8c340cb0, mwPlyStartFname 0x8c3411d0, mwSfdStop, mwSfdGetStat, mwSfdPause, mwPlyInitSofdec 0x8c342da6 | E2xxx/W2xxx/E99xxxxx error strings | high |
| 0x8c343050–~0x8c349500 | Sega sound driver library "sd for DC Ver 2.02.08" (AICA host side: ports, banks, volume/pan, program upload) | sdSysInit 0x8c3473ac; SHC units set_volume/set_pan/load_program/load_header/send_command/flush_slots | Banner referenced only by 0x8c3473ac. mwSnd strings name sdPstm*/sdMemBlk*/sdSys* calls | high (module), medium (names) |
| 0x8c349590–0x8c34c900 | CRI ADX streaming (ADXSTM) and sound file parsers (AIFF/WAVE/SPSD/.snd) | ADXSTM_OpenFname* 0x8c349672–0x8c349852 | ADXSTM error strings. "FORM/AIFF", "RIFF/WAVE", "SPSD" magic | high |
| 0x8c34c95a–0x8c34dd00 | CRI ADXF (AFS archive and file reader, "ADXF Ver.5.77") | ADXF_LoadPartition(Nw), ADXF_Open 0x8c34d282, ADXF_ReadNw32 0x8c34d6ae (13 game callers), ADXF_Stop, ADXF_GetStat (15 game callers), ADXF_GetFsize* | E904xxxx strings with the API name in parentheses. "AFS" magic | high |
| 0x8c34e960–~0x8c350700 | ADXENC / SFA ("ADXENC.DLL Ver.1.00", "SFA Ver.5.88") | ADXENC_init 0x8c34e960 | Banner references | medium |
| 0x8c350772–~0x8c351e00 | CRI ADXT (ADX playback, "ADXT Ver.5.88") | ADXT_StartAfs 0x8c350e68, ADXT_StartFname 0x8c350ef8, ADXT_StartMem(Idx), ADXT_SetOutPan | E8101xxx strings | high |
| 0x8c351e2c–0x8c352700 | CRI LSC (loop stream control, "CRI LSC Ver 1.03") | LSC_Create 0x8c351e2c plus the existing lsc_* SHC names | E000x "(LSC_Create)" strings | high |
| 0x8c35293c–0x8c352e00 | CRI gdCi (GD-ROM device interface for cvFs) | gdCiOpen/Seek/ReqRd/GetFileSize/ChangeDir/IsExistFile/LoadDirInfo | "gdCiXxx " error-prefix strings | high |
| 0x8c352e24–0x8c354680 | CRI mwRna (raw PCM/ADX audio output) | mwRnaInit 0x8c352e24, mwRnaCreate 0x8c353030, mwRnaSetNumChan, mwRnaSetFx; existing rna_set_*/rna_get_* | E12xx strings, banner | high |
| 0x8c3546a4–0x8c355700 | CRI mwSb/mwSnd (sound-port wrapper over sd*) | mwSndOpenPort 0x8c3546ea, mwSndPlay/Stop, mwSndSetVol/Pan, mwSndTrns | "... return error in mwSndXxx" | high |
| 0x8c35575a–0x8c356d00 | CRI mwMng/mwLib (middleware manager) | 0x8c35575a, 0x8c35582c, 0x8c3558ee, 0x8c3559f2 ("too many libarary") | Strings, banners | medium |
| 0x8c356dbe–0x8c357300 | CRI mwRnv2 (movie frame → Kamui texture renderer) | mwRnv2AllocTex/FreeTex/LoadTexYuv420/422, SetVertexContext* | Strings mention KMSURFACEDESC (Kamui) | high |
| 0x8c357ade–0x8c358a60 | CRI cvFs (virtual file-system dispatcher) | cvFsOpen 0x8c357d8e, cvFsClose, cvFsSeek, cvFsReqRd, cvFsGetFileSize, cvFsLoadDirInfo, ... (27 named) | "cvFsXxx #n:" strings | high |
| ~0x8c358a60–0x8c366200 | CRI SJ / DCT / MPS / MPV / SFD / SFH (Sofdec MPEG demux and decode) | DCT_init 0x8c3598d0, MPS_init 0x8c35adf6, MPV_init 0x8c35be20, SFD_init 0x8c360ab8, SFH_init 0x8c366030 ("SofdecStream" 0x8c366184) | Version/copyright strings | medium |
| 0x8c3664e8–0x8c368400 | Shinobi core (sbInit, library handle table) | 0x8c3664e8 (Shinobi 1.757 banner), syLib_hook_init 0x8c367f02 | Banner refs | medium |
| 0x8c368400–0x8c369b00 | gdFs (GD-ROM ISO9660 file system, "gdFs Ver 1.12") | 0x8c368536 ("CD001") | String | medium |
| 0x8c369b72–0x8c36b100 | pd / pdKbd peripherals (maple: pad, keyboard); "(no device)" 0x8c36aca6 | pdKbd_init 0x8c369b72, pd banner 0x8c36aa08; game-called 0x8c369eb8 (13), 0x8c36a868/0x8c36a880 (6 each) | Banners | medium |
| 0x8c36c038–0x8c36e800 | Shinobi system: syExtChk trap, syMalloc, syRtc, syTmr, syG2 | syMalloc_alloc 0x8c36cd2a, syMalloc_free 0x8c36cdf8, time read 0x8c36d3ca (28 game callers), TMU tick 0x8c36e6f6..0x8c36e706, syG2_init 0x8c36e17c | newserv malloc9/free9, banner refs, existing names | high (malloc/free), medium (rest) |
| 0x8c36f9b8–0x8c371b00 | Semaphore-guarded peripheral / VMS layer ("***FATAL ERROR:Cannot get semaphore!" ×18) and pdLcd 0x8c3707a4 | — | Strings | low |
| 0x8c37226c–0x8c378000 | bu, the VMS (VMU) file system ("bu Ver 1.51 ... VMS File System for Application") | bu wrapper layer 0x8c3727a0–0x8c372ebc (each calls busy check 0x8c372e9c then tail-jumps); the game save code (strings "PSO______SYS", "PSOV2/MAIN_DATA", "PSO/SCREEN_IMAGE") calls 0x8c3727a0 (25), 0x8c37284a (27), 0x8c372d38 (22), 0x8c372d98 (34) | Banner, callers | high (module), medium (names) |
| 0x8c378bf8–0x8c3792a0 | System flash ROM / syCfg / syBt ("KATANA_FLASH____" partition magic; boot exit 0x8c379280) | flash open 0x8c378bf8, header check 0x8c378cfc, existing flash_get_lang 0x8c37908a | String, existing names | medium |
| 0x8c37b5c4–~0x8c391d00 | Ninja library ("SEGA Ninja Library", Ninja Ver 01100114): matrix/vector math, matrix stack, projection, debug print, draw | njUnitMatrix, njRotateX/Y/Z, njScale(V), njTranslate(V), njPush/PopMatrix(Ex), njSin/njCos, njScalor(2), njUnitVector, njPrintSize/Color; heavy game use (njRotateY 435 callers, njPopMatrixEx 475) | Instruction shape and Ninja conventions; .PVR/.PVM strings in 0x8c384eb4–0x8c38b3d8 (texture loaders) | high (module), medium (names) |
| ~0x8c391d00–0x8c3c8000 | Ninja draw / Kamui 2 ("KAMUI Ver 1.11.0.0"): TA/PVR registers, vertex buffers, config keys | Config-key users 0x8c3b2120 ("HARDWARE", "EnableTexture16MB"), 0x8c3b4ac4 ("RENDER", "VSYNCCount", "ISPParamSize", ...), 0x8c3b66e0 ("KAMUI", "VideoMode", "DisplayMode", "AntiAlias", "Dither"); store-queue helpers 0x8c38aeb4–0x8c38b09e (existing sq_* names) | Strings | medium (exact Ninja/Kamui boundary not located) |
| 0x8c3c88e8–0x8c3ca800 | ntTcp OS glue (custom\os.c, custom\tcp_disp.c dispatch stubs) | 0x8c3c88e8, 0x8c3ca534 (29 game callers) | DEBUG file-name strings, "ntTcp Ver 1.05" | medium |
| 0x8c3ceb34–~0x8c3d0000 | dl ("dl Ver 0.35") | dl_init 0x8c3ceb34 | Banner ref | medium |
| 0x8c3d0694–0x8c3f0000 | modem (Sega built-in modem, Rockwell controller and TRISIGNAL data pump: AT commands, V.xx modulation tables) | modem_identify 0x8c3d203c, Rockwell table 0x8c3d9e48, build-date helpers 0x8c3df574/0x8c3df6d8 | Strings | high (module) |
| 0x8c1f3000–0x8c205000 | ACCESS Co. network stack (ntAsk, ntPpp, ntDhc, ntDns, ntDmcn, ntInf, ntLD, ntIniMdm): PPP/LCP/CHAP, modem dialing, packet driver, TCP API | ntAsk_init 0x8c1f8c96; ppp_lcp_code_name 0x8c200d64; ppp_fsm_state_name 0x8c200de2; modem result parser 0x8c200848; dialer 0x8c2003cc; tcppapi_init 0x8c203e70 | DEBUG "%s(%d)" source paths (custom\emb_misc.c, custom\main0.c, kernel\ppp.c, pppcon\pppapi.c, pppcon\pppcon.c, tcppapi\tcppapi.c), "Packet Driver", "Wellcome!!", banners at 0x8c28ad10/0x8c2e0d5c–0x8c2e1cd4 | high (module) |

The C runtime (SHC library) sits low in the image: strcat 0x8c12b084, strncmp 0x8c12b114,
strncpy 0x8c12b154, atoi 0x8c130384, math errno helpers 0x8c12b570/0x8c12b684 and
float/byte helpers 0x8c12ef54–0x8c12f160. They are already admitted SHC units with
correct names. Allocation goes through syMalloc (above). The game heap allocator
`allocate_at` 0x8c122700 is CodeWarrior game code, not SDK.

### Subsystem summary

- **Rendering:** Ninja (math, matrix stack, print, draw) on top of Kamui 2. CRI mwRnv2
  feeds Sofdec frames into Kamui textures. Confidence: high for the module; individual
  Kamui entry names were not identified.
- **Sound:** sd driver (AICA) ← CRI mwSnd/mwSb ← mwRna/ADXT/ADXSTM/LSC. ADX is the music and
  stream path. Confidence: high.
- **GD-ROM and file I/O:** gdFs (ISO9660) ← gdCi ← cvFs ← ADXF (AFS archives). The game reads
  through ADXF_Open/ReadNw32/GetStat/close 0x8c34d4e8 (28 game callers). Confidence: high.
- **VMU save:** the bu VMS file system plus pdLcd. Game save routines call the bu wrapper layer
  0x8c3727a0–0x8c372ebc. Confidence: high (module); the per-API mapping is not established.
- **Input:** pd/pdKbd (maple). Game-called entries are 0x8c369eb8, 0x8c36a7b2, 0x8c36a868 and
  0x8c36a880. Confidence: medium.
- **Networking:** the ACCESS nt* stack (PPP/DHCP/DNS/TCP) in the SHC block, ntTcp glue and the
  modem driver at the top of the SDK region. The PSO protocol and encryption are game code
  (not covered here). Confidence: high (module).
- **Startup:** `startup_8c340848` → section init → Shinobi init (banner) → game main.
  Confidence: high.

### Caveats

- Functions reached only through tables or device vtables (most cvFs and gdCi APIs)
  show no direct callers. Their starts were checked against a clean epilogue/prologue
  boundary.
- `_subN` names mark extra routines that carry the same API tag as their neighbour
  (helpers or second halves). They are medium confidence.
- The Ninja/Kamui split inside 0x8c391d00–0x8c3c8000 is unresolved, as are the semantics of
  the bu/pd wrappers. No official API names were assigned there.
