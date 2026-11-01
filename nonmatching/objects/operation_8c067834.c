/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c067834
 * function: operation_8c067834
 * language: c
 * reference size: 556 bytes
 * compiled size: 560 bytes (+0.7%)
 * differing lines: 86 of 236 reference instruction lines
 * differing bytes: 265
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in stack
 *   frame and spills, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct S_L8c468904 S_L8c468904;
typedef struct S_L8c468904_10 S_L8c468904_10;
typedef struct S_c8c38c154 S_c8c38c154;
typedef struct Frame Frame;
typedef struct S_g8c2f1b7c S_g8c2f1b7c;
typedef struct S_g8c468904 S_g8c468904;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_6a4 Arg0_6a4;
typedef struct Arg0_740 Arg0_740;
typedef struct Arg0_740_c Arg0_740_c;
typedef struct Block_frame_8 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x8];
} Block_frame_8;
typedef struct Block_frame_1c {
    float f00;
    float f04;
    float f08;
} Block_frame_1c;
typedef struct Block_frame_28 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_28;
struct Frame {
    Block_frame_8 f08;
    Vector3 f1c;
    Vector3 f28;
};
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x63c];
    Arg0_6a4 *f6a4;
    char unknown6a8[0x98];
    Arg0_740 *f740;
};
struct Arg0_740 {
    char unknown0[0xc];
    Arg0_740_c *f0c;
};
struct S_L8c468904 {
    S_g8c468904 *f00;
    char unknown4[0xc];
    S_L8c468904_10 *f10;
};
extern Block20 g_8c284c80;
extern S_g8c2f1b7c *g_8c2f1b7c;
extern S_L8c468904 g_8c468904;
void operation_8c067834(Object *o, float f0, float f1, float f2)
{
    Frame frame;
    float v7;
    float v15;
    float t2;
    float t1;
    int v3;
    *(Block20 *)&frame.f08 = g_8c284c80;
    frame.f08.f08 = f0 - 2.0f;
    ((void (*)(void *))0x8c0731d8)(o->f6a4);
    t2 = ((float (*)(void *))0x8c37eb0c)(o->f64);
    t1 = ((float (*)(void *))0x8c38c154)(o->f64);
    frame.f1c = o->f3c;
    frame.f1c.x += t1 * -4.0f;
    frame.f1c.y = 0.0f;
    frame.f1c.z = frame.f1c.z - t2 * -4.0f;
    frame.f28 = frame.f1c;
    v7 = (f1 + f2) * 0.5f;
    frame.f28.x += t2 * v7;
    frame.f28.z += t1 * v7;
    ((void (*)(void *, void *, int))0x8c0a77e8)(&frame.f28, o->f740->f0c, 0x40);
    ((void (*)(Object *, int, void *, int))0x8c05b950)(o, 0, (&g_8c468904)->f10, 0);
    f2 -= f0;
    f1 -= f0;
    f0 *= 2.0f;
    v15 = f0 * 0.5f * 0.5f;
    v3 = 0x6a4;
    while (f1 > f2) {
        frame.f28 = frame.f1c;
        frame.f28.x += t2 * f1;
        frame.f28.z += t1 * f1;
        if (((int (*)(void))0x8c05bbf8)() != 0) {
            ((void (*)(Object *, void *, void *, void *))0x8c067d34)(o, &frame.f28, &frame.f08, *(Arg0_0 **)((char *)o + v3));
        } else {
            ((void (*)(Object *, void *, void *, void *))0x8c05b478)(o, &frame.f28, &frame.f08, *(Arg0_0 **)((char *)o + v3));
        }
        ((void (*)(void))0x8c38ae68)();
        ((void (*)(void *))0x8c382a40)(&frame.f28);
        ((void (*)(int, float, float, float))0x8c37e2e4)(0, v15, 2.0f, v15);
        ((void (*)(void *))0x8c3a944a)(g_8c2f1b7c);
        ((void (*)(void))0x8c38ad10)();
        f1 -= f0;
    }
    ((void (*)(Object *, int, void *, int))0x8c05b950)(o, 0, (&g_8c468904)->f00, 0);
}
