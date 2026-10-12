typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
struct Object {
    Arg0_0 *tag;
    char unknown4[0x1c];
    float f20;
    float f24;
    float f28;
};
extern void call_8c3c4024(void *, float, float, float);
void operation_8c014c00(Object *o)
{
    call_8c3c4024(o->tag, o->f20, o->f24, o->f28);
}
