/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c067098
 * function: operation_8c067098
 * language: c
 * reference size: 320 bytes
 * compiled size: 316 bytes (-1.2%)
 * differing lines: 4 of 133 reference instruction lines
 * differing bytes: 89
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
};
struct Frame {
    unsigned short f00;
    char unknown2[0x6];
    float f08;
    float f0c;
    float f10;
    Vector3 f14;
};
struct S_vv5 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    Vector3 f3c;
};
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(void *);
extern int active_unflagged_8c05b2dc(void *);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern void normalize_xz_checked(void *);
extern float call_8c3845f0(void *, void *);
extern void reset_link_8c05bf28(void *);
extern void call_8c05be98(Object *, unsigned short);
extern float object_random_fraction(void *);
extern float floor_e(float);
int operation_8c067098(Object *o)
{
    Frame frame;
    S_vv5 *v5;
    int v2;
    int v1;
    int v3;
    int v4;
    float t1;
    float t2;
    int t3;
    float t4;
    float t5;
    float t6;
    float t7;
    v1 = (int)*(int *)0x8c467874;
    v2 = (int)0;
    v3 = (int)v1;
    if (v1 > 4) {
        v3 = (int)4;
    }
    t5 = njCos_8c38c154(0x3000);
    t1 = njSin_8c37eb0c((void *)(o->f64));
    (&frame)->f08 = t1;
    (&frame)->f0c = 0.0f;
    t2 = njCos_8c38c154((int)(o->f64));
    (&frame)->f10 = t2;
    v4 = (int)0;
    while (v3 > v4) {
        v5 = (S_vv5 *)*(S_g8c467240 **)((char *)0x8c467240 + (v4 << 2));
        t3 = active_unflagged_8c05b2dc((void *)v5);
        if (t3 != 0) {
            *(Vector3 *)&(&frame)->f14 = *(Vector3 *)&v5->f3c;
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f14), (void *)(((char *)o + 0x3c)));
            normalize_xz_checked((void *)(&(&frame)->f14));
            t4 = call_8c3845f0((void *)(&(&frame)->f14), (void *)(&(&frame)->f08));
            if (t4 > t5) {
                *(short *)((char *)&(&frame)->f00 + (v2 << 1)) = v5->f20;
                v2 = (int)(v2 + 1);
            }
        }
        v4 = (int)(v4 + 1);
    }
    if (!(v2 > 0)) {
        reset_link_8c05bf28((void *)o);
        return 0;
    }
    if (v2 == 1) {
        call_8c05be98(o, (&frame)->f00);
        return 1;
    }
    t6 = object_random_fraction((void *)o);
    t7 = floor_e((float)v2 * t6);
    call_8c05be98(o, (unsigned short)(*(unsigned short *)((char *)&(&frame)->f00 + ((int)t7 << 1))));
    return 1;
}
