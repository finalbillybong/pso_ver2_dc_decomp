/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c022e70
 * function: operation_8c022e70
 * language: c
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 32 of 101 reference instruction lines
 * differing bytes: 39
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg1 Arg1;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    float f0c;
    float f10;
    float f14;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
};
struct Arg1 {
    float f00;
    char unknown4[0x4];
    float f08;
};
extern Vector3 g_8c2e7598;
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
extern void normalize_vector_checked(void *);
extern float call_8c3845f0(Frame *, void *);
int operation_8c022e70(Object *o, Arg1 *a1)
{
    Frame frame;
    float v2;
    float t3;
    float v4;
    float t6;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c2e7598;
    (&frame)->f00.f00 = njSin_8c37eb0c((void *)(o->f64));
    (&frame)->f00.f04 = 0.0f;
    (&frame)->f00.f08 = njCos_8c38c154((void *)(o->f64));
    t3 = njSin_8c37eb0c((void *)((int)o->f64 + 0x8000));
    v2 = o->f3c;
    v2 += t3 * 20.0f;
    t3 = njCos_8c38c154((void *)((int)o->f64 + 0x8000));
    v4 = o->f44 + t3 * 20.0f;
    (&frame)->f0c = a1->f00 - v2;
    (&frame)->f10 = 0.0f;
    (&frame)->f14 = a1->f08 - v4;
    normalize_vector_checked((void *)(&(&frame)->f0c));
    t6 = call_8c3845f0((Frame *)((&frame)), (void *)(&(&frame)->f0c));
    return njCos_8c38c154((void *)0x1555) <= t6;
}
