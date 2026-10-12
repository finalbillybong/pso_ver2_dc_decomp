typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x22];
    unsigned short f22;
    Arg0_24 *f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
};
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct Arg0_30 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_34 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_24 {
    char unknown0[0x3c];
    float f3c;
};
struct Arg0_2c {
    char unknown0[0x68];
    int f68;
};
extern void call_8c1dccb4(Object *);
extern int lookup_low_id(int);
extern void operation_8c0264ac(void);
extern void call_8c1e22ec(void *);
extern void set_fields_8c1e0ef4(void *);
extern void request_resource_release(void *);
extern void call_8c0dc854(Arg0_24 *);
void operation_8c1dd318(Object *o)
{
    int v41;
    int t1;
    if (((o->f22 & 1)) == 0) {
        o->f22 |= 1;
        if (((o->f22 & 0x10)) != 0) {
            o->f22 &= -0x11;
            call_8c1dccb4(o);
        }
        if (((o->f22 & 0x20)) != 0) {
            o->f22 &= -0x21;
            call_8c1dccb4(o);
        }
        t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        if (t1 != 0 && ((o->f22 & 2)) == 0 && ((o->f22 & 0x40)) != 0) {
            if (*(int *)0x8c4dbde0 == 0) {
                v41 = (int)0;
            } else {
                v41 = (int)((*(S_g8c4dbde0 **)0x8c4dbde0)->f20 & 1);
            }
            if (v41 == 0) {
                operation_8c0264ac();
            }
            if (*(int *)0x8c46fe20 != 0) {
                (*(S_g8c46fe20 **)0x8c46fe20)->f20 &= -0x21;
            }
        }
        call_8c1e22ec((void *)(o->f24));
        set_fields_8c1e0ef4((void *)(o->f2c));
        if (o->f30 != 0) {
            o->f30->f04 |= 1;
            o->f30 = (Arg0_30 *)0;
        }
        if (o->f34 != 0) {
            o->f34->f04 |= 1;
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (Arg0_28 *)0;
            o->f24->f3c = 363.0f;
            call_8c0dc854((Arg0_24 *)(o->f24));
        }
        o->f2c->f68 |= 0x200;
    }
}
