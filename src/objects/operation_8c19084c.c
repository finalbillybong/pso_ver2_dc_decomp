typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_3c_70 Arg0_3c_70;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg0_44 Arg0_44;
typedef struct Arg0_48 Arg0_48;
typedef struct S_vv11 S_vv11;
typedef struct S_vv21 S_vv21;
typedef struct S_vv21_98 S_vv21_98;
typedef struct S_vv27 S_vv27;
typedef struct S_vv27_90 S_vv27_90;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_90 S_vv8_90;
struct Object {
    char unknown0[0x20];
    unsigned char f20;
    char f21;
    char f22;
    char unknown23[0x1];
    short f24;
    char unknown26[0x6];
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
    Arg0_38 *f38;
    Arg0_3c *f3c;
    Arg0_40 *f40;
    Arg0_44 *f44;
    Arg0_48 *f48;
};
struct Arg0_3c {
    char unknown0[0x68];
    unsigned char f68;
    char unknown69[0x7];
    Arg0_3c_70 *f70;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv8 {
    char unknown0[0x90];
    S_vv8_90 *f90;
};
struct S_vv11 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_38 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv21 {
    char unknown0[0x98];
    S_vv21_98 *f98;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Arg0_34 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv27 {
    char unknown0[0x90];
    S_vv27_90 *f90;
};
struct Arg0_44 {
    char unknown0[0x68];
    char f68;
};
struct S_c8c021ef8 {
    char unknown0[0x350];
    int f350;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dbde0 *g_8c4dbde0;
extern S_L8c41cba0 g_8c41cba0;
extern S_c8c021ef8 *lookup_low_id(int);
extern void request_resource_release(void *);
extern int allocate_block(void *, unsigned int);
extern void operation_8c1d5b24(void *);
extern int call_8c22cc78(void *, void *);
extern void operation_8c0dc610(void *, float);
extern void operation_8c1d5530(int, int);
extern void operation_8c19a044(void *, int);
extern void call_8c1cd35c(Arg0_30 *, float);
extern void operation_8c191428(void *);
extern void operation_8c22cd48(void *, void *);
extern void call_8c18c808(void *);
extern int operation_8c1cdc80(void *);
extern int call_8c190f60(Object *, int);
extern int operation_8c1571f4(void *);
extern void call_8c1912ac(Object *, int);
extern int operation_8c0244c4(void *);
extern void operation_8c1912f0(void *, int, int);
extern void raise_marker_8c1cd2f4(void *);
extern void operation_8c1d5dd0(void *, int);
extern int operation_8c190f00(Object *);
extern int call_8c1913d8(Object *);
extern void operation_8c024260(void *, int, int);
extern void operation_8c1d7490(void *);
extern int call_8c1d7184(Arg0_3c *);
extern int operation_8c1d7454(void *);
extern int call_8c1d7324(Arg0_3c *);
extern void call_8c05fbf8(int, int, int, int);
extern int call_8c19117c(Object *);
extern void operation_8c230538(void *, int);
extern int operation_8c19113c(Object *);
extern void operation_8c191454(void *);
void operation_8c19084c(Object *o)
{
    S_vv8 *v8;
    S_vv11 *v11;
    S_vv21 *v21;
    S_vv27 *v27;
    short v32;
    short v36;
    int v41;
    int v42;
    S_c8c021ef8 *t1;
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
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        return;
    }
    switch ((unsigned char)o->f20) {
    case 0:
    case 1:
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
            o->f38 = (Arg0_38 *)0;
        }
        if (o->f3c == 0) {
            t2 = allocate_block(g_8c4d97e0, (unsigned int)0xb8);
            if (t2 != 0) {
                operation_8c1d5b24((void *)t2);
            }
            o->f3c = (Arg0_3c *)t2;
        }
        if (o->f40 == 0) {
            t3 = call_8c22cc78((void *)((void *)0x8c2876b0), (void *)((void *)0x8c2876b8));
            o->f40 = (Arg0_40 *)t3;
            operation_8c0dc610((void *)(o->f40), 200.0f);
        }
        o->f3c->f68 &= -5;
        operation_8c1d5530((int)(o->f30), 2);
        v8 = (S_vv8 *)o->f30;
        o->f30->f80 = (o->f30->f80 & 0xffff) & -3;
        if (v8->f90 != 0) {
            operation_8c19a044((void *)(v8->f90), 1);
        }
        call_8c1cd35c((Arg0_30 *)(o->f30), 188.0f);
        o->f20 = 2;
    case 2:
        operation_8c191428((void *)o);
        o->f2c = (Arg0_2c *)o->f3c->f70;
        operation_8c22cd48((void *)(o->f40), (void *)(o->f3c->f70));
        if (((o->f30->f80 & 0xffff & 4)) != 0) {
            call_8c18c808(g_8c4dbde0);
            o->f20 = 0x12;
            return;
        }
        if (((o->f30->f80 & 0xffff & 2)) == 0) {
            return;
        }
        o->f20 = 3;
        return;
    case 3:
        if (o->f48 != 0) {
            v11 = (S_vv11 *)o->f48;
            v11->f04 |= 1;
            o->f48 = (Arg0_48 *)0;
        }
        if (o->f44 != 0) {
            request_resource_release((void *)(o->f44));
            o->f44 = (Arg0_44 *)0;
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        o->f3c->f68 &= -5;
        call_8c1cd35c((Arg0_30 *)(o->f30), 188.0f);
        if (o->f38 == 0) {
            t4 = operation_8c1cdc80((void *)(o->f30));
            t5 = call_8c190f60(o, t4);
            o->f38 = (Arg0_38 *)t5;
        }
        v21 = (S_vv21 *)o->f38;
        o->f38->f80 = (o->f38->f80 & 0xffff) & -3;
        if (v21->f98 != 0) {
            operation_8c19a044((void *)(v21->f98), 1);
        }
        o->f20 = 4;
    case 4:
        if (((o->f38->f80 & 0xffff & 4)) != 0) {
            o->f20 = 1;
            return;
        }
        if (((o->f38->f80 & 0xffff & 2)) == 0) {
            return;
        }
        t6 = operation_8c1571f4((void *)(o->f38));
        call_8c1912ac(o, t6);
        return;
    case 5:
        if ((((&g_8c41cba0)->f28 & 2)) != 0) {
            o->f20 = 3;
            return;
        }
        t7 = operation_8c0244c4((void *)t1);
        if (t7 == 0) {
            return;
        }
        t8 = operation_8c1cdc80((void *)(o->f30));
        t9 = operation_8c1571f4((void *)(o->f38));
        operation_8c1912f0((void *)o, t8, t9);
        return;
    case 6:
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
            o->f38 = (Arg0_38 *)0;
        }
        raise_marker_8c1cd2f4((void *)(o->f30));
        operation_8c1d5dd0((void *)(o->f3c), 1);
        o->f3c->f68 |= 4;
        if (o->f34 == 0) {
            t10 = operation_8c190f00(o);
            o->f34 = (Arg0_34 *)t10;
        }
        v27 = (S_vv27 *)o->f34;
        o->f34->f80 = (o->f34->f80 & 0xffff) & -3;
        if (v27->f90 != 0) {
            operation_8c19a044((void *)(v27->f90), 1);
        }
        o->f20 = 7;
    case 7:
        if (((o->f34->f80 & 0xffff & 4)) != 0) {
            o->f20 = 3;
            return;
        }
        if (((o->f34->f80 & 0xffff & 2)) == 0) {
            return;
        }
        o->f20 = 8;
        return;
    case 8:
        if ((((&g_8c41cba0)->f28 & 2)) != 0) {
            o->f20 = 6;
            return;
        }
        t11 = operation_8c0244c4((void *)t1);
        if (t11 == 0) {
            return;
        }
        t12 = call_8c1913d8(o);
        o->f22 = t12;
        t13 = operation_8c1cdc80((void *)(o->f30));
        t14 = operation_8c1cdc80((void *)(o->f34));
        operation_8c024260((void *)t1, t13, t14);
        o->f20 = 9;
        return;
    case 9:
        operation_8c1d7490((void *)(o->f3c));
        operation_8c1d5530((int)(o->f30), 2);
        operation_8c22cd48((void *)(o->f40), (void *)(o->f3c->f70));
        t15 = call_8c1d7184((Arg0_3c *)(o->f3c));
        if (t15 != 0) {
            o->f20 = 0xa;
        } else {
            o->f20 = 3;
        }
        return;
    case 10:
        t16 = operation_8c1d7454((void *)(o->f3c));
        if (t16 == 0) {
            return;
        }
        o->f20 = 0xb;
        return;
    case 11:
        t17 = call_8c1d7324((Arg0_3c *)(o->f3c));
        if (t17 != 0) {
            call_8c05fbf8(0x2000f, 0, 0, 0);
            o->f24 = 0;
            o->f20 = 0xc;
        } else {
            o->f20 = 0xd;
            return;
        }
    case 12:
        v32 = (short)o->f24;
        o->f24 = v32 + 1;
        if (!((float)(short)v32 > 30.0f)) {
            return;
        }
        t18 = operation_8c1d7454((void *)(o->f3c));
        if (t18 == 0) {
            return;
        }
        o->f20 = 0xb;
        return;
    case 13:
        t19 = call_8c1913d8(o);
        if (o->f22 != t19) {
            o->f24 = 0;
            operation_8c1d5dd0((void *)(o->f3c), 2);
            t20 = call_8c19117c(o);
            o->f48 = (Arg0_48 *)t20;
            o->f20 = 0xe;
        } else {
            o->f20 = 3;
            return;
        }
    case 14:
        v36 = (short)o->f24;
        o->f24 = v36 + 1;
        if (!((float)(short)v36 > 90.0f)) {
            return;
        }
        if (o->f48 == 0) {
            return;
        }
        request_resource_release((void *)(o->f48));
        o->f48 = (Arg0_48 *)0;
        o->f20 = 3;
        return;
    case 15:
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
            o->f38 = (Arg0_38 *)0;
        }
        t21 = allocate_block(g_8c4d97e0, (unsigned int)0x7c);
        if (t21 != 0) {
            operation_8c230538((void *)t21, (int)(o->f2c));
        }
        o->f44 = (Arg0_44 *)t21;
        t22 = operation_8c19113c(o);
        o->f48 = (Arg0_48 *)t22;
        v41 = (int)-1;
        o->f21 = v41;
        v42 = (int)0x10;
        o->f20 = v42;
    case 16:
        operation_8c191454((void *)o);
        if (((o->f44->f68 & 2)) != 0) {
            o->f20 = 3;
            return;
        }
        if (((o->f44->f68 & 1)) == 0) {
            return;
        }
        o->f20 = 3;
        return;
    case 17:
        if (((t1->f350 & 2)) == 0) {
            o->f20 = 1;
        }
        return;
    case 18:
        break;
    }
}
