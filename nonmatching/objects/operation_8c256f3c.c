/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c256f3c
 * function: operation_8c256f3c
 * language: c
 * reference size: 324 bytes
 * compiled size: 328 bytes (+1.2%)
 * differing lines: 14 of 150 reference instruction lines
 * differing bytes: 99
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
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
typedef struct S_L8c33ff6c S_L8c33ff6c;
typedef struct S_L8c33ff6c_8 S_L8c33ff6c_8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Block_frame_8 {
    float f00;
    float f04;
} Block_frame_8;
typedef struct Block_frame_10 {
    float f00;
    float f04;
} Block_frame_10;
typedef struct Block_frame_0 {
    float f00;
    float f04;
} Block_frame_0;
struct Arg1 {
    short f00;
    short f02;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_8 f08;
    Block_frame_10 f10;
};
struct S_L8c33ff6c {
    char unknown0[0x4];
    float f04;
    S_L8c33ff6c_8 *f08;
};
struct Object {
    Block8 tag;
};
extern Block8 g_8c33ffac;
extern S_L8c33ff6c g_8c33ff6c;
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
int operation_8c256f3c(Object *o, Arg1 *a1)
{
    Frame frame;
    int v7;
    float v6;
    float v8;
    float t1;
    float t2;
    float x;
    float y;
    v7 = (int)a1->f02;
    if (((v7 & 1)) != 0) {
        (&frame)->f10.f00 = ((float)a1->f00 + 0.5f) * 30.0f;
    } else {
        (&frame)->f10.f00 = (float)(a1->f00 * 0x1e);
    }
    (&frame)->f10.f04 = (float)(v7 * 0x19);
    *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c33ffac;
    v6 = (float)(&frame)->f08.f04;
    (&frame)->f10.f00 -= (&frame)->f08.f00;
    (&frame)->f10.f04 -= v6;
    t2 = njSin_8c37eb0c((void *)((&g_8c33ff6c)->f08));
    t1 = njCos_8c38c154((void *)((&g_8c33ff6c)->f08));
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&(&frame)->f10;
    y = (&frame)->f00.f04;
    x = (&frame)->f00.f00;
    (&frame)->f10.f00 = t1 * x - t2 * y;
    (&frame)->f10.f04 = t2 * x + t1 * y;
    (&frame)->f10.f00 *= (&g_8c33ff6c)->f04;
    (&frame)->f10.f04 *= (&g_8c33ff6c)->f04;
    (&frame)->f10.f00 += (&frame)->f08.f00;
    (&frame)->f10.f04 += v6;
    *(Block8 *)&o->tag = *(Block8 *)&(&frame)->f10;
    return 1;
}
