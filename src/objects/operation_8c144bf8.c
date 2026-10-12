typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3dc];
    int f3dc;
};
extern void call_8c144c30(Object *);
extern void call_8c1452f8(int, void *);
void operation_8c144bf8(Object *o)
{
    o->f3dc |= 0x88;
    call_8c144c30(o);
    call_8c1452f8(0x30006, (void *)(((char *)o + 0x3c)));
}
