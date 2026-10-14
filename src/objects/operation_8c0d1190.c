typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    Arg0_38 *f38;
    int f3c;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern void step_vector_toward(void *, void *, void *, float);
extern void call_8c0a7608(void *, void *);
extern float call_8c37e480(Frame *);
void operation_8c0d1190(Object *o)
{
    Frame frame;
    float t1;
    step_vector_toward((void *)(&o->f20), (void *)(&o->f2c), (void *)(&o->f20), 10.0f);
    if (o->f38 != 0) {
        call_8c0a7608((void *)(o->f38), (void *)(&o->f20));
    }
    (&frame)->f00 = o->f20 - o->f2c;
    (&frame)->f04 = o->f24 - o->f30;
    (&frame)->f08 = o->f28 - o->f34;
    o->f3c += 1;
    t1 = call_8c37e480((Frame *)((&frame)));
    if (t1 > 10.0f && !(o->f3c >= 0x46)) {
        return;
    }
    o->f04 |= 1;
}
