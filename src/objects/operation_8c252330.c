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
    char unknown1e2[0x1a];
    int f1fc;
};
extern int g_8c33fa08;
extern void operation_8c241158(void *);
Object *operation_8c252330(Object *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27f970;
    o->tag = (int)(g_8c33fa08);
    o->size = 0x234;
    o->f1e0 = 1;
    o->f1e1 = 2;
    o->f1fc |= 2;
    return o;
}
