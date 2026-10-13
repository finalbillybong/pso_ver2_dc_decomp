typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_424 Arg0_424;
typedef struct Arg0_4bc Arg0_4bc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x408];
    Arg0_424 *f424;
    char unknown428[0x94];
    Arg0_4bc *f4bc;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_vv4 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c052124(void *);
extern void destroy_field_8c114790(void *, short);
extern void destroy_color_rise_8c05bd84(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c095314(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv4 *v4;
    if (o != 0) {
        o->dispatch = (void *)0x8c26532c;
        if (o != 0) {
            o->dispatch = (void *)0x8c265520;
            if (o->f4bc != 0) {
                v1 = (S_vv1 *)o->f4bc;
                v1->f04 |= 1;
                o->f4bc = (Arg0_4bc *)0;
            }
            v4 = (S_vv4 *)o->f424;
            v4->f04 |= 1;
            o->f424 = (Arg0_424 *)0;
            operation_8c052124((void *)o);
            destroy_field_8c114790((void *)(((char *)o + 0x3e8)), (short)-1);
            destroy_color_rise_8c05bd84((void *)o, (short)0);
        }
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
