typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6c];
    float f6c;
    char unknown70[0x1c];
    int f8c;
    int f90;
    char unknown94[0x88];
    float f11c;
    char unknown120[0x4];
    int f124;
    int f128;
};
extern void operation_8c112f78(void *);
void operation_8c2561fc(Object *o)
{
    operation_8c112f78((void *)o);
    o->f11c = o->f6c * o->f6c;
    o->f124 = (int)(o->f8c);
    if (o->f124 >= 8) {
        o->f124 = 0;
    }
    o->f128 = (int)o->f90 + 1;
}
