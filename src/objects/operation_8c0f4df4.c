typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern void call_8c059ea4(Object *, int);
void operation_8c0f4df4(Object *o)
{
    if (o->f30a != 0xa) {
        call_8c059ea4(o, 0xa);
    }
}
