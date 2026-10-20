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
    char unknown5c[0x34];
    volatile unsigned short f90;
};
void operation_8c25503c(Object *o, float f0)
{
    int v1;
    if (((o->f90 & 0xffff & 1)) != 0) {
        o->f90 = (unsigned int)(o->f90 & 0xffff) >> 1 << 1;
        o->f44 = f0;
        v1 = (int)3;
        o->f58 = (int)(v1);
    }
}
