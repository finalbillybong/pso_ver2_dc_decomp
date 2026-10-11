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
};
extern void initialize_manager_8c106568(Object *, int);
Object *operation_8c187ca0(Object *o, int a1, int a2)
{
    initialize_manager_8c106568(o, a1);
    o->dispatch = (void *)0x8c27210c;
    o->tag = *(int *)0x8c319db8;
    o->size = 0x34;
    *(int *)0x8c4dbc40 = 1;
    o->f28 = a2;
    o->f2c = 0;
    o->f30 = 0;
    *(Object **)0x8c4dbc44 = o;
    o->f24 = 0;
    return o;
}
