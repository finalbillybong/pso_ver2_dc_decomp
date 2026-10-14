typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    char unknown34[0xc0];
    int ff4;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c221a6c(Object *);
extern int call_8c01c434(void);
Object *operation_8c221978(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27890c;
    o->f24 = -1;
    o->f20 = 0;
    o->f28 = 0xff;
    o->f30 = 0;
    o->f2c = 0;
    call_8c221a6c(o);
    t1 = call_8c01c434();
    if (t1 != 0) {
        if (t1 == 1) {
            goto L_8c2219c6;
        }
    } else {
        o->ff4 = 0x1e;
        goto L_8c2219ce;
L_8c2219c6:;
        o->ff4 = 0x19;
    }
L_8c2219ce:;
    return o;
}
