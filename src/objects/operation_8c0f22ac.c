typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xc8];
    int fe4;
    char unknowne8[0x18];
    int f100;
    int f104;
    int f108;
    int f10c;
};
extern void operation_8c0ee870(void *);
Object *operation_8c0f22ac(Object *o)
{
    operation_8c0ee870((void *)o);
    o->dispatch = (void *)0x8c268640;
    o->fe4 = 0;
    o->f104 = -1;
    o->f100 = 0;
    o->f108 = 0;
    o->f10c = 0;
    return o;
}
