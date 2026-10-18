typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    Arg1 *f24;
    int f28;
    int f2c;
    int f30;
    char unknown34[0x34];
    int f68;
    char unknown6c[0x14];
    float f80;
    float f84;
    char unknown88[0x44];
    float fcc;
};
struct Arg1 {
    char unknown0[0x830];
    float f830;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c1f1e1c(Object *);
Object *operation_8c1f1d38(Object *o, Arg1 *a1, int a2)
{
    Object **home = &o;
    int v1;
    float v2;
    int v3;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a2);
    o->dispatch = (void *)0x8c27803c;
    o->tag = (int)(*(int *)0x8c32c408);
    o->size = 0xec;
    o->f24 = a1;
    o->f28 = 0;
    o->f30 = 0;
    o->f2c = 0;
    call_8c1f1e1c(o);
    o->f68 = 0;
    o->f20 = a2;
    o->f84 = 0.0f;
    o->f80 = 0.0f;
    v1 = (int)0;
    v3 = -1;
    while (v1 != 3) {
        *(int *)&o->f80 = v3;
        v1 = (int)(v1 + 1);
    }
    v2 = (float)a1->f830;
    if (v2 > 0.5f) {
        o->fcc = 1.1f - v2 * 0.2f;
    } else {
        o->fcc = 1.0f;
    }
    o->f04 |= 0x10;
    return o;
}
