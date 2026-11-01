/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02525c
 * function: operation_8c02525c
 * language: c++
 * reference size: 776 bytes
 * compiled size: 776 bytes (+0.0%)
 * differing lines: 114 of 328 reference instruction lines
 * differing bytes: 251
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1a714c S_c8c1a714c;
typedef struct S_c8c1a7194 S_c8c1a7194;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_bc8 Arg0_bc8;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_sc S_vv11_sc;
typedef struct S_vv19 S_vv19;
typedef struct S_vv37 S_vv37;
typedef struct S_vv5 S_vv5;
typedef struct S_vv9 S_vv9;
class S_c8c03b55c;
struct Frame {
    char unknown0[0x4];
    int f04;
    char unknown8[0x44];
};
struct S_vv5 {
    short f00;
    char unknown2[0x2];
    int f04;
};
struct Object {
    char unknown0[0x184];
    Arg0_184 *f184;
    char unknown188[0x10];
    short f198;
    short f19a;
    char unknown19c[0x194];
    short f330;
    short f332;
    char unknown334[0x1c];
    int f350;
    char unknown354[0x874];
    Arg0_bc8 *fbc8;
};
struct S_vv9 {
    short f00;
};
struct S_c8c1a7194 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
};
struct Arg0_184 {
    char unknown0[0x2];
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    char unknown10[0x8];
    int f18;
    int f1c;
    int f20;
};
struct S_vv11 {
    unsigned char f00;
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
    unsigned char f04;
    unsigned char f05;
    char unknown6[0x6];
};
struct S_c8c1a714c {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
};
struct S_vv11_sc {
    char unknown0[0x1];
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
    unsigned char f04;
    unsigned char f05;
};
struct S_vv19 {
    short f00;
    char unknown2[0x2];
    int f04;
};
struct S_vv37 {
    short f00;
    char unknown2[0x2];
    int f04;
};
class S_c8c03b55c {
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
    virtual int v30();
};
typedef struct S_c8c03b55cData {

} S_c8c03b55cData;
extern "C" void call_8c18e044(void *, void *, int, int, int);
extern "C" S_c8c03b55c *operation_8c03b55c(int, int);
extern "C" void operation_8c16a618(void *, int);
extern "C" int operation_8c02c320(void *);
extern "C" S_c8c1a7194 *operation_8c1a7194(int);
extern "C" int operation_8c1a71fc(int, int);
extern "C" S_c8c1a714c *operation_8c1a714c(int);
extern "C" void call_8c025764(int, void *, short);
extern "C" int operation_8c1a7260(int, int);
extern "C" float operation_8c1a70d4(int);
extern "C" float operation_8c1a70f4(void *);
extern "C" void call_8c0439bc(Object *, int, int, int, float, float);
extern "C" int operation_8c074560(void *, int, void *);
extern "C" void operation_8c022428(void *, void *, int);
extern "C" void operation_8c02525c(Object *o, int a1)
{
    Frame frame;
    int v34;
    int t3;
    int v4;
    S_vv11 *v11;
    int v20;
    int v39;
    int t5;
    S_vv5 *v5;
    S_vv19 *v19;
    int v38;
    S_c8c1a714c *t6;
    int v1;
    int v2;
    int v18;
    int v24;
    S_vv37 *v37;
    int v6;
    int v10;
    int v17;
    int v36;
    int v42;
    S_vv9 *v9;
    int v12;
    int t2;
    int v21;
    S_c8c1a7194 *t4;
    int v35;
    S_c8c03b55c *t1;
    int t7;
    float t8;
    float t9;
    int t10;
    int t11;
    S_c8c03b55c *t12;
    v1 = (int)a1;
    if (!(v1 >= 0)) {
        v2 = (int)0;
        v1 = (int)v2;
    } else {
        if (a1 > 0xc7) {
            v1 = (int)0xc7;
        }
    }
    call_8c18e044((void *)(&(&frame)->f04), (void *)((void *)0x8c025564), 0, 8, 9);
    v4 = (int)0xbcc;
    v5 = (S_vv5 *)&(&frame)->f04;
    v6 = (int)0;
    while (0xd > v6) {
        t1 = operation_8c03b55c((int)((int)o + v4), v6);
        if (t1 != 0) {
            t2 = t1->v30();
            v5->f00 = t2;
            v5->f04 = (int)t1;
            v5 = (S_vv5 *)((char *)v5 + 8);
        }
        v6 = (int)(v6 + 1);
    }
    operation_8c16a618((void *)(o->fbc8), (int)o);
    t3 = operation_8c02c320((void *)o);
    t4 = operation_8c1a7194(t3);
    v9 = (S_vv9 *)o->f184;
    v9->f00 = t4->f00;
    o->f184->f02 = t4->f02;
    o->f184->f04 = t4->f04;
    o->f184->f06 = t4->f06;
    o->f184->f08 = t4->f08;
    o->f184->f0a = t4->f0a;
    o->f184->f0c = t4->f0c;
    t5 = operation_8c1a71fc(t3, 0);
    if (t5 != 0) {
        t6 = operation_8c1a714c(t3);
        v10 = (int)0x184;
        v11 = (S_vv11 *)t5;
        v12 = (int)0;
        while (v1 > v12) {
            v11++;
            call_8c025764((int)(v11->f00), (void *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v10))), t6->f00);
            call_8c025764((int)(v11->f01), (void *)((int)*(int *)((char *)((char *)o + 0x0) + (v10)) + 2), t6->f02);
            call_8c025764((int)(v11->f02), (void *)((int)*(int *)((char *)((char *)o + 0x0) + (v10)) + 4), t6->f04);
            call_8c025764((int)(v11->f03), (void *)((int)*(int *)((char *)((char *)o + 0x0) + (v10)) + 6), t6->f06);
            call_8c025764((int)(v11->f04), (void *)((int)*(int *)((char *)((char *)o + 0x0) + (v10)) + 8), t6->f08);
            call_8c025764((int)(v11->f05), (void *)((int)*(int *)((char *)((char *)o + 0x0) + (v10)) + 0xa), t6->f0a);
            v12 = (int)(v12 + 1);
        }
    }
    o->f184->f18 = (int)v1;
    o->f184->f0e = 0x28;
    t7 = operation_8c1a7260(t3, v1);
    o->f184->f1c = (int)t7;
    o->f184->f20 = 0x12c;
    t8 = operation_8c1a70d4((int)o);
    t9 = operation_8c1a70f4((void *)o);
    call_8c0439bc(o, 0, 0, 0, t8, t9);
    o->f330 = o->f198;
    o->f332 = o->f19a;
    v17 = (int)0x134;
    *(int *)((char *)o + 0x350) |= 0x200000;
    v19 = (S_vv19 *)&(&frame)->f04;
    v20 = (int)0;
    v18 = (int)0x136;
    while (9 > v20) {
        v21 = (int)v19->f04;
        if (v21 == 0) {
            break;
        }
        v24 = (int)0;
        if (*(unsigned char *)((char *)((char *)v21 + 0x0) + (v17)) == 1 && *(unsigned char *)((char *)((char *)v21 + 0x0) + (v18)) == 3) {
            v24 = (int)1;
        }
        if (v24 == 0) {
            t10 = operation_8c074560((void *)v21, (int)o, (void *)(&frame));
            if (t10 != 0) {
                operation_8c022428((void *)o, (void *)v21, (int)(v19->f00));
            }
        }
        v19 = (S_vv19 *)((char *)v19 + 8);
        v20 = (int)(v20 + 1);
    }
    v34 = (int)0x134;
    v35 = (int)0x136;
    v37 = (S_vv37 *)&(&frame)->f04;
    v38 = (int)0;
    v36 = (int)0xbcc;
    while (9 > v38) {
        v39 = (int)v37->f04;
        if (v39 == 0) {
            break;
        }
        v42 = (int)0;
        if (*(unsigned char *)((char *)((char *)v39 + 0x0) + (v34)) == 1 && *(unsigned char *)((char *)((char *)v39 + 0x0) + (v35)) == 3) {
            v42 = (int)1;
        }
        if (v42 != 0) {
            t11 = operation_8c074560((void *)v39, (int)o, (void *)(&frame));
            if (t11 != 0) {
                t12 = operation_8c03b55c((int)((int)o + v36), 2);
                if (t12 != 0) {
                    operation_8c022428((void *)o, (void *)v39, (int)(v37->f00));
                }
            }
        }
        v37 = (S_vv37 *)((char *)v37 + 8);
        v38 = (int)(v38 + 1);
    }
    o->f350 &= -0x200001;
}
