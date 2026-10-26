typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_34_24 Arg0_34_24;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3c Arg0_3c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv26 S_vv26;
typedef struct S_vv26_90 S_vv26_90;
typedef struct S_vv42 S_vv42;
typedef struct S_vv42_98 S_vv42_98;
typedef struct S_vv66 S_vv66;
typedef struct S_vv85 S_vv85;
typedef struct S_vv89 S_vv89;
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
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_24 {
    char unknown0[0x80];
    volatile unsigned short f80;
};
struct S_vv26 {
    char unknown0[0x90];
    S_vv26_90 *f90;
};
struct Arg0_28 {
    char unknown0[0x80];
    volatile unsigned short f80;
};
struct S_vv42 {
    char unknown0[0x98];
    S_vv42_98 *f98;
};
struct Arg0_34 {
    char unknown0[0x22];
    unsigned short f22;
    Arg0_34_24 *f24;
};
struct Arg0_34_24 {
    char unknown0[0x6a];
    short f6a;
};
struct S_vv66 {
    char unknown0[0x4];
    short f04;
};
struct S_vv85 {
    char unknown0[0x80];
    volatile unsigned short f80;
};
struct S_vv89 {
    char unknown0[0x80];
    volatile unsigned short f80;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dbde0 *g_8c4dbde0;
extern void request_resource_release(void *);
extern int operation_8c21a57c(void *);
extern void call_8c21cac8(Arg0_24 *);
extern void operation_8c19a044(void *, int);
extern void call_8c18c808(void *);
extern int call_8c21a590(Object *);
extern void operation_8c156ec0(void *);
extern int operation_8c1571f4(void *);
extern int operation_8c1cdc80(void *);
extern int allocate_block(void *, unsigned int);
extern void operation_8c1dca80(void *, int, int);
extern void operation_8c1dd654(void *);
extern void operation_8c21cbc0(void *, void *, int, int);
extern int create_single_entry_menu_8c21a66c(Object *);
extern int operation_8c21a6f0(Object *);
extern void call_8c21c73c(void *, void *);
extern void operation_8c156e58(void *);
extern int create_single_entry_menu_8c21a734(Object *);
extern int operation_8c21a7b8(Object *);
extern void call_8c21c768(int);
void operation_8c21a16c(Object *o)
{
    S_vv1 *v1;
    S_vv26 *v26;
    int v110;
    int v114;
    S_vv42 *v42;
    int v111;
    int v115;
    unsigned short v65;
    S_vv66 *v66;
    S_vv85 *v85;
    int v112;
    int v116;
    S_vv89 *v89;
    int v113;
    int v117;
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
    switch ((unsigned char)o->f20) {
    case 0:
    case 1:
        if (o->f34 != 0) {
            v1 = (S_vv1 *)o->f34;
            v1->f04 |= 1;
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
        }
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
            o->f38 = (Arg0_38 *)0;
        }
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (Arg0_28 *)0;
        }
        if (o->f24 == 0) {
            t1 = operation_8c21a57c((void *)o);
            o->f24 = (Arg0_24 *)t1;
        }
        call_8c21cac8((Arg0_24 *)(o->f24));
        v26 = (S_vv26 *)o->f24;
        o->f24->f80 = (o->f24->f80 & 0xffff) & -3;
        if (v26->f90 != 0) {
            operation_8c19a044((void *)(v26->f90), 1);
        }
        o->f20 = 2;
    case 2:
        v110 = (int)o->f24->f80;
        v114 = (int)(v110 & 0xffff);
        if (((v114 & 4)) != 0) {
            call_8c18c808(g_8c4dbde0);
            o->f20 = 0xb;
            return;
        }
        if (((v114 & 2)) == 0) {
            return;
        }
        o->f20 = 3;
        return;
    case 3:
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
        }
        if (o->f28 == 0) {
            t2 = call_8c21a590(o);
            o->f28 = (Arg0_28 *)t2;
        }
        v42 = (S_vv42 *)o->f28;
        o->f28->f80 = (o->f28->f80 & 0xffff) & -3;
        if (v42->f98 != 0) {
            operation_8c19a044((void *)(v42->f98), 1);
        }
        operation_8c156ec0((void *)(o->f28));
        o->f20 = 4;
    case 4:
        v111 = (int)o->f28->f80;
        v115 = (int)(v111 & 0xffff);
        if (((v115 & 4)) != 0) {
            o->f20 = 1;
            return;
        }
        if (((v115 & 2)) == 0) {
            return;
        }
        t3 = operation_8c1571f4((void *)(o->f28));
        o->f20 = t3;
        return;
    case 5:
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (Arg0_28 *)0;
        }
        if (o->f24 != 0) {
            t4 = operation_8c1cdc80((void *)(o->f24));
            o->f3c = (Arg0_3c *)t4;
            request_resource_release((void *)(o->f24));
            o->f24 = (Arg0_24 *)0;
        }
        if (o->f34 == 0) {
            t5 = allocate_block(g_8c4d97e0, (unsigned int)0x3c);
            if (t5 != 0) {
                operation_8c1dca80((void *)t5, (int)o, (int)(((char *)o + 0x40)));
            }
            o->f34 = (Arg0_34 *)t5;
            if (o->f34->f24 != 0) {
                o->f34->f24->f6a |= 4;
            }
            operation_8c1dd654((void *)(o->f34));
            o->f34->f22 |= 0x80;
        }
        o->f20 = 6;
    case 6:
        v65 = (unsigned short)o->f34->f22;
        if (((v65 & 0x20)) != 0) {
            o->f20 = 1;
            return;
        }
        if (((v65 & 0x10)) == 0) {
            return;
        }
        o->f20 = 7;
        return;
    case 7:
        if (o->f34 != 0) {
            v66 = (S_vv66 *)o->f34;
            v66->f04 |= 1;
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f38 == 0) {
            t6 = allocate_block(g_8c4d97e0, (unsigned int)0x7c);
            if (t6 != 0) {
                operation_8c21cbc0((void *)t6, (void *)((void *)0x8c2e17f8), (int)(o->f3c), (int)(((char *)o + 0x40)));
            }
            o->f38 = (Arg0_38 *)t6;
        }
        if (o->f2c == 0) {
            t7 = create_single_entry_menu_8c21a66c(o);
            o->f2c = (Arg0_2c *)t7;
        }
        if (o->f30 == 0) {
            t8 = operation_8c21a6f0(o);
            o->f30 = (Arg0_30 *)t8;
        }
        o->f20 = 8;
    case 8:
        v85 = (S_vv85 *)o->f30;
        v112 = (int)v85->f80;
        v116 = (int)(v112 & 0xffff);
        if (((v116 & 4)) != 0) {
            o->f20 = 1;
            return;
        }
        if (((v116 & 2)) == 0) {
            return;
        }
        t9 = operation_8c1571f4((void *)v85);
        if (t9 == 0) {
            call_8c21c73c((void *)(o->f3c), (void *)(((char *)o + 0x40)));
            o->f20 = 1;
            return;
        }
        o->f20 = 1;
        return;
    case 9:
        operation_8c156e58((void *)(o->f28));
        if (o->f2c == 0) {
            t10 = create_single_entry_menu_8c21a734(o);
            o->f2c = (Arg0_2c *)t10;
        }
        if (o->f30 == 0) {
            t11 = operation_8c21a7b8(o);
            o->f30 = (Arg0_30 *)t11;
        }
        o->f20 = 0xa;
    case 10:
        v89 = (S_vv89 *)o->f30;
        v113 = (int)v89->f80;
        v117 = (int)(v113 & 0xffff);
        if (((v117 & 4)) != 0) {
            o->f20 = 3;
            return;
        }
        if (((v117 & 2)) != 0) {
            t12 = operation_8c1571f4((void *)v89);
            if (t12 == 0) {
                t13 = operation_8c1cdc80((void *)(o->f24));
                call_8c21c768(t13);
                o->f20 = 1;
                return;
            }
            o->f20 = 3;
        }
        return;
    case 11:
        break;
    }
}
