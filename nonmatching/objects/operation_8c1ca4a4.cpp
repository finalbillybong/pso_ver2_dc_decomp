/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ca4a4
 * function: operation_8c1ca4a4
 * language: c++
 * reference size: 304 bytes
 * compiled size: 328 bytes (+7.9%)
 * differing lines: 140 of 124 reference instruction lines
 * differing bytes: 252
 * provenance: generator draft (mode retflip2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +24 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    char f28;
    char unknown29[0x3b];
    int f64;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" void operation_8c1cc690(void);
extern "C" void operation_8c1ca4a4(Object *o)
{
    operation_8c1cc690();
    o->f64 = (int)(*(int *)0x8c41cba0);
    if (*(char *)0x8c4e2e28 == 0) {
        *(Vector3 *)&*(Vector3 *)0x8c32902c = *(Vector3 *)&*(Vector3 *)0x8c328fc0;
        *(Vector3 *)&*(Vector3 *)0x8c329038 = *(Vector3 *)&*(Vector3 *)0x8c328fcc;
        *(Vector3 *)&*(Vector3 *)0x8c329044 = *(Vector3 *)&*(Vector3 *)0x8c328fd8;
        *(Vector3 *)&*(Vector3 *)0x8c329050 = *(Vector3 *)&*(Vector3 *)0x8c328fe4;
        *(Vector3 *)&*(Vector3 *)0x8c32905c = *(Vector3 *)&*(Vector3 *)0x8c328ff0;
        {
            Vector3 *p_ = (Vector3 *)&*(Vector3 *)0x8c328ffc;
            *(Vector3 *)&*(Vector3 *)0x8c329068 = *p_;
        }
        *(Vector3 *)&*(Vector3 *)0x8c329074 = *(Vector3 *)&*(Vector3 *)0x8c329008;
        *(Vector3 *)&*(Vector3 *)0x8c329080 = *(Vector3 *)&*(Vector3 *)0x8c329014;
        *(Vector3 *)&*(Vector3 *)0x8c32908c = *(Vector3 *)&*(Vector3 *)0x8c329020;
        *(char *)0x8c4e2e28 = 1;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(o->f28 * 0xc + 0x8c32902c)))();
}
