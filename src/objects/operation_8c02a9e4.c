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
extern void call_8c02a9f8(Object *, int);
void operation_8c02a9e4(Object *o)
{
    call_8c02a9f8(o, (int)(o->f30a));
}
