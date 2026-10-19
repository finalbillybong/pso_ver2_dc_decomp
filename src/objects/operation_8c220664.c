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
    char unknown20[0xc4];
    float fe4;
};
extern int g_8c336b10;
extern void call_8c088f14(Object *, int, int);
Object *operation_8c220664(Object *o, int a1, int a2)
{
    call_8c088f14(o, a1, a2);
    o->dispatch = (void *)0x8c278860;
    o->tag = (int)(g_8c336b10);
    o->size = 0xf4;
    o->fe4 = 20.0f;
    return o;
}
