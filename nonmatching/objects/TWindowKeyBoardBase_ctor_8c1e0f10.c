/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e0f10
 * function: TWindowKeyBoardBase_ctor_8c1e0f10
 * language: c
 * reference size: 272 bytes
 * compiled size: 272 bytes (+0.0%)
 * differing lines: 16 of 97 reference instruction lines
 * differing bytes: 23
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TWindowKeyBoardBase.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown20[0x4a];
    short f6a;
    char unknown6c[0x1];
    char f6d;
    char unknown6e[0x2];
    int f70;
    char unknown74[0x30];
    int fa4;
    int fa8;
    int fac;
    int fb0;
    int fb4;
    int fb8;
    int fbc;
};
extern int g_8c32b5a0;
extern int g_8c467188;
extern void initialize_base_8c0db1d0(void *, int);
extern void operation_8c04bbf4(void *);
extern void operation_8c1e2110(Object *, int, int);
extern void call_8c04bc48(void *, int, int);
extern int operator_new_8c18de4c(int);
Object *TWindowKeyBoardBase_ctor_8c1e0f10(Object *o)
{
    Object **home = &o;
    char *v1;
    int t1;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c32b5a4));
    o->dispatch = (void *)0x8c277474;
    operation_8c04bbf4((void *)(((char *)o + 0x74)));
    operation_8c04bbf4((void *)(((char *)o + 0x8c)));
    o->tag = (int)(g_8c32b5a0);
    o->size = 0xc0;
    v1 = (char *)g_8c467188;
    operation_8c1e2110(o, 0, 0);
    call_8c04bc48((void *)(((char *)o + 0x8c)), 0, 0);
    o->f70 = (int)(((char *)o + 0x74));
    o->fbc = 0;
    o->f6a = 0;
    o->f6d = -1;
    o->fa4 = 0;
    o->fa8 = 0;
    o->fac = 0;
    o->fb0 = 0;
    o->fb4 = 0;
    if (v1 == 0) {
        call_8c04bc48((void *)(((char *)o + 0x8c)), 0x22, 0);
        t1 = operator_new_8c18de4c(0x90);
        o->fa4 = (int)(t1);
        o->fb8 = 0x50;
    }
    return o;
}
