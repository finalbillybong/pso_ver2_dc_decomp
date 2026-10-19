typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_e8 Arg0_e8;
typedef struct Arg0_ec Arg0_ec;
typedef struct S_vv7 S_vv7;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xcc];
    Arg0_e8 *fe8;
    Arg0_ec *fec;
};
struct S_vv7 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c0f3384(int, int);
extern void destroy_context_8c0f34a0(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c07c668(Object *o, int a1)
{
    S_vv7 *v7;
    if (o != 0) {
        o->dispatch = (void *)0x8c264198;
        if (o->fec != 0) {
            operation_8c0f3384((int)(o->fec), 1);
            o->fec = (Arg0_ec *)0;
        }
        if (o->fe8 != 0) {
            v7 = (S_vv7 *)o->fe8;
            v7->f04 |= 1;
            o->fe8 = (Arg0_e8 *)0;
        }
        destroy_context_8c0f34a0((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
