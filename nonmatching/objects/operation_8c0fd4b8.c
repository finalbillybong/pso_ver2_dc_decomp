/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fd4b8
 * function: operation_8c0fd4b8
 * language: c
 * reference size: 320 bytes
 * compiled size: 320 bytes (+0.0%)
 * differing lines: 18 of 125 reference instruction lines
 * differing bytes: 39
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
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
typedef struct Block_p0_334_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_334_3c;
typedef struct Block_p0_48 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_48;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    Block_p0_48 f48;
    char unknown54[0x10];
    int f64;
    char unknown68[0x2a2];
    short f30a;
    char unknown30c[0x28];
    Arg0_334 *f334;
    char unknown338[0x34];
    unsigned short f36c;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_334 {
    char unknown0[0x3c];
    Block_p0_334_3c f3c;
};
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern float njScalor2_8c37e494(Frame *);
extern void njUnitVector_8c37b630(Frame *);
extern void call_8c3bdf60(void *, Frame *);
extern void operation_8c05237c(void *);
extern void update_object_center(void *);
extern float errno_wrap_8c130334(float, float);
extern void transform_actor_records(void *);
void operation_8c0fd4b8(Object *o)
{
    Frame frame;
    float t1;
    float t2;
    if ((o->f36c & 0xffff) == 0xffff || o->f334 == 0) {
        o->f30a = 2;
        return;
    }
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f334->f3c;
    (&frame)->f00.f04 = o->f3c.f04;
    vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(&o->f3c));
    t1 = njScalor2_8c37e494((Frame *)((&frame)));
    if (t1 > 2.0f) {
        njUnitVector_8c37b630((Frame *)((&frame)));
        (&frame)->f00.f00 *= 2.0f;
        (&frame)->f00.f08 *= 2.0f;
    }
    call_8c3bdf60((void *)(&o->f3c), (Frame *)((&frame)));
    operation_8c05237c((void *)o);
    t1 = o->f48.f04;
    o->f3c.f04 = (o->f334->f3c.f04 + 25.0f - t1) * 0.5f + t1;
    update_object_center((void *)o);
    t2 = errno_wrap_8c130334((&frame)->f00.f00, (&frame)->f00.f08);
    o->f64 = (int)(t2 * 65536.0f / 6.28318405f);
    transform_actor_records((void *)o);
}
