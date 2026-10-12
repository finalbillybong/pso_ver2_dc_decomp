typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
struct Object {
    Arg0_0 *tag;
    char unknown4[0x10];
    float f14;
    float dispatch;
};
extern void call_8c3998fa(void *, float, float);
void operation_8c014ef8(Object *o)
{
    call_8c3998fa(o->tag, o->f14, o->dispatch);
}
