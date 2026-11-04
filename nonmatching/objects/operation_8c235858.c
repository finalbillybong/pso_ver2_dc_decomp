/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c235858
 * function: operation_8c235858
 * language: c
 * reference size: 368 bytes
 * compiled size: 364 bytes (-1.1%)
 * differing lines: 52 of 136 reference instruction lines
 * differing bytes: 270
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct S_L8c510b2c S_L8c510b2c;
typedef struct S_L8c510b80 S_L8c510b80;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x20];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x308];
    int f350;
    int f354;
    float f358;
    float f35c;
    float f360;
    float f364;
    float f368;
    int f36c;
    int f370;
    int f374;
    int f378;
    int f37c;
    float f380;
    float f384;
    float f388;
    float f38c;
};
struct Frame {
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    int f18;
    int f1c;
    char unknown20[0x10];
};
struct S_L8c510b80 {
    char unknown0[0x10];
    short f10;
    char unknown12[0x6];
    char f18;
};
extern S_L8c510b2c g_8c510b2c;
extern S_L8c510b80 g_8c510b80;
extern char gc_8c510b2c[];
extern void hs_8c043418(Object *);
extern void copy_actor_records(Object *, void *, int);
extern void attach_and_insert_object(Object *);
Object *operation_8c235858(Object *o)
{
    Frame frame;
    Object **home = &o;
    (void)home;
    hs_8c043418(o);
    o->dispatch = (void *)0x8c2790a0;
    o->f380 = 0.0f;
    o->f384 = 0.0f;
    o->f388 = 0.0f;
    o->f38c = 0.0f;
    o->f360 = 0.0f;
    o->f364 = 0.0f;
    o->f368 = 0.0f;
    o->f3c = *(float *)(gc_8c510b2c + 0x20);
    o->f40 = *(float *)(gc_8c510b2c + 0x24);
    o->f44 = *(float *)(gc_8c510b2c + 0x28);
    o->f36c = 0;
    o->f370 = 0;
    o->f350 = 0;
    o->f354 = 0;
    o->f358 = *(float *)(gc_8c510b2c + 0x0);
    o->f35c = *(float *)(gc_8c510b2c + 0x4);
    o->f374 = 0;
    (&frame)->f04 = 0.0f;
    (&frame)->f08 = 0.0f;
    (&frame)->f0c = 0.0f;
    (&frame)->f10 = 2.0f;
    (&frame)->f14 = 1.0f;
    (&frame)->f18 = 1;
    (&frame)->f1c = 0x80207;
    copy_actor_records(o, &(&frame)->f04, 1);
    attach_and_insert_object(o);
    o->f378 = 0;
    (&g_8c510b80)->f10 = 0;
    (&g_8c510b80)->f18 = 0;
    o->f37c = 0;
    return o;
}
