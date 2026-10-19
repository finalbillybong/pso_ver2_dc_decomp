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
typedef struct Arg0_38_24 Arg0_38_24;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv10_88 S_vv10_88;
struct Object {
    char unknown0[0x20];
    unsigned char f20;
    unsigned char f21;
    char f22;
    char f23;
    char unknown24[0x4];
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
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv10 {
    char unknown0[0x88];
    S_vv10_88 *f88;
};
struct Arg0_38 {
    char unknown0[0x24];
    Arg0_38_24 *f24;
};
struct Arg0_38_24 {
    char unknown0[0x6a];
    short f6a;
};
struct Arg0_34 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void operation_8c19a044(void *, int);
extern void operation_8c1e5820(void *);
extern int operation_8c1dc5d8(void *);
extern void operation_8c1e5884(void *, int);
extern int allocate_block(void *, unsigned int);
extern void operation_8c051a98(void *, int, int, int, unsigned char);
extern void operation_8c051d5c(void *, float, float);
extern void operation_8c051df8(void *, float);
extern void operation_8c051d50(void *, void *);
extern void operation_8c1dc4b8(void *, int, int);
extern int operation_8c051d04(void *);
extern int operation_8c051cf0(void *);
extern void call_8c18de08(void *);
extern int operation_8c051d18(void *);
extern void call_8c2069b4(void *, void *);
extern int operation_8c257e2c(int);
extern void call_8c12b154(void *, void *, int);
extern int call_8c1e56f8(Object *);
extern int operation_8c1571f4(void *);
extern int operation_8c1e5918(char);
extern void operation_8c1e5854(void *);
extern int call_8c1e5780(Object *);
extern int operation_8c1e5928(char);
void operation_8c1e5240(Object *o)
{
    S_vv1 *v1;
    S_vv10 *v10;
    int v24;
    int v25;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    switch ((unsigned char)o->f20) {
    case 0:
    case 1:
        if (o->f38 != 0) {
            v1 = (S_vv1 *)o->f38;
            v1->f04 |= 1;
            o->f38 = (Arg0_38 *)0;
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        v10 = (S_vv10 *)o->f30;
        o->f30->f80 = (o->f30->f80 & 0xffff) & -3;
        if (v10->f88 != 0) {
            operation_8c19a044((void *)(v10->f88), 1);
        }
        operation_8c1e5820((void *)o);
        o->f20 = 2;
    case 2:
        if (((o->f30->f80 & 0xffff & 4)) != 0) {
            o->f21 |= 2;
            o->f20 = 0xb;
            return;
        }
        if (((o->f30->f80 & 0xffff & 2)) == 0) {
            return;
        }
        t1 = operation_8c1dc5d8((void *)(o->f30));
        operation_8c1e5884((void *)o, t1);
        return;
    case 3:
        t2 = allocate_block(g_8c4d97e0, (unsigned int)0x30);
        if (t2 != 0) {
            operation_8c051a98((void *)t2, (int)o, 0xe, 0, (unsigned char)2);
        }
        o->f38 = (Arg0_38 *)t2;
        operation_8c051d5c((void *)(o->f38), 356.0f, 65.0f);
        operation_8c051df8((void *)(o->f38), -11500.0f);
        if (o->f38->f24 != 0) {
            o->f38->f24->f6a |= 4;
        }
        operation_8c051d50((void *)(o->f38), (void *)(o->f28));
        operation_8c1dc4b8((void *)(o->f30), 0, 0);
        o->f20 = 4;
    case 4:
        t3 = operation_8c051d04((void *)(o->f38));
        if (t3 != 0) {
            operation_8c1dc4b8((void *)(o->f30), (int)(o->f28), 0);
            o->f20 = 1;
        }
        t4 = operation_8c051cf0((void *)(o->f38));
        if (t4 == 0) {
            return;
        }
        call_8c18de08((void *)(o->f28));
        t5 = operation_8c051d18((void *)(o->f38));
        o->f28 = (Arg0_28 *)t5;
        call_8c2069b4((void *)(o->f28), (void *)((void *)0x8c4dbe40));
        t6 = operation_8c257e2c((int)(o->f28));
        call_8c12b154((void *)(o->f28), (void *)((void *)0x8c4dbe40), t6);
        operation_8c1dc4b8((void *)(o->f30), (int)(o->f28), 0);
        o->f20 = 1;
        return;
    case 5:
        t7 = allocate_block(g_8c4d97e0, (unsigned int)0x30);
        if (t7 != 0) {
            operation_8c051a98((void *)t7, (int)o, 0x10, 0, (unsigned char)0);
        }
        o->f38 = (Arg0_38 *)t7;
        operation_8c051d5c((void *)(o->f38), 356.0f, 85.0f);
        operation_8c051df8((void *)(o->f38), -11500.0f);
        operation_8c051d50((void *)(o->f38), (void *)(o->f2c));
        operation_8c1dc4b8((void *)(o->f30), 0, 1);
        o->f20 = 6;
    case 6:
        t8 = operation_8c051d04((void *)(o->f38));
        if (t8 != 0) {
            operation_8c1dc4b8((void *)(o->f30), (int)(o->f2c), 1);
            o->f20 = 1;
        }
        t9 = operation_8c051cf0((void *)(o->f38));
        if (t9 == 0) {
            return;
        }
        call_8c18de08((void *)(o->f2c));
        t10 = operation_8c051d18((void *)(o->f38));
        o->f2c = (Arg0_2c *)t10;
        call_8c2069b4((void *)(o->f2c), (void *)((void *)0x8c4dbe40));
        t11 = operation_8c257e2c((int)(o->f2c));
        call_8c12b154((void *)(o->f2c), (void *)((void *)0x8c4dbe40), t11);
        operation_8c1dc4b8((void *)(o->f30), (int)(o->f2c), 1);
        o->f20 = 1;
        return;
    case 7:
        t12 = call_8c1e56f8(o);
        o->f34 = (Arg0_34 *)t12;
        v24 = (int)8;
        o->f20 = v24;
    case 8:
        if (((o->f34->f80 & 0xffff & 4)) != 0) {
            o->f20 = 1;
            return;
        }
        if (((o->f34->f80 & 0xffff & 2)) == 0) {
            return;
        }
        t13 = operation_8c1571f4((void *)(o->f34));
        o->f22 = t13;
        t14 = operation_8c1e5918(o->f22);
        operation_8c1dc4b8((void *)(o->f30), t14, 2);
        operation_8c1e5854((void *)o);
        o->f20 = 1;
        return;
    case 9:
        t15 = call_8c1e5780(o);
        o->f34 = (Arg0_34 *)t15;
        v25 = (int)0xa;
        o->f20 = v25;
    case 10:
        if (((o->f34->f80 & 0xffff & 4)) != 0) {
            o->f20 = 1;
            return;
        }
        if (((o->f34->f80 & 0xffff & 2)) != 0) {
            t16 = operation_8c1571f4((void *)(o->f34));
            o->f23 = t16;
            t17 = operation_8c1e5928(o->f23);
            operation_8c1dc4b8((void *)(o->f30), t17, 3);
            o->f20 = 1;
        }
        return;
    case 11:
        break;
    }
}
