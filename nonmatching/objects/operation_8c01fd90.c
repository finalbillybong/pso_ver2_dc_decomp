/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01fd90
 * function: operation_8c01fd90
 * language: c
 * reference size: 144 bytes
 * compiled size: 144 bytes (+0.0%)
 * differing lines: 24 of 53 reference instruction lines
 * differing bytes: 31
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
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x326];
    int f348;
    char unknown34c[0x38];
    short f384;
};
struct S_vv2 {
    int f00;
};
extern void operation_8c023d38(void *);
extern void operation_8c023f00(void *, int, int);
extern void operation_8c023df0(void *, int, int);
void operation_8c01fd90(Object *o, int a1, int a2)
{
    S_vv2 *v2;
    int v3;
    int v1;
    operation_8c023d38((void *)o);
    o->f384 = 0;
    operation_8c023f00((void *)o, a1, a2);
    operation_8c023df0((void *)o, a1, a2);
    o->f348 = o->f20 * 0x280 + 0x8c428f80;
    v2 = (S_vv2 *)(void *)0x8c004000;
    v3 = (int)0;
    v1 = (int)0x1000;
    while (v1 > (unsigned int)(short)v3) {
        if ((v2++)->f00 != 0) {
            for (;;) {
            }
        }
        v3 = (int)(v3 + 1);
    }
}
