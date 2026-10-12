typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_c Arg0_c;
struct Object {
    int tag;
    int f04;
    char unknown8[0x4];
    Arg0_c *f0c;
    int f10;
    int f14;
    int dispatch;
    int f1c;
    void *f20;
};
extern void call_8c118780(void *);
Object *operation_8c03056c(Object *o, int a1)
{
    o->f20 = (void *)0x8c2614ac;
    o->f1c = 0;
    o->f10 = 0;
    o->f14 = 0;
    o->dispatch = 0;
    o->tag = 0;
    o->f04 = 0;
    o->f0c = (Arg0_c *)a1;
    call_8c118780(o->f0c);
    return o;
}
