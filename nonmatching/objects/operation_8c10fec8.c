/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10fec8
 * function: operation_8c10fec8
 * language: c
 * reference size: 752 bytes
 * compiled size: 752 bytes (+0.0%)
 * differing lines: 184 of 354 reference instruction lines
 * differing bytes: 458
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
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct Arg4 Arg4;
typedef struct Arg6 Arg6;
typedef struct Arg7 Arg7;
typedef struct Block_p6_0 {
    float f00;
    float f04;
    float f08;
} Block_p6_0;
typedef struct Block_frame_54 {
    float f00;
    float f04;
    float f08;
} Block_frame_54;
typedef struct Block_frame_48 {
    float f00;
    float f04;
    float f08;
} Block_frame_48;
struct Frame {
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
    Block_frame_48 f48;
    Block_frame_54 f54;
    int f60;
    char unknown64[0x8];
    int f6c;
    char unknown70[0x8];
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
struct Arg2 {
    float f00;
    float f04;
    float f08;
};
struct Arg3 {
    float f00;
    float f04;
    float f08;
};
struct Arg4 {
    float f00;
    float f04;
    float f08;
};
struct Arg7 {
    float f00;
};
struct Arg6 {
    Block_p6_0 f00;
};
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern float call_8c38d6e0(int, void *, void *);
extern float call_8c38d7d8(void *, void *);
void operation_8c10fec8(int a0, Arg1 *a1, Arg2 *a2, Arg3 *a3, Arg4 *a4, register int a5, Arg6 *a6, register Arg7 *a7)
{
    Frame frame;
    float v11;
    float v7;
    float v8;
    float v12;
    float v9;
    float v10;
    float t1;
    float t2;
    float t3;
    float t4;
    float t5;
    float t6;
    (&frame)->f54.f00 = a1->f00 - a2->f00;
    (&frame)->f54.f04 = a1->f04 - a2->f04;
    (&frame)->f54.f08 = a1->f08 - a2->f08;
    t1 = njScalor_8c37e480((void *)(&(&frame)->f54));
    if (t1 != 0.0f) {
        njUnitVector_8c37b630((void *)(&(&frame)->f54));
    }
    (&frame)->f48.f00 = a3->f00 - a4->f00;
    (&frame)->f48.f04 = a3->f04 - a4->f04;
    (&frame)->f48.f08 = a3->f08 - a4->f08;
    t2 = njScalor_8c37e480((void *)(&(&frame)->f48));
    if (t2 != 0.0f) {
        njUnitVector_8c37b630((void *)(&(&frame)->f48));
    }
    (&frame)->f30 = a2->f00;
    (&frame)->f3c = (&frame)->f54.f00;
    (&frame)->f34 = a2->f04;
    (&frame)->f40 = (&frame)->f54.f04;
    (&frame)->f38 = a2->f08;
    (&frame)->f44 = (&frame)->f54.f08;
    t4 = call_8c38d6e0(a5, (void *)(&(&frame)->f30), (void *)(&(&frame)->f6c));
    (&frame)->f24 = (a1->f00 + a2->f00) * 0.5f;
    (&frame)->f28 = (a1->f04 + a2->f04) * 0.5f;
    (&frame)->f2c = (a1->f08 + a2->f08) * 0.5f;
    t6 = call_8c38d7d8((void *)(&(&frame)->f24), (void *)(&(&frame)->f6c));
    v11 = (float)(t1 * 0.5f);
    v7 = (float)v11;
    v7 = (float)(v7 + 10.0f);
    v7 = (float)(v7 - t6);
    v9 = (float)v7;
    if (0.0f > v7) {
        v8 = (float)v11;
        v9 = (float)v8;
    }
    (&frame)->f0c = a4->f00;
    (&frame)->f18 = (&frame)->f48.f00;
    (&frame)->f10 = a4->f04;
    (&frame)->f1c = (&frame)->f48.f04;
    (&frame)->f14 = a4->f08;
    (&frame)->f20 = (&frame)->f48.f08;
    t5 = call_8c38d6e0(a5, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f60));
    (&frame)->f00 = (a1->f00 + a2->f00) * 0.5f;
    (&frame)->f04 = (a1->f04 + a2->f04) * 0.5f;
    (&frame)->f08 = (a1->f08 + a2->f08) * 0.5f;
    t3 = call_8c38d7d8((void *)(&frame), (void *)(&(&frame)->f60));
    v12 = (float)(t2 * 0.5f + 10.0f - t3);
    v10 = (float)v12;
    if (0.0f > v12) {
        v10 = (float)(t2 * 0.5f);
    }
    if (t4 > t5) {
        a7->f00 = v9 + 10.0f;
        *(Vector3 *)&a6->f00 = *(Vector3 *)&(&frame)->f54;
        return;
    }
    if (t5 == t4) {
        a7->f00 = 7.0f;
        a6->f00.f00 = ((&frame)->f54.f00 + (&frame)->f48.f00) * 0.5f;
        a6->f00.f04 = ((&frame)->f54.f04 + (&frame)->f48.f04) * 0.5f;
        a6->f00.f08 = ((&frame)->f54.f08 + (&frame)->f48.f08) * 0.5f;
        return;
    }
    a7->f00 = v10 + 10.0f;
    *(Vector3 *)&a6->f00 = *(Vector3 *)&(&frame)->f48;
}
