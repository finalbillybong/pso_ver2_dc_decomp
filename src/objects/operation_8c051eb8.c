typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xb8];
    unsigned short fd4;
    short fd6;
    int fd8;
    int fdc;
    int fe0;
};
extern void call_8c01d1ec(void);
Object *operation_8c051eb8(Object *o)
{
    int v1;
    call_8c01d1ec();
    o->dispatch = (void *)0x8c2621c8;
    v1 = (int)0;
    while (0x10 > v1) {
        *(int *)((char *)((char *)o + 0x94) + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    o->fd8 = 0;
    o->fe0 = 0;
    o->fdc = 0;
    o->fd4 = 0xffff;
    o->fd6 = 0;
    return o;
}
