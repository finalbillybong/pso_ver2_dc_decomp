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
extern void request_resource_release(void *);
void operation_8c233170(Object *o)
{
    if (o->f28 != 0) {
        request_resource_release(o->f28);
        o->f28 = 0;
    }
}
