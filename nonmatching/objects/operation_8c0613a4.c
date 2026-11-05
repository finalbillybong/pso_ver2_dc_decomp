/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0613a4
 * function: operation_8c0613a4
 * language: c
 * reference size: 360 bytes
 * compiled size: 364 bytes (+1.1%)
 * differing lines: 44 of 142 reference instruction lines
 * differing bytes: 333
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_64 Arg0_64;
typedef struct Block_p0_3b0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3b0;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x344];
    Arg0_3ac *f3ac;
    Block_p0_3b0 f3b0;
    float f3bc;
    float f3c0;
    float f3c4;
    float f3c8;
};
extern int active_unflagged_8c05b2dc(void *);
extern void operation_8c05c184(void *);
extern void aim_direction_8c05bdd4(void *);
extern float errno_wrap_8c130334(float, float);
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
int operation_8c0613a4(Object *o)
{
    float v3;
    float v2;
    float v4;
    int t1;
    float t2;
    float t3;
    float t4;
    t1 = active_unflagged_8c05b2dc((void *)(o->f3ac));
    if (t1 != 0) {
        operation_8c05c184((void *)o);
        aim_direction_8c05bdd4((void *)o);
        if (((o->f20 & 1)) != 0) {
            v2 = (float)7.0f;
        } else {
            v2 = (float)-7.0f;
        }
        v3 = o->f3bc;
        v4 = o->f3c4;
        o->f3b0.f00 = v4 * v2 + v3 * 2.0f + o->f3b0.f00;
        o->f3b0.f08 = v4 * 2.0f - v3 * v2 + o->f3b0.f08;
        aim_direction_8c05bdd4((void *)o);
        t2 = errno_wrap_8c130334(o->f3bc, o->f3c4);
        return (int)(t2 * 65536.0f / 6.28318405f);
    }
    t3 = njSin_8c37eb0c((void *)(o->f64));
    o->f3bc = t3;
    o->f3c0 = 0.0f;
    t4 = njCos_8c38c154((void *)(o->f64));
    o->f3c4 = t4;
    *(Vector3 *)&o->f3b0 = *(Vector3 *)&o->f3c;
    o->f3b0.f00 += o->f3bc * 30.0f;
    o->f3b0.f08 += o->f3c4 * 30.0f;
    o->f3c8 = 30.0f;
    return (int)(o->f64);
}
