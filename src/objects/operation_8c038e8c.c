typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d4];
    short f30c;
    char unknown30e[0x5e];
    Arg0_36c *f36c;
    char unknown370[0x20];
    int f390;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
    Arg0_36c_8 *f08;
};
extern void call_8c01c5f0(Object *);
extern void call_8c0446f8(Object *, float, float, float, void *);
extern void transform_actor_records(void *);
void operation_8c038e8c(Object *o)
{
    Arg0_36c *v1;
    if (o->f30c == 0 || o->f30c != 1) {
        switch (o->f390) {
        case 0:
            o->f30c = 1;
            break;
        }
    } else {
        call_8c01c5f0(o);
        v1 = o->f36c;
        call_8c0446f8(o, v1->f04, 100.0f, 100.0f, (void *)(v1->f08));
    }
    transform_actor_records((void *)o);
    o->f34 &= -0x200001;
}
