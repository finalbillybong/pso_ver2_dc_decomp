typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x10];
    float f10;
    char unknown14[0x4];
    float dispatch;
};
extern void call_8c0fc0c4(void);
int operation_8c0fc158(Object *o)
{
    int v1;
    o->dispatch += o->f10;
    call_8c0fc0c4();
    v1 = (int)(2.0f <= o->dispatch);
    return (int)(v1);
}
