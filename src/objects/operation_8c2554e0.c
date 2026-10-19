typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x142];
    short f142;
};
extern void call_8c255408(Object *, int);
void operation_8c2554e0(Object *o)
{
    call_8c255408(o, (int)(o->f142));
}
