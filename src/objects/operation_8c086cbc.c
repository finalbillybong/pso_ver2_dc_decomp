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
extern void call_8c3827d8(void *);
extern void call_8c0803ec(Object *);
void operation_8c086cbc(Object *o)
{
    call_8c3827d8((void *)(o->f28));
    call_8c0803ec(o);
}
