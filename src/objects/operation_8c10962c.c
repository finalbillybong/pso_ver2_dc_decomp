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
    char unknown330[0x60];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0x8];
    int f3a4;
};
struct Frame {
    Block_frame_0 f00;
};
extern void call_8c01c5f0(Object *);
extern int query_capped_segment(void *, void *);
extern void apply_object_velocity(void *);
extern void operation_8c04a43c(void *, void *, float);
extern void refresh_follow_effect_8c052180(void *);
void operation_8c10962c(Object *o)
{
    Frame frame;
    void *v4;
    float v5;
    int t1;
    switch (o->f398) {
    case 0:
        o->f34 &= -0x200001;
        o->ff0 = 3;
        o->f398 = 1;
    case 1:
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
        if (o->fec == 8) {
            return;
        }
        o->f398 = -1;
        return;
    case -1:
        o->f34 &= -0x201;
        o->f3a4 = (unsigned int)o->f3a4 >> 1 << 1;
        o->f390 = 1;
    }
}
