typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct Arg2_0 Arg2_0;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    char unknown34[0x30];
    int f64;
    int f68;
    int f6c;
    int f70;
    int f74;
};
struct Arg2 {
    Arg2_0 *f00;
    int f04;
    int f08;
    int f0c;
    int f10;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c12b154(void *, void *, int);
Object *operation_8c13f504(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c26dc24;
    o->tag = *(int *)0x8c314688;
    o->size = 0x7c;
    o->f28 = a2->f08;
    o->f2c = a2->f10;
    o->f20 = a2->f04;
    o->f24 = a2->f0c;
    call_8c12b154((void *)(((char *)o + 0x34)), (void *)(a2->f00), 0x30);
    o->f64 = (int)(((char *)o + 0x34));
    o->f68 = 0;
    o->f6c = 0;
    o->f70 = 0;
    o->f74 = 0x14fa;
    o->f30 = 0;
    return o;
}
