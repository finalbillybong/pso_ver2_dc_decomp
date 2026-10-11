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
    char unknown20[0x4];
    int f24;
    int f28;
    int f2c;
    char unknown30[0x4];
    int f34;
    int f38;
    int f3c;
    int f40;
};
extern int g_8c335d8c;
extern int g_8c5049fc;
extern Object *g_8c504a00;
extern void initialize_manager_8c106568(Object *, int);
Object *operation_8c208464(Object *o, int a1, int a2)
{
    initialize_manager_8c106568(o, a1);
    o->dispatch = (void *)0x8c2780f4;
    o->tag = g_8c335d8c;
    o->size = 0x44;
    o->f24 = 0;
    o->f28 = a2;
    o->f2c = 0;
    o->f34 = 0;
    o->f38 = 0;
    o->f3c = 0;
    o->f40 = 1;
    g_8c5049fc = 1;
    g_8c504a00 = o;
    return o;
}
