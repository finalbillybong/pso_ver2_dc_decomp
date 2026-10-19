typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    Vector3 f00;
};
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x2c];
    int f70;
};
extern Vector3 g_8c3047e8;
extern void interpolate_effect_vector(void *, void *, float);
extern void operation_8c0c5478(void *, void *, float);
void operation_8c0ad9d4(Object *o)
{
    Frame frame;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c3047e8;
    switch (o->f70) {
    case 0:
        break;
    case 1:
        interpolate_effect_vector((void *)(&o->f40), (void *)(&frame), 2.75f);
    }
    operation_8c0c5478((void *)(((char *)o + 0x24)), (void *)(((char *)o + 0x30)), o->f40);
}
