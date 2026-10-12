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
};
struct Object {
    char unknown0[0x24];
    float f24;
    float f28;
    float f2c;
    char unknown30[0x38];
    float f68;
    char unknown6c[0x4];
    int f70;
    char unknown74[0x10];
    float f84;
    float f88;
    float f8c;
};
extern float call_8c37e480(Frame *);
void operation_8c0ad92c(Object *o)
{
    Frame frame;
    float t1;
    (&frame)->f00 = o->f24 - o->f84;
    (&frame)->f04 = o->f28 - o->f88;
    (&frame)->f08 = o->f2c - o->f8c;
    t1 = call_8c37e480((&frame));
    if (!(t1 > o->f68)) {
        o->f70 += 1;
    }
}
