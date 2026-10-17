typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct SBlock26 {
    short halves[13];
} SBlock26;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char f20;
    char unknown21[0x1];
    short f22;
    short f24;
    short f26;
    short f28;
    short f2a;
    short f2c;
    short f2e;
    short f30;
    short f32;
    short f34;
    short f36;
    short f38;
    short f3a;
    short f3c;
};
struct Arg2 {
    char f00;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c2268ac(Object *o, int a1, Arg2 *a2)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278b68;
    o->f2e = 0;
    o->f2c = 0;
    o->f2a = 0;
    o->f28 = 0;
    o->f26 = 0;
    o->f24 = 0;
    o->f38 = 0;
    o->f36 = 0;
    o->f34 = 0;
    o->f32 = 0;
    o->f30 = 0;
    o->f3c = 0;
    o->f3a = 0;
    o->tag = (int)(*(int *)0x8c3376f8);
    o->size = 0x40;
    *(SBlock26 *)&*(char *)((char *)o + 0x24) = *(SBlock26 *)&a2->f00;
    o->f22 = 0;
    o->f20 = 0;
    return o;
}
