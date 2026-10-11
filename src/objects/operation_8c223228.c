typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_22b8 Arg0_22b8;
typedef struct Arg0_22bc Arg0_22bc;
typedef struct Arg0_22c0 Arg0_22c0;
typedef struct Arg0_22c4 Arg0_22c4;
struct Object {
    char unknown0[0x22b8];
    Arg0_22b8 *f22b8;
    Arg0_22bc *f22bc;
    Arg0_22c0 *f22c0;
    Arg0_22c4 *f22c4;
};
extern void request_resource_release(void *);
void operation_8c223228(Object *o)
{
    if (o->f22bc != 0) {
        request_resource_release(o->f22bc);
        o->f22bc = 0;
    }
    if (o->f22c4 != 0) {
        request_resource_release(o->f22c4);
        o->f22c4 = 0;
    }
    if (o->f22c0 != 0) {
        request_resource_release(o->f22c0);
        o->f22c0 = 0;
    }
    if (o->f22b8 != 0) {
        request_resource_release(o->f22b8);
        o->f22b8 = 0;
    }
}
