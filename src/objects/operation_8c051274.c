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
struct Frame {
    Block_frame_0 f00;
};
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
    char unknown35c[0x34];
    short f390;
};
extern void call_8c01c5f0(Object *);
extern int query_capped_segment(void *, void *);
extern void apply_object_velocity(void *);
extern void operation_8c04a43c(void *, void *, float);
extern void refresh_follow_effect_8c052180(void *);
extern void operation_8c0514f4(void *);
void operation_8c051274(Object *o)
{
    Frame frame;
    void *v4;
    float v5;
    int t1;
    call_8c01c5f0(o);
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
    o->f318 *= 0.5f;
    o->f320 *= 0.5f;
    v4 = (void *)0;
    v5 = (float)0.0f;
    operation_8c04a43c((void *)o, (void *)v4, v5);
    refresh_follow_effect_8c052180((void *)o);
    if (o->fec != 8) {
        o->f34 &= -0x201;
        o->f35a = o->f330;
        if (((o->f390 & 2)) != 0) {
            operation_8c0514f4((void *)o);
            o->ff0 = 4;
        }
    }
}
