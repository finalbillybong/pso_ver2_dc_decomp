/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d1cc0
 * function: operation_8c0d1cc0
 * language: c
 * reference size: 308 bytes
 * compiled size: 308 bytes (+0.0%)
 * differing lines: 4 of 127 reference instruction lines
 * differing bytes: 5
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, constant loading; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c38c154 S_c8c38c154;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv8 S_vv8;
typedef struct Block_frame_4 {
    float f00;
    float f04;
    float f08;
} Block_frame_4;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
};
struct Frame {
    Block_frame_4 f04;
};
struct S_vv8 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    Vector3 f3c;
};
extern int g_8c467874;
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(void *);
extern int active_unflagged_8c05b2dc(void *);
extern void vector_sub_in_place_8c37f6f0(void *, int);
extern float normalize_xz_checked(void *);
extern int operation_8c0113bc(int, int);
extern void call_8c05be98(Object *, unsigned short);
int operation_8c0d1cc0(Object *o)
{
    Frame frame;
    float v2;
    S_vv8 *v8;
    unsigned short v1;
    int v7;
    int v9;
    float v6;
    int v5;
    int v4;
    float t1;
    float t3;
    float t4;
    float t5;
    v1 = (unsigned short)0xffff;
    v2 = 0.0f;
    t1 = njCos_8c38c154(0xaaa);
    t4 = njSin_8c37eb0c((void *)(o->f64));
    t5 = njCos_8c38c154((int)(o->f64));
    v4 = 0x324;
    v5 = g_8c467874;
    v6 = v2;
    for (v7 = 0; v7 < v5; v7++) {
        v8 = *(S_vv8 **)((char *)0x8c467240 + (v7 << 2));
        if (active_unflagged_8c05b2dc((void *)v8) != 0) {
            *(Vector3 *)&(&frame)->f04 = v8->f3c;
            v9 = (int)o + v4;
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f04), v9);
            (&frame)->f04.f04 = 0.0f;
            t3 = normalize_xz_checked((void *)(&(&frame)->f04));
            if (400.0f > t3 && t3 > v6 && t4 * (&frame)->f04.f00 + t5 * (&frame)->f04.f08 > t1) {
                if (operation_8c0113bc(v9, (int)v8 + v4) == 0) {
                    v1 = v8->f20;
                    v6 = t3;
                }
            }
        }
    }
    if (v1 != 0xffff) {
        call_8c05be98(o, v1);
        return 1;
    }
    return 0;
}
