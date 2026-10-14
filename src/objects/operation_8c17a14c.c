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
    char unknown200[0x20];
    float f220;
    char unknown224[0x8];
    void *f22c;
    char unknown230[0x4];
    int f234;
};
extern void call_8c075398(Object *, int, int);
extern void operation_1abd98_8c1c6104();
Object *operation_8c17a14c(Object *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c271670;
    o->tag = (int)(*(int *)0x8c319710);
    o->size = 0x238;
    o->f1e0 = 0;
    o->f1e1 = 1;
    o->f1fc |= 0x22;
    o->f22c = operation_1abd98_8c1c6104;
    o->f220 = 10.0f;
    o->f234 = 0;
    return o;
}
