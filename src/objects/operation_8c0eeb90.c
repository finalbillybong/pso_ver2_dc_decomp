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
    char unknowne8[0x8];
    float ff0;
    char unknownf4[0xc];
    int f100;
    int f104;
    int f108;
};
extern void operation_8c0ee870(void *);
Object *operation_8c0eeb90(Object *o)
{
    operation_8c0ee870((void *)o);
    o->dispatch = (void *)0x8c2680c4;
    o->f100 = -1;
    o->f104 = 0;
    o->f108 = 0;
    o->fe4 = 0;
    o->ff0 = 1.0f;
    return o;
}
