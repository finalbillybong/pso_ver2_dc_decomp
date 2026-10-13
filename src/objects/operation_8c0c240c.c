typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x3c];
    Block_p0_324 f3c;
    char unknown48[0x30];
    Block_p0_324 f78;
    char unknown84[0x100];
    Arg0_184 *f184;
    char unknown188[0x182];
    short f30a;
    char unknown30c[0x18];
    Block_p0_324 f324;
    char unknown330[0x60];
    int f390;
    char unknown394[0x4];
    int f398;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern int operation_8c03d338(void);
extern void actor_render_noop_b(Object *);
extern void dispatch_actor_mode(void *);
void operation_8c0c240c(Object *o)
{
    int t1;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        actor_render_noop_b(o);
        return;
    }
    if (o->f30a != o->f390) {
        if (o->f398 != -1) {
            o->f398 = -1;
            dispatch_actor_mode((void *)o);
        }
        o->f30a = o->f390;
        o->f398 = 0;
    }
    dispatch_actor_mode((void *)o);
    if (o->f398 == -1) {
        o->f398 = -1;
        dispatch_actor_mode((void *)o);
        o->f30a = o->f390;
        o->f398 = 0;
    }
    o->f324 = o->f3c;
    if (o->f184 != 0) {
        o->f324.f04 += o->f184->f10 * 0.5f;
    }
    o->f78 = o->f324;
}
