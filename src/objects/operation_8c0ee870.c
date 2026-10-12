typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x18];
    int f34;
    char unknown38[0xac];
    int fe4;
    float fe8;
    float fec;
    float ff0;
    int ff4;
    float ff8;
    float ffc;
};
extern void call_8c051eb8(void);
Object *operation_8c0ee870(Object *o)
{
    call_8c051eb8();
    o->dispatch = (void *)0x8c26807c;
    o->fe4 = 0;
    o->fe8 = 0.0f;
    o->fec = 0.0f;
    o->ff0 = 1.0f;
    o->ff4 = 0;
    o->f34 |= 0x40000000;
    o->ff8 = 800.0f;
    o->ffc = 30.0f;
    return o;
}
