typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
};
struct Arg0_28 {
    char unknown0[0x38];
    float f38;
    float f3c;
};
extern void call_8c0dc854(Arg0_28 *);
void operation_8c051d88(Object *o, float f0, float f1)
{
    o->f28->f38 = f0 - 9.0f;
    o->f28->f3c = f1 - 13.0f;
    call_8c0dc854((Arg0_28 *)(o->f28));
}
