/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c236508
 * function: operation_8c236508
 * language: c
 * reference size: 660 bytes
 * compiled size: 656 bytes (-0.6%)
 * differing lines: 264 of 309 reference instruction lines
 * differing bytes: 479
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_vv29 S_vv29;
typedef struct Block_frame_2c {
    float f00;
    float f04;
    float f08;
} Block_frame_2c;
typedef struct Block_frame_38 {
    float f00;
    float f04;
    float f08;
} Block_frame_38;
typedef struct Block_p2_0 {
    float f00;
    float f04;
    float f08;
} Block_p2_0;
typedef struct Block_p1_0 {
    float f00;
    float f04;
    float f08;
} Block_p1_0;
struct Frame {
    char unknown0[0x4];
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
    Block_frame_2c f2c;
    Block_frame_38 f38;
    float f44;
    float f48;
    float f4c;
};
struct Arg1 {
    Block_p1_0 f00;
};
struct Arg2 {
    Block_p2_0 f00;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_vv29 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct Object {
    char unknown0[0x35c];
    float f35c;
    char unknown360[0x24];
    float f384;
};
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern S_c8c011214 *operation_8c011214(int, int, int);
extern float call_8c3845f0(void *, int);
int operation_8c236508(Object *o, Arg1 *a1, Arg2 *a2)
{
    Frame frame;
    int v5;
    S_vv29 *v29;
    float v30;
    float v14;
    float v11;
    float v13;
    float v12;
    float t1;
    S_c8c011214 *t2;
    float t3;
    float t4;
    (&frame)->f44 = a1->f00.f00 + a2->f00.f00;
    (&frame)->f48 = a1->f00.f04 + a2->f00.f04;
    (&frame)->f4c = a1->f00.f08 + a2->f00.f08;
    *(Vector3 *)&(&frame)->f38 = *(Vector3 *)&a2->f00;
    t1 = njScalor_8c37e480((void *)(&(&frame)->f38));
    if (t1 != 0.0f) {
        njUnitVector_8c37b630((void *)(&(&frame)->f38));
        *(Vector3 *)&(&frame)->f2c = *(Vector3 *)&a1->f00;
        (&frame)->f2c.f00 -= (&frame)->f38.f00 * t1 * 3.0f;
        (&frame)->f2c.f04 -= (&frame)->f38.f04 * t1 * 3.0f;
        (&frame)->f2c.f08 -= (&frame)->f38.f08 * t1 * 3.0f;
        v5 = (int)&(&frame)->f2c;
    } else {
        return 0;
    }
    t2 = operation_8c011214(v5, (int)(&(&frame)->f44), 0x17ef);
    if (t2 == 0) {
    } else {
        v29 = (S_vv29 *)t2->f04;
        v11 = (float)v29->f00;
        v12 = (float)v29->f04;
        v13 = (float)v29->f08;
        (&frame)->f04 = v29->f0c;
        v14 = (float)v29->f14;
        (&frame)->f20 = a2->f00.f00;
        (&frame)->f24 = a2->f00.f04;
        (&frame)->f28 = a2->f00.f08;
        t3 = call_8c3845f0((void *)(&(&frame)->f20), (int)((int)t2->f04 + 0xc));
        v30 = (float)(t3 * 2.0f);
        (&frame)->f20 -= v30 * (&frame)->f04;
        (&frame)->f24 -= v30 * v29->f10;
        (&frame)->f28 -= v30 * v14;
        (&frame)->f14 = v11 - a1->f00.f00;
        (&frame)->f1c = v13 - a1->f00.f08;
        (&frame)->f18 = 0.0f;
        njScalor_8c37e480((void *)(&(&frame)->f14));
        a2->f00.f00 = o->f35c * (&frame)->f20;
        a2->f00.f08 = (&frame)->f28 * o->f35c;
        njUnitVector_8c37b630((void *)(&(&frame)->f20));
        o->f384 *= o->f35c;
        a2->f00.f04 = (&frame)->f24 * o->f384;
        (&frame)->f08 = a2->f00.f00;
        (&frame)->f10 = a2->f00.f08;
        (&frame)->f0c = o->f384;
        t4 = njScalor_8c37e480((void *)(&(&frame)->f08));
        if ((1.0f - o->f35c) > t4) {
            a2->f00.f00 = 0.0f;
            a2->f00.f04 = 0.0f;
            a2->f00.f08 = 0.0f;
        }
        a1->f00.f00 += a2->f00.f00;
        a1->f00.f08 += a2->f00.f08;
        a1->f00.f04 = v12 + (&frame)->f24 * 0.001f;
        return 1;
    }
    return 0;
}
