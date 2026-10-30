typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_24_10 Arg0_24_10;
typedef struct S_vv2 S_vv2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    Arg0_24 *f24;
    char unknown28[0x60];
    int f88;
    char unknown8c[0xc];
    float f98;
};
struct Arg0_24 {
    char unknown0[0x10];
    Arg0_24_10 *f10;
};
struct S_vv2 {
    int f00;
};
extern void initialize_hierarchy_node(void *, void *);
extern void operation_8c08b3a0(void *, int);
Object *operation_8c08b2d8(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    S_vv2 *v2;
    int v3;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2652c0;
    o->tag = (int)(*(int *)0x8c300230);
    o->size = 0x9c;
    o->f20 = a2;
    o->f24 = (Arg0_24 *)a3;
    {
        Object *base = o;
        v3 = 0;
        v2 = (S_vv2 *)base->f24->f10;
        while (v2->f00 >= 0) {
            v2 = (S_vv2 *)((char *)v2 + 16);
            v3++;
        }
        operation_8c08b3a0((void *)base, v3);
    }
    o->f88 = 0;
    o->f98 = 0.0f;
    return o;
}
