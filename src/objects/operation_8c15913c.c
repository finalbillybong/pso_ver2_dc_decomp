typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_40 Arg0_40;
struct Object {
    char unknown0[0x34];
    Arg0_34 *f34;
    Arg0_38 *f38;
    Arg0_3c *f3c;
    Arg0_40 *f40;
};
extern void request_resource_release(void *);
void operation_8c15913c(Object *o)
{
    if (o->f34 != 0) {
        request_resource_release(o->f34);
        o->f34 = 0;
    }
    if (o->f40 != 0) {
        request_resource_release(o->f40);
        o->f40 = 0;
    }
    if (o->f3c != 0) {
        request_resource_release(o->f3c);
        o->f3c = 0;
    }
    if (o->f38 != 0) {
        request_resource_release(o->f38);
        o->f38 = 0;
    }
}
