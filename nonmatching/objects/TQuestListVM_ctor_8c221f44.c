/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c221f44
 * function: TQuestListVM_ctor_8c221f44
 * language: c
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 46 of 91 reference instruction lines
 * differing bytes: 25
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order, constant loading;
 *   review found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * class header: src/include/classes/TQuestListVM.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x4];
    int f24;
    char unknown28[0x2284];
    int f22ac;
    char unknown22b0[0x4];
    int f22b4;
    int f22b8;
    int f22bc;
    int f22c0;
    int f22c4;
    int f22c8;
    int f22cc;
    char unknown22d0[0x4];
    int f22d4;
    char unknown22d8[0x4];
    int f22dc;
    int f22e0;
    int f22e4;
    int f22e8;
    int f22ec;
    int f22f0;
    int f22f4;
};
extern int g_8c337478;
extern int g_8c506060;
extern int g_8c506064;
extern int g_8c506068;
extern int g_8c50606c;
extern Object *g_8c506070;
extern void TShopWindowBase_ctor_8c1066e4(void *, void *);
extern int game_malloc_buffer_8c011e9c(int);
extern void operation_8c223298(Object *);
Object *TQuestListVM_ctor_8c221f44(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    TShopWindowBase_ctor_8c1066e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278928;
    o->tag = (int)(g_8c337478);
    o->size = 0x22f8;
    o->f22ac = 0;
    o->f22b4 = 0;
    o->f22b8 = 0;
    o->f22c0 = 0;
    o->f22c4 = 0;
    o->f22bc = 0;
    o->f22c8 = 0;
    t1 = game_malloc_buffer_8c011e9c(0x20000);
    o->f22cc = (int)(t1);
    o->f22d4 = 0;
    g_8c506060 = 0;
    g_8c506064 = 0;
    g_8c506068 = 0;
    *(int *)0x8c50606c = 0;
    o->f22dc = 4;
    o->f22e0 = 0;
    o->f22ec = 0;
    o->f22f0 = 0;
    o->f22f4 = 0;
    o->f24 = 0;
    g_8c506070 = o;
    o->f22e8 = 0;
    o->f22e4 = 0;
    operation_8c223298(o);
    return o;
}
