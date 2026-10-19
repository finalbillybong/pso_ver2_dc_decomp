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
    Vector3 f3c;
    char unknown48[0xc];
    Vector3 f54;
};
extern int g_8c3166a8;
extern void operation_8c112e74(void *);
Object *operation_8c15c7cc(Object *o)
{
    operation_8c112e74((void *)o);
    o->dispatch = (void *)0x8c26eecc;
    *(Vector3 *)&o->f54 = *(Vector3 *)&o->f3c;
    o->tag = (int)(g_8c3166a8);
    o->size = 0x11c;
    return o;
}
