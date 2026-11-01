/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1bd868
 * function: operation_8c1bd868
 * language: c
 * reference size: 88 bytes
 * compiled size: 88 bytes (+0.0%)
 * differing lines: 4 of 38 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode extern)
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
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x40];
    int f74;
};
struct S_vv3 {
    char unknown0[0x20];
    int f20;
};
extern int call_8c18e8a0(int, int);
extern void call_8c0e1f40(S_vv3 *);
extern int call_8c18e768(int, int);
void operation_8c1bd868(Object *o)
{
    unsigned int v2;
    char *v1;
    S_vv3 *v3;
    int t1;
    v1 = (char *)o->f74;
    v2 = (unsigned int)0;
    while ((unsigned int)6 > v2) {
        v3 = (S_vv3 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v2 << 2));
        t1 = call_8c18e8a0((int)(v1), 0xa);
        v3->f20 = (int)(t1);
        call_8c0e1f40(v3);
        v1 = (char *)call_8c18e768((int)(v1), 0xa);
        v2 = (unsigned int)(v2 + 1);
    }
}
