typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x44];
    float f44;
    char unknown48[0x10];
    int f58;
    char unknown5c[0x24];
    volatile unsigned short f80;
    char unknown82[0xa];
    float f8c;
};
void operation_8c156ec0(Object *o)
{
    if (((o->f80 & 0xffff & 0x20)) != 0) {
        o->f80 = (o->f80 & 0xffff) & -0x21;
        o->f44 = o->f8c + 26.0f;
        o->f58 = 3;
    }
}
