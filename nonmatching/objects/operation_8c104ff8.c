/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c104ff8
 * function: operation_8c104ff8
 * language: c
 * reference size: 224 bytes
 * compiled size: 224 bytes (+0.0%)
 * differing lines: 12 of 87 reference instruction lines
 * differing bytes: 18
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct Frame {
    int f00;
    int f04;
    char unknown8[0x3c];
};
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x4];
    int f20;
    int f24;
};
extern char g_8c30b61c[];
extern void sprintf_8c12b048(void *, void *, ...);
extern int malloc_load_file_8c1050d8(void *, Frame *);
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void TObject_ctor_8c0330e4(void *, void *);
extern void memset_8c12b880(void *, int, int);
extern void strncpy_8c12b154(void *, int, int);
extern int relocate_resource_header(void *, void *);
extern void game_free_8c011ec0(int);
int operation_8c104ff8(int a0)
{
    Frame frame;
    int t2;
    int t3;
    int v1;
    S_c8c122700 *t1;
    int t4;
    sprintf_8c12b048((void *)(&(&frame)->f04), (void *)((g_8c30b61c + 0x1)), a0);
    t2 = malloc_load_file_8c1050d8((void *)(&(&frame)->f04), (Frame *)((&frame)));
    sprintf_8c12b048((void *)(&(&frame)->f04), (void *)((g_8c30b61c + 0x8)), a0);
    t3 = malloc_load_file_8c1050d8((void *)(&(&frame)->f04), (Frame *)((&frame)));
    v1 = (int)(&frame)->f00;
    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x40);
    if (t1 != 0) {
        TObject_ctor_8c0330e4((void *)t1, (void *)((void *)0x8c4d5ad0));
        t1->f18 = (void *)0x8c26586c;
    }
    memset_8c12b880((void *)(((char *)t1 + 0x2c)), 0, 0x11);
    strncpy_8c12b154((void *)(((char *)t1 + 0x2c)), a0, 0x10);
    t1->f00 = (int)(((char *)t1 + 0x2c));
    t1->f20 = (int)(t2);
    t1->f24 = (int)(v1);
    t4 = relocate_resource_header((void *)t1, (void *)t3);
    game_free_8c011ec0(t3);
    return (int)(t4);
}
