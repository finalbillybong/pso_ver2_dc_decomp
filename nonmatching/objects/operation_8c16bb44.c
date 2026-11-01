/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16bb44
 * function: operation_8c16bb44
 * language: c
 * reference size: 332 bytes
 * compiled size: 332 bytes (+0.0%)
 * differing lines: 24 of 147 reference instruction lines
 * differing bytes: 27
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
typedef struct Arg0_58 Arg0_58;
typedef struct Arg0_s48 Arg0_s48;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_4 S_vv1_4;
struct Arg0_s48 {
    int f00;
    int f04;
    int f08;
};
typedef struct Row16 {
    int f00;
    Arg0_s48 v;
} Row16;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    char f20;
    char unknown21[0x3];
    unsigned short f24;
    char unknown26[0x22];
    Arg0_s48 f48;
    char unknown54[0x4];
    Arg0_58 *f58;
};
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0xc];
    int f14;
    int f18;
};
extern int call_8c16b5d8(Object *);
extern int lookup_low_id(int);
extern void operation_8c073b24(void *, short, int);
extern void operation_8c02330c(void *, int, int);
extern void operation_8c02688c(void *);
extern int operation_8c1c74dc(void *);
extern void operation_8c023738(int, void *, void *, int);
void operation_8c16bb44(Object *o)
{
    int t1;
    int t2;
    S_vv1 *v1;
    int v2;
    int v3;
    switch (t1 = call_8c16b5d8(o)) {
    case 0:
        return;
    case 1:
        *(int *)((char *)o->f58 + (o->f20 << 2) + 0x4) = 2;
        ((Row16 *)((char *)o->f58 + (o->f20 << 4) + 0x28))->v = o->f48;
        v1 = (S_vv1 *)((int)o->f58 + o->f20 * 0x1c + 0xa8);
        t2 = lookup_low_id(o->f24);
        if (t2 != 0) {
            v2 = -1;
            v3 = v1->f14;
            if (v3 == v2) {
                if ((int)v1->f04 == -1) {
                    operation_8c073b24((void *)((int)v1 + 8), o->f24, (int)&o->f48);
                    operation_8c02330c((void *)t2, (int)v1->f04, v1->f18);
                    operation_8c02688c((void *)t2);
                } else {
                    operation_8c073b24((void *)((int)v1 + 8), o->f24, (int)&o->f48);
                    operation_8c02330c((void *)t2, (int)v1->f04, operation_8c1c74dc((void *)((int)v1 + 8)));
                    operation_8c02688c((void *)t2);
                }
            } else {
                operation_8c023738(t2, (void *)v1->f04, (void *)&o->f48, operation_8c1c74dc((void *)((int)v1 + 8)));
                operation_8c02688c((void *)t2);
            }
        }
        break;
    case 2:
        *(int *)((char *)o->f58 + (o->f20 << 2) + 0x4) = 3;
        break;
    }
    o->f04 |= 1;
}
