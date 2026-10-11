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
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
};
extern void initialize_manager_8c106568(Object *, int);
Object *operation_8c15babc(Object *o, int a1, int a2)
{
    initialize_manager_8c106568(o, a1);
    o->dispatch = (void *)0x8c26eea4;
    o->tag = *(int *)0x8c316668;
    o->size = 0x4c;
    o->f28 = a2;
    o->f30 = 0;
    o->f34 = 0;
    o->f38 = 0;
    o->f3c = 0;
    o->f40 = 0;
    o->f48 = 0;
    o->f44 = 0;
    o->f24 = 0;
    *(int *)0x8c4db128 = 1;
    *(Object **)0x8c4db138 = o;
    o->f2c = 0;
    return o;
}
