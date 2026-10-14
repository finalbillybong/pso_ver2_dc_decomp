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
};
extern void operation_1abe00(void *, void *, void *, void *);
extern void operation_193300(int, void *);
extern void operation_193324(int, void *);
Object *operation_8c1c616c(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    (void)home;
    operation_1abe00((void *)o, (void *)a1, (void *)a2, (void *)a3);
    o->dispatch = (void *)0x8c2766bc;
    o->tag = (int)(*(int *)0x8c328cc8);
    o->size = 0x64;
    operation_193300(1, (void *)(((char *)o + 0x5c)));
    operation_193324(1, (void *)(((char *)o + 0x60)));
    return o;
}
