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
    char unknown20[0x118];
    unsigned char f138;
    char unknown139[0xa7];
    char f1e0;
    char f1e1;
    char f1e2;
    char f1e3;
    char unknown1e4[0x18];
    int f1fc;
    char unknown200[0x1c];
    int f21c;
};
extern void call_8c075398(Object *, int, int);
Object *operation_8c175528(Object *o, int a1, int a2)
{
    unsigned char v5;
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c2704a0;
    o->tag = (int)(*(int *)0x8c319298);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1e2 = 5;
    o->f1e3 = 4;
    v5 = (unsigned char)o->f138;
    if (v5 == 1) {
        o->f21c = 0xe9;
    } else {
        if (v5 == 2) {
            o->f21c = 0xea;
        }
    }
    o->f1fc |= 1;
    return o;
}
