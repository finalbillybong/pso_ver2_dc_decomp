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
    char unknown20[0x1c];
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
};
extern int g_8c319428;
extern void initialize_position_controller(void *, void *);
Object *operation_8c177250(Object *o, int a1)
{
    initialize_position_controller((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c270978;
    o->tag = (int)(g_8c319428);
    o->size = 0x54;
    o->f3c = 0;
    o->f40 = 0;
    o->f44 = 0xd;
    o->f4c = 0x31;
    o->f48 = 0;
    o->f50 = 0;
    return o;
}
