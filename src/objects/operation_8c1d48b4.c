typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_90 S_vv11_90;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_90 S_vv6_90;
struct Object {
    char unknown0[0x20];
    unsigned char f20;
    char unknown21[0x3];
    int f24;
    int f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv6 {
    char unknown0[0x90];
    S_vv6_90 *f90;
};
struct Arg0_34 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv11 {
    char unknown0[0x90];
    S_vv11_90 *f90;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c4dbde0 *g_8c4dbde0;
extern S_L8c41cba0 g_8c41cba0;
extern void request_resource_release(void *);
extern void operation_8c1d5d80(void *);
extern void operation_8c1d4fb4(int);
extern void operation_8c19a044(void *, int);
extern void operation_8c1cd35c(void *, float);
extern void operation_8c1d4c44(void *);
extern void call_8c18c808(void *);
extern void raise_marker_8c1cd2f4(void *);
extern int operation_8c1cdc80(void *);
extern int operation_8c1d4a84(int, int);
extern void operation_8c1d4cb0(void *);
extern int lookup_low_id(int);
extern int operation_8c0244c4(void *);
extern void operation_8c1d4b78(void *);
void operation_8c1d48b4(Object *o)
{
    S_vv6 *v6;
    S_vv11 *v11;
    int t1;
    int t2;
    int t3;
    int t4;
    switch ((unsigned char)o->f20) {
    case 0:
    case 1:
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        operation_8c1d5d80((void *)(o->f2c));
        o->f24 = -1;
        o->f28 = -1;
        operation_8c1d4fb4((int)(o->f30));
        v6 = (S_vv6 *)o->f30;
        o->f30->f80 = (o->f30->f80 & 0xffff) & -3;
        if (v6->f90 != 0) {
            operation_8c19a044((void *)(v6->f90), 1);
        }
        operation_8c1cd35c((void *)(o->f30), 188.0f);
        o->f20 = 2;
    case 2:
        operation_8c1d4c44((void *)o);
        if (((o->f30->f80 & 0xffff & 4)) != 0) {
            call_8c18c808(g_8c4dbde0);
            o->f20 = 6;
            return;
        }
        if (((o->f30->f80 & 0xffff & 2)) == 0) {
            return;
        }
        o->f20 = 3;
        return;
    case 3:
        raise_marker_8c1cd2f4((void *)(o->f30));
        if (o->f34 == 0) {
            t1 = operation_8c1cdc80((void *)(o->f30));
            t2 = operation_8c1d4a84((int)o, t1);
            o->f34 = (Arg0_34 *)t2;
        }
        v11 = (S_vv11 *)o->f34;
        o->f34->f80 = (o->f34->f80 & 0xffff) & -3;
        if (v11->f90 != 0) {
            operation_8c19a044((void *)(v11->f90), 1);
        }
        o->f20 = 4;
    case 4:
        operation_8c1d4cb0((void *)o);
        if (((o->f34->f80 & 0xffff & 4)) != 0) {
            o->f20 = 1;
            return;
        }
        if (((o->f34->f80 & 0xffff & 2)) == 0) {
            return;
        }
        o->f20 = 5;
        return;
    case 5:
        if ((((&g_8c41cba0)->f28 & 2)) != 0) {
            o->f20 = 3;
            return;
        }
        t3 = lookup_low_id((int)g_8c418248);
        if (t3 != 0) {
            t4 = operation_8c0244c4((void *)t3);
            if (t4 != 0) {
                operation_8c1d4b78((void *)o);
                o->f20 = 1;
            }
        }
        return;
    case 6:
        break;
    }
}
