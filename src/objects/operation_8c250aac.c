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
    char unknown20[0x1c0];
    char f1e0;
    char f1e1;
    char f1e2;
    char f1e3;
    char unknown1e4[0x18];
    int f1fc;
};
extern int g_8c33f858;
extern void operation_8c241158(void *);
Object *operation_8c250aac(Object *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27e9d0;
    o->tag = (int)(g_8c33f858);
    o->size = 0x234;
    o->f1e0 = 1;
    o->f1e1 = 2;
    o->f1e2 = 1;
    o->f1e3 = 2;
    o->f1fc |= 0x201;
    return o;
}
