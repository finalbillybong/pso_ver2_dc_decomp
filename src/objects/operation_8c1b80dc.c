typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3b8];
    float f3b8;
};
extern void call_8c1b7f70(Object *, void *, float);
void operation_8c1b80dc(Object *o)
{
    call_8c1b7f70(o, (void *)0x8c327a70, o->f3b8);
    call_8c1b7f70(o, (void *)0x8c327a7c, (float)1.0f - o->f3b8);
}
