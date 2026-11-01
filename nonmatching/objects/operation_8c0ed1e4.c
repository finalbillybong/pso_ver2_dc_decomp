/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ed1e4
 * function: operation_8c0ed1e4
 * language: c
 * reference size: 352 bytes
 * compiled size: 352 bytes (+0.0%)
 * differing lines: 20 of 140 reference instruction lines
 * differing bytes: 28
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x8];
    int f24;
    int f28;
};
extern S_g8c44be88 *g_8c44be88;
extern char g_8c308cbc[];
extern char g_8c4703e0[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern void set_record_8c37e9b6(void *, void *, int, int);
extern void call_8c118780(void *);
extern void call_8c1003d0(void *);
Object *operation_8c0ed1e4(Object *o)
{
    Object **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, g_8c44be88);
    o->dispatch = (void *)0x8c268004;
    set_record_8c37e9b6((void *)((void *)g_8c4703e0), (void *)((void *)g_8c308cbc), 0, 0);
    set_record_8c37e9b6((void *)((g_8c4703e0 + 0xc)), (void *)((g_8c308cbc + 0x15)), 0, 0);
    set_record_8c37e9b6((void *)((g_8c4703e0 + 0x18)), (void *)((g_8c308cbc + 0x2a)), 0, 0);
    set_record_8c37e9b6((void *)((g_8c4703e0 + 0x24)), (void *)((g_8c308cbc + 0x3f)), 0, 0);
    set_record_8c37e9b6((void *)((g_8c4703e0 + 0x30)), (void *)((g_8c308cbc + 0x54)), 0, 0);
    set_record_8c37e9b6((void *)((g_8c4703e0 + 0x3c)), (void *)((g_8c308cbc + 0x69)), 0, 0);
    set_record_8c37e9b6((void *)((g_8c4703e0 + 0x48)), (void *)((g_8c308cbc + 0x7e)), 0, 0);
    set_record_8c37e9b6((void *)((g_8c4703e0 + 0x54)), (void *)((g_8c308cbc + 0x93)), 0, 0);
    set_record_8c37e9b6((void *)((g_8c4703e0 + 0x60)), (void *)((g_8c308cbc + 0xa8)), 0, 0);
    set_record_8c37e9b6((void *)((g_8c4703e0 + 0x6c)), (void *)((g_8c308cbc + 0xbb)), 0, 0);
    set_record_8c37e9b6((void *)((g_8c4703e0 + 0x78)), (void *)((g_8c308cbc + 0xc9)), 0, 0);
    set_record_8c37e9b6((void *)((g_8c4703e0 + 0x84)), (void *)((g_8c308cbc + 0xd8)), 0, 0);
    set_record_8c37e9b6((void *)((g_8c4703e0 + 0x90)), (void *)((g_8c308cbc + 0xe9)), 0, 0);
    call_8c118780((void *)((void *)0x8c308a30));
    o->f24 = 0;
    o->f28 = 0;
    call_8c1003d0((void *)((g_8c308cbc + 0xfd)));
    return o;
}
