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
    char unknown20[0xb8];
    int fd8;
    char unknowndc[0x24];
    int f100;
    float f104;
    int f108;
    int f10c;
    int f110;
    int f114;
    int f118;
};
extern void call_8c0ee870(void);
Object *operation_8c112e74(Object *o)
{
    call_8c0ee870();
    o->dispatch = (void *)0x8c269c48;
    o->tag = *(int *)0x8c30ff10;
    o->size = 0x11c;
    o->f100 = -1;
    o->f104 = 20.0f;
    o->f108 = 2;
    o->f10c = 0;
    o->f118 = 0;
    o->f110 = 0x1c;
    o->f114 = 0x1c;
    o->fd8 = 3;
    return o;
}
