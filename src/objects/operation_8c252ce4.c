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
    char unknown20[0x1dc];
    int f1fc;
    char unknown200[0x28];
    void *f228;
    void *f22c;
};
extern void operation_8c241158(void *);
extern void operation_1ac120();
Object *operation_8c252ce4(Object *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27fe48;
    o->tag = (int)(*(int *)0x8c33faa8);
    o->size = 0x24c;
    o->f1fc |= 0x223;
    o->f22c = operation_1ac120;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
