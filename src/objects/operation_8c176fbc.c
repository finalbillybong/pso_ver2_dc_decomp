typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
typedef struct Arg0_10c Arg0_10c;
typedef struct Arg0_110 Arg0_110;
struct Object {
    char unknown0[0x10];
    Arg0_10 *f10;
    char unknown14[0x4];
    void *dispatch;
    char unknown1c[0xf0];
    Arg0_10c *f10c;
    Arg0_110 *f110;
};
struct Arg0_10c {
    char unknown0[0x4];
    short f04;
};
struct Arg0_110 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_10 {
    char unknown0[0x3a4];
    int f3a4;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c052124(void *);
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c176fbc(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c270934;
        operation_8c052124((void *)o);
        if (o->f10c != 0) {
            o->f10c->f04 |= 1;
        }
        if (o->f110 != 0) {
            o->f110->f04 |= 1;
        }
        if (o->f10 != 0) {
            o->f10->f3a4 &= -0x100001;
        }
        destroy_context_8c051f28((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
