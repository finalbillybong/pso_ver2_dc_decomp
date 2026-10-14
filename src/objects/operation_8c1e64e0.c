typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
extern void call_8c01c1a4(int);
void operation_8c1e64e0(Object *o)
{
    o->f04 |= 1;
    call_8c01c1a4(2);
}
