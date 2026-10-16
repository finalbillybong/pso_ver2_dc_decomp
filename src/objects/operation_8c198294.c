typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46ee84 S_L8c46ee84;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    float f20;
    float f24;
    float f28;
};
struct S_L8c46ee84 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
extern int g_8c31c894;
extern S_L8c46ee84 g_8c46ee84;
extern void initialize_hierarchy_node(void *, void *);
extern int operation_8c01c25c(void);
Object *operation_8c198294(Object *o, int a1)
{
    Object **home = &o;
    int v6;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2728dc;
    o->tag = (int)(g_8c31c894);
    o->size = 0x40;
    t1 = operation_8c01c25c();
    if (t1 == 0x10) {
        o->f20 = (&g_8c46ee84)->f00 + (&g_8c46ee84)->f0c;
        o->f24 = (&g_8c46ee84)->f04 + (&g_8c46ee84)->f10;
        o->f28 = (&g_8c46ee84)->f08 + (&g_8c46ee84)->f14 * 45.0f;
    } else {
        o->f20 = 0.0f;
        o->f24 = 0.0f;
        o->f28 = -45.0f;
    }
    v6 = (int)0;
    while ((unsigned int)5 > (unsigned int)(unsigned char)v6) {
        *(short *)((char *)((char *)o + 0x2c) + ((unsigned char)v6 << 1)) = 0;
        *(short *)((char *)((char *)o + 0x36) + ((unsigned char)v6 << 1)) = 0;
        v6 = (int)(v6 + 1);
    }
    return o;
}
