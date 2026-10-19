typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct S_vv12 S_vv12;
typedef struct S_vv12_98 S_vv12_98;
typedef struct S_vv21 S_vv21;
typedef struct S_vv21_98 S_vv21_98;
struct Object {
    char unknown0[0x20];
    unsigned char f20;
    char unknown21[0x3];
    Arg0_24 *f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    char unknown30[0x4];
    short f34;
};
struct Arg0_28 {
    char unknown0[0x80];
    unsigned short f80;
};
struct Arg0_24 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv12 {
    char unknown0[0x98];
    S_vv12_98 *f98;
};
struct S_vv21 {
    char unknown0[0x98];
    S_vv21_98 *f98;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_g8c4dbde0 *g_8c4dbde0;
extern S_L8c41cba0 g_8c41cba0;
extern void request_resource_release(void *);
extern int operation_8c1571f4(void *);
extern int operation_8c1a8cd4(Object *, int);
extern void call_8c1a8ec0(void *, void *);
extern void operation_8c19a044(void *, int);
extern int operation_8c1a8f58(void *);
extern int operation_8c1a8ecc(void *, void *);
extern void call_8c1a8d24(Object *, Arg0_28 *, int);
extern void operation_8c1571d4(void *, int);
extern void call_8c18c808(void *);
extern int call_8c1196d4(void *, void *, int);
extern void operation_8c1ecf70(int);
extern void call_8c1a8adc(Object *, int);
extern int operation_8c1a8e4c(int);
extern int operation_8c1ecee4(int);
void operation_8c1a882c(Object *o)
{
    int v1;
    S_vv12 *v12;
    S_vv21 *v21;
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
    switch ((unsigned char)o->f20) {
    case 0:
    case 1:
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
            v1 = (int)0x13;
            o->f34 = v1;
        }
        if (o->f28 == 0) {
            t1 = operation_8c1571f4((void *)(o->f24));
            t2 = operation_8c1a8cd4(o, t1);
            o->f28 = (Arg0_28 *)t2;
        }
        o->f28->f80 = (o->f28->f80 & 0xffff) | 0x40;
        o->f28->f80 = (o->f28->f80 & 0xffff) | 0x80;
        call_8c1a8ec0((void *)(((char *)o + 0x36)), (void *)(((char *)o + 0x38)));
        v12 = (S_vv12 *)o->f24;
        o->f24->f80 = (o->f24->f80 & 0xffff) & -3;
        if (v12->f98 != 0) {
            operation_8c19a044((void *)(v12->f98), 1);
        }
        o->f20 = 2;
    case 2:
        t3 = operation_8c1a8f58((void *)o);
        if (t3 != 1) {
            t4 = operation_8c1a8ecc((void *)(((char *)o + 0x36)), (void *)(((char *)o + 0x38)));
            if (t4 == 0) {
                goto L_8c1a8926;
            }
        }
        t5 = operation_8c1571f4((void *)(o->f24));
        call_8c1a8d24(o, (Arg0_28 *)(o->f28), t5);
        if (t3 != 0) {
            operation_8c1571d4((void *)(o->f28), 0);
        }
L_8c1a8926:;
        if (((o->f24->f80 & 0xffff & 4)) != 0) {
            call_8c18c808(g_8c4dbde0);
            o->f20 = 6;
            return;
        }
        if (((o->f24->f80 & 0xffff & 2)) == 0) {
            return;
        }
        o->f20 = 3;
        return;
    case 3:
        t6 = call_8c1196d4((void *)((void *)0x8c288ca0), (void *)((void *)0x8c288ca8), 1);
        o->f2c = (Arg0_2c *)t6;
        o->f28->f80 = (o->f28->f80 & 0xffff) & -0x41;
        o->f28->f80 = (o->f28->f80 & 0xffff) & -0x81;
        v21 = (S_vv21 *)o->f28;
        o->f28->f80 = (o->f28->f80 & 0xffff) & -3;
        if (v21->f98 != 0) {
            operation_8c19a044((void *)(v21->f98), 1);
        }
        o->f28->f80 = (o->f28->f80 & 0xffff) & -5;
        o->f20 = 4;
    case 4:
        t7 = operation_8c1571f4((void *)(o->f28));
        operation_8c1ecf70(t7);
        t8 = operation_8c1a8ecc((void *)(((char *)o + 0x36)), (void *)(((char *)o + 0x38)));
        if (t8 != 0) {
            t9 = operation_8c1571f4((void *)(o->f24));
            call_8c1a8d24(o, (Arg0_28 *)(o->f28), t9);
        }
        t10 = operation_8c1571f4((void *)(o->f28));
        call_8c1a8adc(o, t10);
        if (((o->f28->f80 & 0xffff & 4)) != 0) {
            o->f20 = 1;
        }
        if (((o->f28->f80 & 0xffff & 2)) == 0) {
            return;
        }
        o->f20 = 5;
        return;
    case 5:
        t11 = operation_8c1571f4((void *)(o->f28));
        operation_8c1ecf70(t11);
        t12 = operation_8c1571f4((void *)(o->f28));
        t13 = operation_8c1a8e4c(t12);
        if (t13 != 0) {
            if ((((&g_8c41cba0)->f28 & 2)) == 0) {
                goto L_8c1a8a5e;
            }
        }
        t14 = operation_8c1571f4((void *)(o->f24));
        call_8c1a8d24(o, (Arg0_28 *)(o->f28), t14);
        o->f20 = 1;
        return;
L_8c1a8a5e:;
        t15 = operation_8c1571f4((void *)(o->f28));
        t16 = operation_8c1ecee4(t15);
        if (t16 != 0) {
            o->f20 = 1;
        }
        return;
    case 6:
        break;
    }
}
