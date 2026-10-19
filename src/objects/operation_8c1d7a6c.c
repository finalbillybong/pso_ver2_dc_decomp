typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_7c Arg0_7c;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x58];
    int f74;
    Arg0_78 *f78;
    Arg0_7c *f7c;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
extern S_g8c46fe20 *g_8c46fe20;
extern int g_8c4d5954;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c18de08(void *);
extern void operation_8c199b40(int, int);
extern void destroy_context_8c0db244(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1d7a6c(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c276ed4;
        if (o->f7c != 0) {
            call_8c18de08((void *)(o->f7c));
            o->f7c = (Arg0_7c *)0;
        }
        if (o->f74 != 0) {
            if (g_8c46fe20 != 0) {
                g_8c46fe20->f20 &= -9;
            }
            g_8c4d5954 = 0;
        }
        operation_8c199b40((int)(o->f78), 1);
        destroy_context_8c0db244((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
