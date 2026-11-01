/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c245fdc
 * function: operation_8c245fdc
 * language: c
 * reference size: 376 bytes
 * compiled size: 380 bytes (+1.1%)
 * differing lines: 152 of 179 reference instruction lines
 * differing bytes: 283
 * provenance: generator draft (mode ccastext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_38 S_frame_38;
typedef struct S_frame_3c S_frame_3c;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct Arg4 Arg4;
struct Object {
    char unknown0[0x44];
    unsigned char f44;
    unsigned char f45;
    unsigned char f46;
    unsigned char f47;
    int f48;
    float f4c;
};
struct Frame {
    char f00;
    char f01;
    char f02;
    char f03;
    char f04;
    char f05;
    char f06;
    char f07;
    int f08;
    char unknownc[0xc];
    int f18;
    char unknown1c[0x1c];
    S_frame_38 *f38;
    S_frame_3c *f3c;
    int f40;
    int f44;
};
struct S_frame_38 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
struct Arg1 {
    float f00;
    float f04;
};
struct S_frame_3c {
    int f00;
    int f04;
    int f08;
    int f0c;
};
struct Arg2 {
    float f00;
    float f04;
};
struct Arg3 {
    float f00;
    float f04;
};
struct Arg4 {
    float f00;
    float f04;
};
void operation_8c245fdc(Object *o, Arg1 *a1, Arg2 *a2, Arg3 *a3, Arg4 *a4, int a5)
{
    Frame frame;
    float v1;
    float v2;
    float v4;
    float v8;
    float v3;
    float v9;
    unsigned char v19;
    unsigned char v20;
    unsigned char v18;
    v1 = (float)0.0f;
    v2 = (float)((float)a5 * o->f4c + (float)o->f44);
    v3 = (float)((float)(a5 + 1) * o->f4c + (float)o->f44);
    if (v1 > v2) {
    } else {
        if (255.0f > v2) {
            v4 = (float)v2;
        } else {
            v4 = (float)255.0f;
        }
        v1 = (float)v4;
    }
    v8 = (float)0.0f;
    if (v8 > v3) {
    } else {
        if (255.0f > v3) {
            v9 = (float)v3;
        } else {
            v9 = (float)255.0f;
        }
        v8 = (float)v9;
    }
    if (o->f48 == 0) {
        ((void (*)(void))0x8c0c5310)();
    }
    (&frame)->f07 = (int)v1;
    (&frame)->f06 = v19;
    v19 = (unsigned char)o->f45;
    (&frame)->f05 = v20;
    v18 = (unsigned char)o->f47;
    v20 = (unsigned char)o->f46;
    (&frame)->f38 = (S_frame_38 *)&(&frame)->f18;
    (&frame)->f3c = (S_frame_3c *)&(&frame)->f08;
    (&frame)->f40 = 0;
    (&frame)->f04 = v18;
    (&frame)->f44 = 4;
    (&frame)->f03 = (int)v8;
    (&frame)->f02 = v19;
    (&frame)->f01 = v20;
    (&frame)->f00 = v18;
    (&frame)->f38->f00 = a1->f00;
    (&frame)->f38->f04 = a1->f04;
    (&frame)->f3c->f00 = (int)(*(int *)&(&frame)->f04);
    (&frame)->f38->f08 = a2->f00;
    (&frame)->f38->f0c = a2->f04;
    (&frame)->f3c->f04 = (int)(*(int *)&(&frame)->f04);
    (&frame)->f38->f10 = a3->f00;
    (&frame)->f38->f14 = a3->f04;
    (&frame)->f3c->f08 = (int)(*(int *)&(&frame)->f00);
    (&frame)->f38->f18 = a4->f00;
    (&frame)->f38->f1c = a4->f04;
    (&frame)->f3c->f0c = (int)(*(int *)&(&frame)->f00);
    ((void (*)(float, void *, int, int))0x8c38ef2c)(-15.0f, &(&frame)->f38, 4, 0x60);
}
