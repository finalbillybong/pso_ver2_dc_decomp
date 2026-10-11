typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x14];
    short f14;
    short f16;
};
extern void operation_1c7dd4(Object *);
void operation_8c15b1e4(Object *o)
{
    operation_1c7dd4(o);
    o->f14 = 0;
    o->f16 = 0;
}
