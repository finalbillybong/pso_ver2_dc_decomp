typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_118 Arg0_118;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xfc];
    Arg0_118 *f118;
};
struct Arg0_118 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c052124(void *);
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c15a4c8(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26ee00;
        operation_8c052124((void *)o);
        if (o->f118 != 0) {
            o->f118->f04 |= 1;
        }
        destroy_context_8c051f28((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
