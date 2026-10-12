typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3f0];
    int f3f0;
};
extern void call_8c05a11c(Object *, int);
void operation_8c05d018(Object *o)
{
    if (o->f3f0 == 0) {
        call_8c05a11c(o, 0xf2);
        o->f3f0 = 0x14;
    }
}
