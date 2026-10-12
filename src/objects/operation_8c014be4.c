typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
struct Object {
    Arg0_0 *tag;
    char unknown4[0x4];
    float f08;
    float f0c;
    float f10;
};
extern void call_8c3c4074(void *, float, float, float);
void operation_8c014be4(Object *o)
{
    call_8c3c4074(o->tag, o->f08, o->f0c, o->f10);
}
