typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xc];
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
    Arg0_38 *f38;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operator_delete_8c18de08(void *);
extern void request_resource_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, Object *);
Object *TWindowMakeTeam_dtor_8c1e51b8(Object *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c277ea4;
        operator_delete_8c18de08((void *)(o->f2c));
        operator_delete_8c18de08((void *)(o->f28));
        if (o->f38 != 0) {
            v1 = (S_vv1 *)o->f38;
            v1->f04 |= 1;
            o->f38 = (Arg0_38 *)0;
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
