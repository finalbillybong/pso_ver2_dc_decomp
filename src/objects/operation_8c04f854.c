typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    Vector3 f3c;
    char unknown48[0x40];
    int f88;
    char unknown8c[0x8];
    int f94;
    char unknown98[0x10];
    int fa8;
    short fac;
};
struct Arg2 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    Vector3 f3c;
};
extern void call_8c01d1ec(Object *);
extern int create_effect_769c(void *, int);
Object *operation_8c04f854(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    int t1;
    (void)home;
    call_8c01d1ec(o);
    o->dispatch = (void *)0x8c261e94;
    if (a2 != 0) {
        o->tag = (int)(*(int *)0x8c2f2cd4);
        o->size = 0xb0;
        o->f3c = a2->f3c;
        o->f94 = 0;
        o->fac = a2->f20;
        o->f88 = 0xb4;
        t1 = create_effect_769c((void *)(&o->f3c), 0x12f);
        o->fa8 = (int)(t1);
    } else {
        o->f04 |= 1;
    }
    return o;
}
