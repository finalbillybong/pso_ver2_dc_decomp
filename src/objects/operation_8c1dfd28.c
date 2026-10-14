typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x48];
    int f68;
    int f6c;
    int f70;
    int f74;
    int f78;
    int f7c;
};
extern void initialize_base_8c0db1d0(void *, int);
extern void operation_8c1e0000(void *);
Object *operation_8c1dfd28(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c32b23c));
    o->dispatch = (void *)0x8c277454;
    o->tag = (int)(*(int *)0x8c32b238);
    o->size = 0x80;
    o->f68 = 0;
    o->f7c = a1;
    o->f6c = 0;
    o->f70 = 0;
    o->f74 = 7;
    o->f78 = 3;
    operation_8c1e0000((void *)o);
    return o;
}
