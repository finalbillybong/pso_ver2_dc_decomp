typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct S_vv1 S_vv1;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x22];
    short f22;
    Arg0_24 *f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_vv5 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_24 {
    char unknown0[0x3c];
    float f3c;
};
extern void set_fields_8c1e0ef4(void *);
extern void request_resource_release(void *);
extern void call_8c0dc854(Arg0_24 *);
extern void call_8c1dccb4(Object *);
void operation_8c1dd654(Object *o)
{
    S_vv1 *v1;
    S_vv5 *v5;
    o->f22 &= -3;
    set_fields_8c1e0ef4((void *)(o->f2c));
    if (o->f30 != 0) {
        v1 = (S_vv1 *)o->f30;
        v1->f04 |= 1;
        o->f30 = (Arg0_30 *)0;
    }
    if (o->f34 != 0) {
        v5 = (S_vv5 *)o->f34;
        v5->f04 |= 1;
        o->f34 = (Arg0_34 *)0;
    }
    if (o->f28 != 0) {
        request_resource_release((void *)(o->f28));
        o->f28 = (Arg0_28 *)0;
        o->f24->f3c = 363.0f;
        call_8c0dc854((Arg0_24 *)(o->f24));
    }
    call_8c1dccb4(o);
}
