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
    char f6c;
    char f6d;
    char f6e;
    char f6f;
    int f70;
};
extern void initialize_base_8c0db1d0(void *, int);
extern void operation_8c1deb8c(void *);
Object *operation_8c1de120(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c32b00c));
    o->dispatch = (void *)0x8c277434;
    o->tag = (int)(*(int *)0x8c32b008);
    o->size = 0x74;
    o->f68 = 0;
    o->f6c = 0;
    o->f6d = 0;
    o->f6e = 0;
    o->f6f = 1;
    o->f70 = a1;
    operation_8c1deb8c((void *)o);
    return o;
}
