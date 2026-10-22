typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_184 S_c8c021ef8_184;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct S_vv17 S_vv17;
typedef struct S_vv17_98 S_vv17_98;
typedef struct S_vv29 S_vv29;
typedef struct S_vv29_90 S_vv29_90;
typedef struct S_vv33 S_vv33;
typedef struct S_vv33_90 S_vv33_90;
typedef struct S_vv36 S_vv36;
typedef struct S_vv36_90 S_vv36_90;
typedef struct S_vv39 S_vv39;
typedef struct S_vv39_90 S_vv39_90;
typedef struct S_vv66 S_vv66;
typedef struct S_vv66_78 S_vv66_78;
typedef struct S_vv67 S_vv67;
typedef struct S_vv68 S_vv68;
typedef struct S_vv68_78 S_vv68_78;
typedef struct S_vv9 S_vv9;
typedef struct S_vv9_90 S_vv9_90;
class S_c8c0744dc;
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
    int f3c;
};
struct Arg0_24 {
    char unknown0[0x80];
    volatile unsigned short f80;
    char unknown82[0x2];
    short f84;
    char unknown86[0x12];
    short f98;
};
struct S_vv9 {
    char unknown0[0x90];
    S_vv9_90 *f90;
};
struct Arg0_28 {
    char unknown0[0x80];
    volatile unsigned short f80;
};
struct S_vv17 {
    char unknown0[0x98];
    S_vv17_98 *f98;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Arg0_2c {
    char unknown0[0x80];
    volatile unsigned short f80;
};
struct S_vv29 {
    char unknown0[0x90];
    S_vv29_90 *f90;
};
struct S_vv33 {
    char unknown0[0x80];
    volatile unsigned short f80;
    char unknown82[0xe];
    S_vv33_90 *f90;
};
struct S_vv36 {
    char unknown0[0x90];
    S_vv36_90 *f90;
};
struct S_vv39 {
    char unknown0[0x90];
    S_vv39_90 *f90;
};
struct S_vv66 {
    char unknown0[0x68];
    short f68;
    char unknown6a[0xe];
    S_vv66_78 *f78;
};
struct Arg0_30 {
    char unknown0[0x68];
    unsigned short f68;
    char unknown6a[0xa];
    int f74;
};
struct S_c8c021ef8 {
    char unknown0[0x184];
    S_c8c021ef8_184 *f184;
    char unknown188[0x1c8];
    int f350;
};
struct S_vv67 {
    char unknown0[0x20];
    int f20;
};
struct S_vv68 {
    char unknown0[0x68];
    short f68;
    char unknown6a[0xe];
    S_vv68_78 *f78;
};
class S_c8c0744dc {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual int v34();
};
typedef struct S_c8c0744dcData {

} S_c8c0744dcData;
extern S_g8c418248 *g_8c418248;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dbde0 *g_8c4dbde0;
extern S_L8c41cba0 g_8c41cba0;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void request_resource_release(void *);
extern "C" int allocate_block(void *, unsigned int);
extern "C" void operation_8c1d5b24(void *);
extern "C" void operation_8c1a2c98(void *);
extern "C" void operation_8c19a044(void *, int);
extern "C" int operation_8c1cdc80(void *);
extern "C" void operation_8c1a3de4(void *, int);
extern "C" void call_8c18c808(void *);
extern "C" int operation_8c1a36a0(int, int);
extern "C" void operation_8c156ec0(void *);
extern "C" int operation_8c1571f4(void *);
extern "C" void operation_8c2356f0(int);
extern "C" void call_8c1a3b10(Object *, int);
extern "C" int operation_8c0244c4(void *);
extern "C" void operation_8c1a3b78(void *, int, int);
extern "C" void operation_8c156e58(void *);
extern "C" int call_8c1a3750(Object *);
extern "C" void operation_8c1a3c8c(void *, int);
extern "C" void call_8c1a2ce0(Arg0_24 *);
extern "C" void call_8c1a2d40(Arg0_24 *);
extern "C" void operation_8c1a3d00(void *);
extern "C" S_c8c0744dc *find_record_8c0744dc(int);
extern "C" int operation_8c1a37e4(int, int);
extern "C" void operation_8c02349c(void *, int, int);
extern "C" int operation_8c0de37c(void);
extern "C" void operation_8c0de3b4(void);
extern "C" void operation_8c023628(void *, int);
extern "C" int operation_8c256a90(void);
extern "C" void call_8c03c1b8(void *, int);
extern "C" void call_8c0235b4(S_c8c021ef8 *, void *);
extern "C" void operation_8c1a2ed4(Object *o)
{
    S_vv9 *v9;
    int v63;
    int v69;
    S_vv17 *v17;
    int v25;
    short v28;
    S_vv29 *v29;
    int v32;
    S_vv33 *v33;
    int v64;
    int v70;
    S_vv36 *v36;
    int v65;
    int v71;
    S_vv39 *v39;
    S_vv66 *v66;
    S_vv67 *v67;
    int v53;
    S_vv68 *v68;
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
    S_c8c0744dc *t15;
    int t16;
    int t17;
    int t18;
    int t19;
    S_c8c021ef8 *t20;
    int t21;
    int t22;
    int t23;
    S_c8c021ef8 *t24;
    int t25;
    int t26;
    int t27;
    int t28;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        return;
    }
    switch ((unsigned char)o->f20) {
    case 0:
    case 1:
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
        }
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (Arg0_28 *)0;
        }
        if (o->f34 == 0) {
            t2 = allocate_block(g_8c4d97e0, (unsigned int)0xb8);
            if (t2 != 0) {
                operation_8c1d5b24((void *)t2);
            }
            o->f34 = (Arg0_34 *)(int)t2;
            o->f3c = -1;
        }
        operation_8c1a2c98((void *)(o->f24));
        v9 = (S_vv9 *)o->f24;
        o->f24->f80 = (o->f24->f80 & 0xffff) & -3;
        if (v9->f90 != 0) {
            operation_8c19a044((void *)(v9->f90), 1);
        }
        o->f20 = 2;
    case 2:
        t3 = operation_8c1cdc80((void *)(o->f24));
        operation_8c1a3de4((void *)o, t3);
        v63 = (int)o->f24->f80;
        v69 = (int)(v63 & 0xffff);
        if (((v69 & 4)) != 0) {
            call_8c18c808(g_8c4dbde0);
            o->f20 = 0x17;
            return;
        }
        if (((v69 & 2)) == 0) {
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
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f28 == 0) {
            t4 = operation_8c1cdc80((void *)(o->f24));
            t5 = operation_8c1a36a0((int)o, t4);
            o->f28 = (Arg0_28 *)(int)t5;
        }
        v17 = (S_vv17 *)o->f28;
        o->f28->f80 = (o->f28->f80 & 0xffff) & -3;
        if (v17->f98 != 0) {
            operation_8c19a044((void *)(v17->f98), 1);
        }
        operation_8c156ec0((void *)(o->f28));
        o->f20 = 4;
    case 4:
        t6 = operation_8c1571f4((void *)(o->f28));
        if (t6 == 0) {
            t7 = operation_8c1cdc80((void *)(o->f24));
            operation_8c2356f0(t7);
        }
        if (((o->f28->f80 & 0xffff & 4)) != 0) {
            o->f20 = 1;
        }
        if (((o->f28->f80 & 0xffff & 2)) == 0) {
            return;
        }
        t8 = operation_8c1571f4((void *)(o->f28));
        call_8c1a3b10(o, t8);
        return;
    case 5:
        if ((((&g_8c41cba0)->f28 & 2)) != 0) {
            o->f20 = 3;
        }
        t9 = operation_8c0244c4((void *)t1);
        if (t9 == 0) {
            return;
        }
        t10 = operation_8c1cdc80((void *)(o->f24));
        t11 = operation_8c1571f4((void *)(o->f28));
        operation_8c1a3b78((void *)o, t10, t11);
        return;
    case 6:
        operation_8c156e58((void *)(o->f28));
        t12 = call_8c1a3750(o);
        o->f2c = (Arg0_2c *)(int)t12;
        v25 = (int)7;
        o->f20 = v25;
    case 7:
        if (((o->f2c->f80 & 0xffff & 4)) != 0) {
            o->f20 = 3;
        }
        if (((o->f2c->f80 & 0xffff & 2)) == 0) {
            return;
        }
        t13 = operation_8c1571f4((void *)(o->f2c));
        operation_8c1a3c8c((void *)o, t13);
        return;
    case 8:
        v28 = (short)o->f24->f84;
        operation_8c1a2c98((void *)(o->f24));
        call_8c1a2ce0((Arg0_24 *)(o->f24));
        call_8c1a2d40((Arg0_24 *)(o->f24));
        o->f24->f84 = v28;
        v29 = (S_vv29 *)o->f24;
        o->f24->f80 = (o->f24->f80 & 0xffff) & -3;
        if (v29->f90 != 0) {
            operation_8c19a044((void *)(v29->f90), 1);
        }
        o->f24->f98 = -1;
        v32 = (int)9;
        o->f20 = v32;
    case 9:
        v33 = (S_vv33 *)o->f24;
        v64 = (int)v33->f80;
        v70 = (int)(v64 & 0xffff);
        if (((v70 & 4)) != 0) {
            call_8c18c808(g_8c4dbde0);
            o->f20 = 0x17;
            return;
        }
        if (((v70 & 2)) == 0) {
            return;
        }
        v33->f80 = (v33->f80 & 0xffff) & -3;
        if (v33->f90 != 0) {
            operation_8c19a044((void *)(v33->f90), 1);
        }
        o->f20 = 0xa;
        return;
    case 10:
        call_8c1a2ce0((Arg0_24 *)(o->f24));
        call_8c1a2d40((Arg0_24 *)(o->f24));
        o->f24->f98 = o->f24->f84;
        v36 = (S_vv36 *)o->f24;
        o->f24->f80 = (o->f24->f80 & 0xffff) & -3;
        if (v36->f90 != 0) {
            operation_8c19a044((void *)(v36->f90), 1);
        }
        o->f20 = 0xb;
    case 11:
        v65 = (int)o->f24->f80;
        v71 = (int)(v65 & 0xffff);
        if (((v71 & 4)) != 0) {
            o->f20 = 8;
            return;
        }
        if (((v71 & 2)) == 0) {
            return;
        }
        operation_8c1a3d00((void *)o);
        v39 = (S_vv39 *)o->f24;
        o->f24->f80 = (o->f24->f80 & 0xffff) & -3;
        if (v39->f90 != 0) {
            operation_8c19a044((void *)(v39->f90), 1);
        }
        o->f20 = 8;
        return;
    case 12:
        t14 = operation_8c1cdc80((void *)(o->f24));
        t15 = find_record_8c0744dc(t14);
        t16 = t15->v34();
        if (1 >= t16) {
            o->f38 = (Arg0_38 *)1;
            o->f20 = 0xe;
            return;
        }
        operation_8c156e58((void *)(o->f28));
        if (o->f30 == 0) {
            t17 = operation_8c1a37e4((int)o, t16);
            o->f30 = (Arg0_30 *)(int)t17;
        }
        v66 = (S_vv66 *)o->f30;
        v66->f68 &= -3;
        if (v66->f78 != 0) {
            operation_8c19a044((void *)(v66->f78), 1);
        }
        o->f20 = 0xd;
    case 13:
        if (((o->f30->f68 & 4)) != 0) {
            o->f20 = 3;
        }
        if (((o->f30->f68 & 2)) == 0) {
            return;
        }
        o->f38 = (Arg0_38 *)o->f30->f74;
        o->f20 = 0xe;
        return;
    case 14:
        if ((((&g_8c41cba0)->f28 & 2)) != 0) {
            o->f20 = 3;
        }
        t18 = operation_8c0244c4((void *)t1);
        if (t18 == 0) {
            return;
        }
        t19 = operation_8c1cdc80((void *)(o->f24));
        operation_8c02349c((void *)t1, t19, (int)(o->f38));
        o->f20 = 0x16;
        return;
    case 15:
        o->f20 = 0x10;
    case 16:
        if ((((&g_8c41cba0)->f28 & 2)) != 0) {
            o->f20 = 1;
        }
        t20 = lookup_low_id((int)g_8c418248);
        if (t20 == 0) {
            return;
        }
        t21 = operation_8c0244c4((void *)t20);
        if (t21 == 0) {
            return;
        }
        t22 = operation_8c0de37c();
        if (t22 == 0) {
            return;
        }
        operation_8c0de3b4();
        t23 = operation_8c1cdc80((void *)(o->f24));
        operation_8c023628((void *)t20, (int)(t23 & 0xf));
        o->f20 = 1;
        return;
    case 17:
        o->f20 = 0x12;
    case 18:
        if ((((&g_8c41cba0)->f28 & 2)) != 0) {
            o->f20 = 1;
        }
        t24 = lookup_low_id((int)g_8c418248);
        if (t24 == 0) {
            return;
        }
        t25 = operation_8c0244c4((void *)t24);
        if (t25 == 0) {
            return;
        }
        t26 = operation_8c256a90();
        if (t26 == 0) {
            return;
        }
        call_8c03c1b8((void *)(((char *)t24 + 0x750)), 1);
        o->f20 = 1;
        return;
    case 19:
        v67 = (S_vv67 *)t1->f184;
        if (v67 == 0) {
            o->f20 = 0x16;
            return;
        }
        v53 = (int)v67->f20;
        if (1 >= v53) {
            if (v53 == 1) {
                o->f38 = (Arg0_38 *)1;
                o->f20 = 0x15;
            } else {
                o->f20 = 0x16;
            }
            return;
        }
        operation_8c156e58((void *)(o->f28));
        if (o->f30 == 0) {
            t27 = operation_8c1a37e4((int)o, v53);
            o->f30 = (Arg0_30 *)(int)t27;
        }
        v68 = (S_vv68 *)o->f30;
        v68->f68 &= -3;
        if (v68->f78 != 0) {
            operation_8c19a044((void *)(v68->f78), 1);
        }
        o->f20 = 0x14;
    case 20:
        if (((o->f30->f68 & 4)) != 0) {
            o->f20 = 3;
        }
        if (((o->f30->f68 & 2)) == 0) {
            return;
        }
        o->f38 = (Arg0_38 *)o->f30->f74;
        o->f20 = 0x15;
        return;
    case 21:
        if ((((&g_8c41cba0)->f28 & 2)) != 0) {
            o->f20 = 3;
        }
        t28 = operation_8c0244c4((void *)t1);
        if (t28 == 0) {
            return;
        }
        call_8c0235b4(t1, (void *)(o->f38));
        o->f20 = 0x16;
        return;
    case 22:
        if (((t1->f350 & 2)) == 0) {
            o->f20 = 1;
        }
        return;
    case 23:
        break;
    }
}
