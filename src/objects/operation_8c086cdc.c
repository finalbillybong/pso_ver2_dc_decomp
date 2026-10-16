typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    float f20;
    float f24;
    int f28;
};
struct Frame {
    char f04;
    char f05;
    short f06;
    float f08;
    float f0c;
};
extern void initialize_hierarchy_node(void *, void *);
extern int operation_8c05bbf8(void);
extern void call_8c0a2144(int);
extern void call_8c0a5400(void *, int);
Object *operation_8c086cdc(Object *o, int a1, int a2, float f0)
{
    Frame frame;
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c264f60;
    o->tag = (int)(*(int *)0x8c2ffba0);
    o->size = 0x2c;
    o->f20 = f0;
    o->f24 = 0.0f;
    o->f28 = a2;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        (&frame)->f04 = 1;
        (&frame)->f05 = 1;
        (&frame)->f06 = 0;
        (&frame)->f08 = o->f24;
        (&frame)->f0c = o->f20;
        call_8c0a2144(2);
        call_8c0a5400((void *)(&(&frame)->f04), 0x3333);
    } else {
        (&frame)->f04 = 1;
        (&frame)->f05 = 0;
        (&frame)->f06 = 0;
        (&frame)->f08 = o->f24;
        (&frame)->f0c = o->f20;
        call_8c0a2144(2);
        call_8c0a5400((void *)(&(&frame)->f04), 0x238e);
    }
    return o;
}
