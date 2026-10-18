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
};
void operation_8c1cd35c(Object *o, float f0)
{
    if (((o->f80 & 0xffff) & 0x20) != 0) {
        o->f80 = (o->f80 & 0xffff) & -0x21;
        o->f44 = f0;
        o->f58 = 3;
    }
}
