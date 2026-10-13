typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xbc];
    int fd8;
    char unknowndc[0x8];
    int fe4;
    char unknowne8[0x18];
    int f100;
    int f104;
    int f108;
    int f10c;
    int f110;
    int f114;
    int f118;
};
extern void operation_8c0ee870(void *);
Object *operation_8c0f1090(Object *o)
{
    operation_8c0ee870((void *)o);
    o->dispatch = (void *)0x8c268508;
    o->f108 = -1;
    o->f100 = 0;
    o->fe4 = 0;
    o->f104 = 0;
    o->f10c = 0;
    o->f110 = 0;
    o->fd8 = 1;
    o->f114 = 0;
    o->f118 = 1;
    return o;
}
