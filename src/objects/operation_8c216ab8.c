typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1dc6e4 S_c8c1dc6e4;
typedef struct S_c8c20a5d0 S_c8c20a5d0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg0_44 Arg0_44;
typedef struct Arg0_44_24 Arg0_44_24;
typedef struct Arg0_4c Arg0_4c;
typedef struct Arg0_54 Arg0_54;
typedef struct S_vv10 S_vv10;
typedef struct S_vv29 S_vv29;
typedef struct S_vv29_98 S_vv29_98;
typedef struct S_vv47 S_vv47;
typedef struct S_vv47_98 S_vv47_98;
typedef struct S_vv62 S_vv62;
typedef struct S_vv73 S_vv73;
typedef struct S_vv73_90 S_vv73_90;
typedef struct S_vv98 S_vv98;
typedef struct S_vv98_98 S_vv98_98;
struct Object {
    char unknown0[0x20];
    unsigned char f20;
    char unknown21[0x3];
    Arg0_24 *f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
    Arg0_38 *f38;
    Arg0_3c *f3c;
    Arg0_40 *f40;
    Arg0_44 *f44;
    char unknown48[0x4];
    Arg0_4c *f4c;
    int f50;
    Arg0_54 *f54;
};
struct S_vv10 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_2c {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv29 {
    char unknown0[0x98];
    S_vv29_98 *f98;
};
struct Arg0_3c {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv47 {
    char unknown0[0x98];
    S_vv47_98 *f98;
};
struct S_c8c1dc6e4 {
    char unknown0[0x4];
    int f04;
};
struct S_vv62 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_24 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv73 {
    char unknown0[0x90];
    S_vv73_90 *f90;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv98 {
    char unknown0[0x98];
    S_vv98_98 *f98;
};
struct S_c8c20a5d0 {
    int f00;
};
struct Arg0_44 {
    char unknown0[0x24];
    Arg0_44_24 *f24;
};
struct Arg0_44_24 {
    char unknown0[0x68];
    short f68;
};
struct Arg0_38 {
    char unknown0[0x80];
    unsigned short f80;
};
extern unsigned short g_8c46fe24;
extern S_g8c4dbde0 *g_8c4dbde0;
extern void request_resource_release(void *);
extern int operation_8c217328(Object *);
extern void operation_8c19a044(void *, int);
extern void call_8c18c808(void *);
extern int operation_8c1571f4(void *);
extern int create_default_configured_object(void);
extern int operation_8c1d45a0(int);
extern void operation_8c1d43fc(int, int, void *);
extern S_c8c1dc6e4 *operation_8c1dc6e4(int);
extern int operation_8c2171c8(Object *);
extern void operation_8c1cdb8c(void *, int);
extern int call_8c21721c(Object *, Arg0_24 *);
extern void operation_8c2176d8(void *);
extern int call_8c2173f0(Object *);
extern void call_8c156ec0(Arg0_30 *);
extern int operation_8c1cdc80(void *);
extern S_c8c20a5d0 *operation_8c20a5d0(int);
extern int operation_8c21749c(void);
extern void operation_8c051dcc(void *, float, float);
extern void operation_8c051e18(void *);
extern int operation_8c051d04(void *);
extern int operation_8c051cf0(void *);
extern void operation_8c051e60(void *);
extern int create_single_entry_menu_8c217530(void);
extern int operation_8c2175b4(void);
extern void operation_8c217728(void *);
extern void operation_8c2177c0(void *);
extern void call_8c156e58(Arg0_30 *);
extern int create_single_entry_menu_8c217604(Object *);
extern int operation_8c217688(Object *);
extern void operation_8c20a4cc(int);
void operation_8c216ab8(Object *o)
{
    S_vv10 *v10;
    S_vv29 *v29;
    S_vv47 *v47;
    S_vv62 *v62;
    S_vv73 *v73;
    S_vv98 *v98;
    int v147;
    int v148;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    S_c8c1dc6e4 *t7;
    int t8;
    int t9;
    int t10;
    int t11;
    S_c8c20a5d0 *t12;
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
    int t23;
    int t24;
    switch ((unsigned char)o->f20) {
    case 0:
    case 1:
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
            o->f38 = (Arg0_38 *)0;
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f44 != 0) {
            v10 = (S_vv10 *)o->f44;
            v10->f04 |= 1;
            o->f44 = (Arg0_44 *)0;
        }
        if (o->f24 != 0) {
            request_resource_release((void *)(o->f24));
            o->f24 = (Arg0_24 *)0;
        }
        if (o->f40 != 0) {
            request_resource_release((void *)(o->f40));
            o->f40 = (Arg0_40 *)0;
        }
        if (o->f3c != 0) {
            request_resource_release((void *)(o->f3c));
            o->f3c = (Arg0_3c *)0;
        }
        if (o->f2c == 0) {
            t1 = operation_8c217328(o);
            o->f2c = (Arg0_2c *)t1;
        }
        v29 = (S_vv29 *)o->f2c;
        o->f2c->f80 = (o->f2c->f80 & 0xffff) & -3;
        if (v29->f98 != 0) {
            operation_8c19a044((void *)(v29->f98), 1);
        }
        o->f20 = 2;
    case 2:
        if (((o->f2c->f80 & 0xffff & 4)) != 0) {
            call_8c18c808(g_8c4dbde0);
            o->f20 = 0x13;
            return;
        }
        if (((o->f2c->f80 & 0xffff & 2)) == 0) {
            return;
        }
        t2 = operation_8c1571f4((void *)(o->f2c));
        o->f20 = t2;
        return;
    case 3:
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        if (o->f3c == 0) {
            t3 = create_default_configured_object();
            o->f3c = (Arg0_3c *)t3;
        }
        if (o->f40 == 0) {
            t4 = operation_8c1571f4((void *)(o->f3c));
            o->f4c = (Arg0_4c *)t4;
            t5 = operation_8c1d45a0((int)(o->f4c));
            o->f40 = (Arg0_40 *)t5;
        }
        v47 = (S_vv47 *)o->f3c;
        o->f3c->f80 = (o->f3c->f80 & 0xffff) & -3;
        if (v47->f98 != 0) {
            operation_8c19a044((void *)(v47->f98), 1);
        }
        o->f20 = 4;
    case 4:
        operation_8c1d43fc((int)(o->f3c), (int)(o->f40), (void *)(&o->f4c));
        if (((o->f3c->f80 & 0xffff & 4)) != 0) {
            o->f20 = 1;
            return;
        }
        if (((o->f3c->f80 & 0xffff & 2)) == 0) {
            return;
        }
        o->f54 = (Arg0_54 *)-1;
        t6 = operation_8c1571f4((void *)(o->f3c));
        t7 = operation_8c1dc6e4(t6);
        if (t7 != 0) {
            o->f50 = (int)(t7->f04);
        }
        o->f20 = 0xb;
        return;
    case 7:
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
            o->f38 = (Arg0_38 *)0;
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f44 != 0) {
            v62 = (S_vv62 *)o->f44;
            v62->f04 |= 1;
            o->f44 = (Arg0_44 *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        if (o->f24 == 0) {
            t8 = operation_8c2171c8(o);
            o->f24 = (Arg0_24 *)t8;
            operation_8c1cdb8c((void *)(o->f24), -1);
        }
        call_8c21721c(o, (Arg0_24 *)(o->f24));
        v73 = (S_vv73 *)o->f24;
        o->f24->f80 = (o->f24->f80 & 0xffff) & -3;
        if (v73->f90 != 0) {
            operation_8c19a044((void *)(v73->f90), 1);
        }
        o->f20 = 8;
    case 8:
        if (((g_8c46fe24 & 1)) != 0) {
            call_8c21721c(o, (Arg0_24 *)(o->f24));
        }
        operation_8c2176d8((void *)o);
        if (((o->f24->f80 & 0xffff & 4)) != 0) {
            call_8c18c808(g_8c4dbde0);
            o->f20 = 0x13;
            return;
        }
        if (((o->f24->f80 & 0xffff & 2)) == 0) {
            return;
        }
        o->f20 = 9;
        return;
    case 9:
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
            o->f38 = (Arg0_38 *)0;
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (Arg0_28 *)0;
        }
        if (o->f30 == 0) {
            t9 = call_8c2173f0(o);
            o->f30 = (Arg0_30 *)t9;
        }
        v98 = (S_vv98 *)o->f30;
        o->f30->f80 = (o->f30->f80 & 0xffff) & -3;
        if (v98->f98 != 0) {
            operation_8c19a044((void *)(v98->f98), 1);
        }
        call_8c156ec0((Arg0_30 *)(o->f30));
        o->f20 = 0xa;
    case 10:
        if (((g_8c46fe24 & 1)) != 0) {
            t10 = call_8c21721c(o, (Arg0_24 *)(o->f24));
            if (t10 == 0) {
                o->f20 = 7;
                return;
            }
        }
        if (((o->f30->f80 & 0xffff & 4)) != 0) {
            o->f20 = 7;
            return;
        }
        if (((o->f30->f80 & 0xffff & 2)) == 0) {
            return;
        }
        t11 = operation_8c1cdc80((void *)(o->f24));
        o->f54 = (Arg0_54 *)t11;
        t12 = operation_8c20a5d0((int)(o->f54));
        if (t12 != 0) {
            o->f50 = (int)(t12->f00);
        }
        t13 = operation_8c1571f4((void *)(o->f30));
        o->f20 = t13;
        return;
    case 11:
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
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
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (Arg0_28 *)0;
        }
        if (o->f24 != 0) {
            request_resource_release((void *)(o->f24));
            o->f24 = (Arg0_24 *)0;
        }
        if (o->f40 != 0) {
            request_resource_release((void *)(o->f40));
            o->f40 = (Arg0_40 *)0;
        }
        if (o->f3c != 0) {
            request_resource_release((void *)(o->f3c));
            o->f3c = (Arg0_3c *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
        }
        if (o->f44 == 0) {
            t14 = operation_8c21749c();
            o->f44 = (Arg0_44 *)t14;
        }
        operation_8c051dcc((void *)(o->f44), 357.0f, 269.0f);
        if (o->f44->f24 != 0) {
            o->f44->f24->f68 = (unsigned int)o->f44->f24->f68 >> 1 << 1;
        }
        operation_8c051e18((void *)(o->f44));
        o->f20 = 0xc;
    case 12:
        t15 = operation_8c051d04((void *)(o->f44));
        if (t15 != 0) {
            o->f20 = 1;
            return;
        }
        t16 = operation_8c051cf0((void *)(o->f44));
        if (t16 == 0) {
            return;
        }
        o->f20 = 0xd;
        return;
    case 13:
        operation_8c051dcc((void *)(o->f44), 17.0f, 269.0f);
        operation_8c051e60((void *)(o->f44));
        t17 = create_single_entry_menu_8c217530();
        o->f34 = (Arg0_34 *)t17;
        t18 = operation_8c2175b4();
        o->f38 = (Arg0_38 *)t18;
        v147 = (int)0xe;
        o->f20 = v147;
    case 14:
        if (((o->f38->f80 & 0xffff & 4)) != 0) {
            o->f20 = 0xb;
            return;
        }
        if (((o->f38->f80 & 0xffff & 2)) == 0) {
            return;
        }
        t19 = operation_8c1571f4((void *)(o->f38));
        if (t19 == 0) {
            operation_8c217728((void *)o);
            o->f20 = 1;
            return;
        }
        o->f20 = 0xb;
        return;
    case 15:
        operation_8c2177c0((void *)o);
        o->f20 = 0x10;
    case 16:
        o->f20 = 1;
        return;
    case 17:
        call_8c156e58((Arg0_30 *)(o->f30));
        t20 = create_single_entry_menu_8c217604(o);
        o->f34 = (Arg0_34 *)t20;
        t21 = operation_8c217688(o);
        o->f38 = (Arg0_38 *)t21;
        v148 = (int)0x12;
        o->f20 = v148;
    case 18:
        if (((g_8c46fe24 & 1)) != 0) {
            t22 = call_8c21721c(o, (Arg0_24 *)(o->f24));
            if (t22 == 0) {
                o->f20 = 7;
                return;
            }
        }
        if (((o->f38->f80 & 0xffff & 4)) != 0) {
            o->f20 = 9;
            return;
        }
        if (((o->f38->f80 & 0xffff & 2)) != 0) {
            t23 = operation_8c1571f4((void *)(o->f38));
            if (t23 == 0) {
                t24 = operation_8c1cdc80((void *)(o->f24));
                operation_8c20a4cc(t24);
                o->f20 = 7;
                return;
            }
            o->f20 = 9;
        }
        return;
    case 5:
    case 6:
    case 19:
        break;
    }
}
