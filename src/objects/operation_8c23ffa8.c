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
extern int g_8c33a8f0;
extern void call_8c075398(Object *, int, int);
Object *operation_8c23ffa8(Object *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c27c2b8;
    o->tag = (int)(g_8c33a8f0);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1fc |= 2;
    return o;
}
