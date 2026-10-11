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
};
extern void initialize_manager_8c106568(Object *, int);
Object *operation_8c11247c(Object *o, int a1, int a2)
{
    initialize_manager_8c106568(o, a1);
    o->dispatch = (void *)0x8c269bf8;
    o->tag = *(int *)0x8c30fec0;
    o->size = 0x38;
    o->f24 = 0;
    o->f28 = a2;
    o->f2c = 0;
    o->f30 = 0;
    o->f34 = 0;
    *(Object **)0x8c4d81cc = o;
    *(int *)0x8c4d81c0 = 1;
    *(int *)0x8c4d81c4 = 0;
    *(int *)0x8c4d81c8 = 0;
    return o;
}
