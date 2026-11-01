/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c225bc0
 * function: operation_8c225bc0
 * language: c
 * reference size: 108 bytes
 * compiled size: 108 bytes (+0.0%)
 * differing lines: 40 of 42 reference instruction lines
 * differing bytes: 49
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_a0 Arg0_a0;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x1c];
    float f50;
    char unknown54[0x44];
    int f98;
    int f9c;
    Arg0_a0 *fa0;
};
struct S_vv5 {
    float f00;
    float f04;
};
struct Arg0_30_0 {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x4];
    float f14;
};
extern void operation_8c225c2c(void *);
void operation_8c225bc0(Object *o)
{
    int v4;
    int v2;
    S_vv5 *v5;
    int v1;
    float x;
    float y;
    Arg0_30_0 *pa;
    Arg0_30_0 *pb;
    v1 = (int)o->f98;
    v2 = (int)-1;
    v4 = (int)(v1 + v2);
    if (!(v4 >= 0)) {
        v4 = (int)((int)o->f9c + -1);
    }
    pa = *(Arg0_30_0 **)((char *)o->f30 + (v1 << 2));
    pb = *(Arg0_30_0 **)((char *)o->f30 + (v4 << 2));
    v5 = (S_vv5 *)o->fa0;
    x = o->f50 - 9.0f - 24.0f;
    y = pb->f0c + pb->f14 - pa->f0c;
    v5->f00 = x;
    v5->f04 = y;
    operation_8c225c2c((void *)o);
}
