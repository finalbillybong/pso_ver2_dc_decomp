/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2461b0
 * function: operation_8c2461b0
 * language: c
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 94 of 125 reference instruction lines
 * differing bytes: 157
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c36b024 S_c8c36b024;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_40 Arg0_40;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c36b024 {
    char unknown0[0x18];
    short f18;
    short f1a;
};
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    float f24;
    float f28;
    float f2c;
    Vector3 f30;
    Arg0_3c *f3c;
    Arg0_40 *f40;
};
struct Arg0_20 {
    char unknown0[0x30];
    Vector3 f30;
};
extern Vector3 g_8c33aeac;
extern S_c8c36b024 *call_8c36b024(int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateX_8c37dd28(int, void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, Frame *, Frame *);
extern void njPopMatrix_8c38accc(int);
void operation_8c2461b0(Object *o)
{
    Frame frame;
    short v2;
    short v1;
    S_c8c36b024 *t1;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c33aeac;
    t1 = call_8c36b024(0);
    v1 = (short)t1->f18;
    v2 = (short)t1->f1a;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateX_8c37dd28(0, (void *)(o->f40));
    njRotateY_8c37df90(0, (void *)(o->f3c));
    call_8c3be280(0, (Frame *)((&frame)), (Frame *)((&frame)));
    njPopMatrix_8c38accc(1);
    (&frame)->f00.f00 += o->f24;
    (&frame)->f00.f04 += o->f28;
    (&frame)->f00.f08 += o->f2c;
    *(Vector3 *)&o->f20->f30 = *(Vector3 *)&(&frame)->f00;
    o->f3c = (Arg0_3c *)((int)o->f3c + (int)((float)v1 * 0.1f * 65536.0f / 360.0f));
    o->f40 = (Arg0_40 *)((int)o->f40 + (int)((float)v2 * 0.1f * 65536.0f / 360.0f));
    *(Vector3 *)&o->f30 = *(Vector3 *)&(&frame)->f00;
}
