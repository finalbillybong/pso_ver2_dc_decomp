/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c053b18
 * function: operation_8c053b18
 * language: c
 * reference size: 344 bytes
 * compiled size: 340 bytes (-1.2%)
 * differing lines: 50 of 157 reference instruction lines
 * differing bytes: 192
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
typedef struct Block96 {
    int words[24];
} Block96;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Block_frame_60 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_60;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    Block_frame_60 f60;
};
struct Arg1 {
    char unknown0[0xc];
    float f0c;
    float f10;
    char unknown14[0x8];
    Vector3 f1c;
};
struct Arg2 {
    Block96 f00;
};
extern void njPushMatrix_8c38ade4(void *, float);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, int, int);
extern void call_8c3bdf60(int, void *);
extern void njPopMatrixEx_8c38ad10(void);
int operation_8c053b18(int a0, Arg1 *a1, Arg2 *a2)
{
    Frame frame;
    float v3;
    float v4;
    float n3;
    float n4;
    int v1;
    int v2;
    *(Vector3 *)&(&frame)->f60 = *(Vector3 *)&a1->f1c;
    (&frame)->f60.f04 = 0.0f;
    v3 = (float)a1->f10;
    v4 = (float)a1->f0c;
    n3 = n3;
    n4 = n4;
    (&frame)->f00.f00 = n3;
    (&frame)->f00.f04 = 50.0f;
    (&frame)->f00.f08 = v4;
    (&frame)->f00.f0c = n3;
    (&frame)->f00.f10 = 50.0f;
    (&frame)->f00.f14 = n4;
    (&frame)->f00.f18 = v3;
    (&frame)->f00.f1c = 50.0f;
    (&frame)->f00.f20 = n4;
    (&frame)->f00.f24 = v3;
    (&frame)->f00.f28 = 50.0f;
    (&frame)->f00.f2c = v4;
    (&frame)->f00.f30 = n3;
    (&frame)->f00.f34 = -50.0f;
    (&frame)->f00.f38 = v4;
    (&frame)->f00.f3c = n3;
    (&frame)->f00.f40 = -50.0f;
    (&frame)->f00.f44 = n4;
    (&frame)->f00.f48 = v3;
    (&frame)->f00.f4c = -50.0f;
    (&frame)->f00.f50 = n4;
    (&frame)->f00.f54 = v3;
    (&frame)->f00.f58 = -50.0f;
    (&frame)->f00.f5c = v4;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500), v3);
    njRotateY_8c37df90(0, a0);
    v1 = (int)0;
    while (8 > v1) {
        v2 = (int)(v1 * 0xc + (int)(&frame));
        call_8c3be38c(0, v2, v2);
        call_8c3bdf60(v2, (void *)(&(&frame)->f60));
        v1 = (int)(v1 + 1);
    }
    njPopMatrixEx_8c38ad10();
    if (a2 != 0) {
        *(Block96 *)&a2->f00 = *(Block96 *)&(&frame)->f00;
        return 1;
    }
    return 0;
}
