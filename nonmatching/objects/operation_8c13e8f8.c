/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13e8f8
 * function: operation_8c13e8f8
 * language: c
 * reference size: 612 bytes
 * compiled size: 620 bytes (+1.3%)
 * differing lines: 126 of 264 reference instruction lines
 * differing bytes: 482
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_64 S_c8c021ef8_64;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Block_frame_18 {
    float f00;
    float f04;
    float f08;
} Block_frame_18;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_frame_24 {
    float f00;
    float f04;
    float f08;
} Block_frame_24;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
    Block_frame_18 f18;
    Block_frame_24 f24;
};
struct Object {
    char unknown0[0x13c];
    Vector3 f13c;
    Vector3 f148;
    Vector3 f154;
    Vector3 f160;
    char unknown16c[0x4];
    int f170;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    S_c8c021ef8_64 *f64;
};
extern Vector3 g_8c314640;
extern Vector3 g_8c31464c;
extern Vector3 g_8c314658;
extern Vector3 g_8c314664;
extern S_g8c418248 *g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern void operation_8c0a2144(int);
void operation_8c13e8f8(Object *o)
{
    Frame frame;
    S_c8c021ef8 *t1;
    *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&g_8c314640;
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&g_8c31464c;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c314658;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c314664;
    if (o->f170 == 0) {
        (&frame)->f18.f00 = -8.75f;
        (&frame)->f18.f04 = 43.92f;
        (&frame)->f18.f00 = 28.79f;
        (&frame)->f00.f00 = 0.0f;
        (&frame)->f00.f04 = 39.0f;
        (&frame)->f00.f00 = 0.0f;
    }
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        return;
    }
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)(t1->f64));
    call_8c3be280(0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f24));
    call_8c3be280(0, (void *)(&(&frame)->f18), (void *)(&(&frame)->f18));
    call_8c3be280(0, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f0c));
    call_8c3be280(0, (void *)(&frame), (void *)(&frame));
    njPopMatrix_8c38accc(1);
    (&frame)->f24.f00 += t1->f3c;
    (&frame)->f24.f04 += t1->f40;
    (&frame)->f24.f08 += t1->f44;
    (&frame)->f18.f00 += t1->f3c;
    (&frame)->f18.f04 += t1->f40;
    (&frame)->f18.f08 += t1->f44;
    (&frame)->f0c.f00 += t1->f3c;
    (&frame)->f0c.f04 += t1->f40;
    (&frame)->f0c.f08 += t1->f44;
    (&frame)->f00.f00 += t1->f3c;
    (&frame)->f00.f04 += t1->f40;
    (&frame)->f00.f08 += t1->f44;
    *(Vector3 *)&o->f148 = *(Vector3 *)&(&frame)->f24;
    *(Vector3 *)&o->f160 = *(Vector3 *)&(&frame)->f18;
    *(Vector3 *)&o->f13c = *(Vector3 *)&(&frame)->f0c;
    *(Vector3 *)&o->f154 = *(Vector3 *)&(&frame)->f00;
    operation_8c0a2144(6);
}
