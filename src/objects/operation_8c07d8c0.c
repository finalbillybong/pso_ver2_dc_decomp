typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x218];
    int f218;
};
extern void call_8c07dac0(Object *, int);
void operation_8c07d8c0(Object *o)
{
    if (o->f218 > 0x2d) {
        call_8c07dac0(o, 1);
    }
}
