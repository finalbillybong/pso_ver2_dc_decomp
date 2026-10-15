typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    char unknown0[0x14];
    int f14;
    char unknown18[0x4];
    Vector3 f1c;
    Vector3 f28;
    char unknown34[0x14];
};
struct Object {
    char unknown0[0x13c];
    Vector3 f13c;
    Vector3 f148;
};
extern void step_vector_toward(void *, void *, void *, float);
extern void call_8c0a22fc(Frame *);
void operation_8c13f0ac(Object *o)
{
    Frame frame;
    step_vector_toward((void *)(&o->f148), (void *)(((char *)o + 0x160)), (void *)(&o->f148), 0.48f);
    step_vector_toward((void *)(&o->f13c), (void *)(((char *)o + 0x154)), (void *)(&o->f13c), 0.55f);
    *(Vector3 *)&(&frame)->f1c = *(Vector3 *)&o->f148;
    *(Vector3 *)&(&frame)->f28 = *(Vector3 *)&o->f13c;
    (&frame)->f14 = 0x4222;
    call_8c0a22fc((Frame *)((&frame)));
}
