/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1280d0
 * function: operation_8c1280d0
 * language: c
 * reference size: 352 bytes
 * compiled size: 352 bytes (+0.0%)
 * differing lines: 4 of 135 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode switch2)
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb4];
    int fec;
    short ff0;
    char unknownf2[0x226];
    float f318;
    char unknown31c[0x4];
    float f320;
    Vector3 f324;
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x3c];
    int f398;
    char unknown39c[0x8];
    int f3a4;
};
struct Frame {
    Block_frame_0 f00;
};
extern void operation_8c01c5f0(Object *);
extern int query_capped_segment(void *, void *);
extern void apply_object_velocity(void *);
extern void operation_8c04a43c(void *, void *, float);
extern void refresh_follow_effect_8c052180(void *);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern void request_actor_mode_zero_8c128b44(void *);
void operation_8c1280d0(Object *o)
{
    Frame frame;
    void *v4;
    float v5;
    int t1;
    switch (o->f398) {
    case -1:
        break;
    case 0:
        o->f34 &= -0x200001;
        o->ff0 = 3;
        o->f398 = 1;
    case 1:
        operation_8c01c5f0(o);
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f324;
        (&frame)->f00.f00 = o->f318 + (&frame)->f00.f00;
        (&frame)->f00.f08 = o->f320 + (&frame)->f00.f08;
        t1 = query_capped_segment((void *)o, (void *)(&frame));
        if (t1 == 0) {
            apply_object_velocity((void *)o);
        } else {
            o->f320 = 0.0f;
            o->f318 = 0.0f;
        }
        o->f318 *= 0.9f;
        o->f320 *= 0.9f;
        v4 = (void *)0;
        v5 = (float)0.0f;
        operation_8c04a43c((void *)o, (void *)v4, v5);
        refresh_follow_effect_8c052180((void *)o);
        call_8c05fd7c(0x30035, o, (void *)(((char *)o + 0x3c)), 0, 0);
        if (o->fec != 8) {
            o->f34 &= -0x201;
            o->f3a4 = (unsigned int)o->f3a4 >> 1 << 1;
            o->f35a = o->f330;
            request_actor_mode_zero_8c128b44((void *)o);
        }
    }
}
