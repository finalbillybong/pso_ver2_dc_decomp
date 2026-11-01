/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cba20
 * function: operation_8c0cba20
 * language: c
 * reference size: 200 bytes
 * compiled size: 204 bytes (+2.0%)
 * differing lines: 14 of 90 reference instruction lines
 * differing bytes: 110
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct S_x43536 S_x43536;
typedef struct S_x57008 S_x57008;
typedef struct S_x85168 S_x85168;
typedef struct S_x9120 S_x9120;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    int f2c;
    Arg0_30 *f30;
    int f34;
    float f38;
};
struct S_x43536 {
    float f00;
};
struct S_x85168 {
    float f00;
};
struct S_x9120 {
    float f00;
};
struct S_x57008 {
    float f00;
};
extern int g_8c3068f4;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int operator_new_8c18de4c(int);
Object *operation_8c0cba20(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v1;
    int t1;
    int t2;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c266c5c;
    o->tag = (int)(g_8c3068f4);
    o->size = 0x3c;
    o->f20 = a2;
    o->f24 = 0;
    o->f28 = 0;
    t1 = operator_new_8c18de4c((int)(o->f20 << 1 << 4));
    o->f2c = (int)(t1);
    t2 = operator_new_8c18de4c((int)(o->f20 * 0x14));
    o->f30 = (Arg0_30 *)t2;
    v1 = (int)0;
    while (o->f20 > v1) {
        ((S_x43536 *)((int)o->f30 + v1 * 0x14))->f00 = 0.0f;
        *(int *)((char *)((char *)o->f30 + 0x4) + (v1 * 0x14)) = 0;
        ((S_x85168 *)((int)o->f30 + 8 + v1 * 0x14))->f00 = 0.0f;
        ((S_x9120 *)((int)o->f30 + 0xc + v1 * 0x14))->f00 = 0.0f;
        ((S_x57008 *)((int)o->f30 + 0x10 + v1 * 0x14))->f00 = 0.0f;
        v1 = (int)(v1 + 1);
    }
    o->f34 = 0x30;
    o->f38 = 0.85f;
    return o;
}
