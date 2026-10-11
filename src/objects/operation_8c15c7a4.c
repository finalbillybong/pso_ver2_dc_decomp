typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_40 Arg0_40;
struct Object {
    char unknown0[0x40];
    Arg0_40 *f40;
};
extern void request_resource_release(void *);
void operation_8c15c7a4(Object *o)
{
    if (o->f40 != 0) {
        request_resource_release(o->f40);
        o->f40 = 0;
    }
}
