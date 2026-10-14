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
    char f1e2;
    char f1e3;
    char unknown1e4[0x18];
    int f1fc;
    char unknown200[0x20];
    float f220;
    char unknown224[0x8];
    void *f22c;
};
extern void call_8c075398(Object *, int, int);
extern void operation_1abd98_8c1c6104();
Object *operation_8c23de88(Object *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c27ae94;
    o->tag = (int)(*(int *)0x8c33a6c8);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1e2 = 3;
    o->f1e3 = 2;
    o->f1fc |= 0x223;
    o->f22c = operation_1abd98_8c1c6104;
    o->f220 = 10.0f;
    return o;
}
