typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_108 Arg0_108;
typedef struct Arg0_10c Arg0_10c;
typedef struct Arg0_110 Arg0_110;
typedef struct S_vv1 S_vv1;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xec];
    Arg0_108 *f108;
    Arg0_10c *f10c;
    Arg0_110 *f110;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_vv4 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c0f3384(int, int);
extern void destroy_field_8c0fbfa4(void *, short);
extern void destroy_context_8c0f34a0(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0f3b00(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv4 *v4;
    if (o != 0) {
        o->dispatch = (void *)0x8c268820;
        if (o->f108 != 0) {
            v1 = (S_vv1 *)o->f108;
            v1->f04 |= 1;
            o->f108 = (Arg0_108 *)0;
        }
        if (o->f10c != 0) {
            v4 = (S_vv4 *)o->f10c;
            v4->f04 |= 1;
            o->f10c = (Arg0_10c *)0;
        }
        if (o->f110 != 0) {
            operation_8c0f3384((int)(o->f110), 1);
            o->f110 = (Arg0_110 *)0;
        }
        destroy_field_8c0fbfa4((void *)(((char *)o + 0x130)), (short)-1);
        destroy_context_8c0f34a0((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
