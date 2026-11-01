/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b4910
 * function: operation_8c1b4910
 * language: c
 * reference size: 508 bytes
 * compiled size: 508 bytes (+0.0%)
 * differing lines: 146 of 235 reference instruction lines
 * differing bytes: 103
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, instruction or operand
 *   order; review found and fixed behaviour defects of the generator draft; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c37eb0c S_c8c37eb0c;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_s3c Arg0_s3c;
typedef struct Block_frame_4 {
    float f00;
    char unknown4[0x4];
} Block_frame_4;
struct Object {
    char unknown0[0x3c];
    Block8 f3c;
    char unknown44[0x20];
    Arg0_64 *f64;
};
struct Frame {
    Block_frame_4 f04;
    float f0c;
};
struct Arg0_s3c {
    char unknown0[0x8];
    int f08;
};
extern void call_8c102e38(void *, int, int, int, float);
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
void operation_8c1b4910(Object *o)
{
    Frame frame;
    int v3;
    int v4;
    int v10;
    float v5;
    float v11;
    int v2;
    float v6;
    float v12;
    float self;
    float t2;
    call_8c102e38((void *)(&o->f3c), -0x5db4, 1, 1, 5.0f);
    call_8c102e38((void *)(((char *)o + 0x438)), -0x5db4, 1, 1, 5.0f);
    call_8c102e38((void *)(((char *)o + 0x450)), -0x5db4, 1, 1, 5.0f);
    call_8c102e38((void *)(((char *)o + 0x468)), -0x5db4, 1, 1, 5.0f);
    self = njSin_8c37eb0c((void *)(o->f64));
    t2 = njCos_8c38c154((void *)(o->f64));
    v2 = (int)-0x5db4;
    v3 = (int)0;
    v4 = (int)0x25;
    while (3 > v3) {
        *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&o->f3c;
        v10 = (int)-v4;
        v5 = (float)((float)v10 * t2);
        (&frame)->f04.f00 += v5;
        v11 = (float)((float)v4 * self);
        (&frame)->f0c += v11;
        call_8c102e38((void *)(&(&frame)->f04), v2, 1, 1, 5.0f);
        *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&o->f3c;
        v6 = (float)((float)v4 * t2);
        (&frame)->f04.f00 += v11;
        (&frame)->f0c += v6;
        call_8c102e38((void *)(&(&frame)->f04), v2, 1, 1, 5.0f);
        *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&o->f3c;
        (&frame)->f04.f00 += v6;
        v12 = (float)((float)v10 * self);
        (&frame)->f0c += v12;
        call_8c102e38((void *)(&(&frame)->f04), v2, 1, 1, 5.0f);
        if (2 > v3) {
            *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&o->f3c;
            (&frame)->f04.f00 += v12;
            (&frame)->f0c += v5;
            call_8c102e38((void *)(&(&frame)->f04), v2, 1, 1, 5.0f);
        }
        v3 = (int)(v3 + 1);
        v4 = (int)(int)((float)v4 + 37.5f);
    }
}
