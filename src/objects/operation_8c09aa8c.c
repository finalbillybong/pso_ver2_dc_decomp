typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
};
struct Object {
    char unknown0[0x38];
    float f38;
    float f3c;
    float f40;
    float f44;
    char unknown48[0x4];
    float f4c;
    float f50;
};
extern void operation_1959b0(int, void *, void *, float, float);
void operation_8c09aa8c(Object *o)
{
    Frame frame;
    float v1;
    v1 = o->f50 * 0.2f;
    (&frame)->f08 = (&frame)->f0c = o->f4c * 0.5f;
    (&frame)->f00 = o->f40 + o->f38;
    (&frame)->f04 = o->f44 + o->f3c;
    operation_1959b0(0x19, (void *)(&frame), (void *)(&(&frame)->f08), -1.09f, v1);
}
