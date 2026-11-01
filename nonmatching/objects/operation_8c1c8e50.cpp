/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c8e50
 * function: operation_8c1c8e50
 * language: c++
 * reference size: 1012 bytes
 * compiled size: 1036 bytes (+2.4%)
 * differing lines: 406 of 400 reference instruction lines
 * differing bytes: 902
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +24 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0adc1c S_c8c0adc1c;
typedef struct S_c8c1a7128 S_c8c1a7128;
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c513360 S_g8c513360;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
typedef struct S_vv31 S_vv31;
typedef struct S_vv33 S_vv33;
typedef struct S_vv35 S_vv35;
typedef struct S_vv3_184 S_vv3_184;
typedef struct S_vv41 S_vv41;
typedef struct S_vv43 S_vv43;
typedef struct S_vv45 S_vv45;
class S_c8c03b55c;
struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
    char unknown3[0x1];
    unsigned char f04;
};
struct S_c8c1c7658 {
    char unknown0[0xc];
    int f0c;
    unsigned char f10;
};
struct S_vv3 {
    char unknown0[0x184];
    S_vv3_184 *f184;
    char unknown188[0x1f4];
    int f37c;
};
struct S_c8c0adc1c {
    char unknown0[0x18];
    int f18;
};
struct S_vv3_184 {
    char unknown0[0x2];
    short f02;
};
struct Frame {
    int f04;
    char unknown8[0x10];
};
struct S_vv31 {
    short f00;
};
struct S_c8c1a7128 {
    short f00;
    short f02;
    short f04;
    char unknown6[0x2];
    short f08;
    short f0a;
    short f0c;
};
struct S_vv33 {
    char unknown0[0x2];
    short f02;
};
struct S_vv35 {
    char unknown0[0x4];
    short f04;
};
struct S_vv41 {
    char unknown0[0x8];
    short f08;
};
struct S_vv43 {
    char unknown0[0xa];
    short f0a;
};
struct S_vv45 {
    char unknown0[0xc];
    short f0c;
};
struct S_g8c513360 {
    char unknown0[0x20];
    int f20;
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
    virtual void v30();
    virtual void v31(void *);
};
typedef struct S_c8c03b55cData {

} S_c8c03b55cData;
extern S_g8c418248 *g_8c418248;
extern int g_8c4dc800;
extern int g_8c510ba0;
extern S_g8c513360 *g_8c513360;
extern "C" int lookup_low_id(int);
extern "C" int call_8c163428(S_vv3 *, Object *, int);
extern "C" S_c8c1c7658 *operation_8c1c7658(void *);
extern "C" int call_8c16337c(S_vv3 *, int);
extern "C" S_c8c0adc1c *call_8c0adc1c(int, int);
extern "C" int call_8c247730(void *, int);
extern "C" S_c8c03b55c *operation_8c03b55c(void *, int);
extern "C" S_c8c1a7128 *operation_8c1a7128(int);
extern "C" int operation_8c074b30(int);
extern "C" int operation_8c074b9c(int);
extern "C" int operation_8c07faf0(int, int);
extern "C" int operation_8c1c8e50(Object *o, int a1, int a2)
{
    Frame frame;
    int *home1 = &a1;
    int v1;
    unsigned char v8;
    int v57;
    int v59;
    S_vv3 *v3;
    unsigned char v25;
    int v19;
    int v29;
    S_vv31 *v31;
    S_vv33 *v33;
    S_vv35 *v35;
    S_vv41 *v41;
    S_vv43 *v43;
    S_vv45 *v45;
    int v9;
    int v26;
    int v32;
    int v34;
    int v36;
    int v38;
    int v40;
    int v30;
    int v42;
    int v44;
    int v63;
    int t1;
    S_c8c1c7658 *t2;
    int t3;
    S_c8c0adc1c *t4;
    int t5;
    int t6;
    S_c8c03b55c *t7;
    S_c8c1c7658 *t8;
    S_c8c1a7128 *t9;
    S_c8c1a7128 *t10;
    S_c8c1a7128 *t11;
    int t12;
    int t13;
    S_c8c1a7128 *t14;
    S_c8c1a7128 *t15;
    S_c8c1a7128 *t16;
    int t17;
    (void)home1;
    v1 = (int)0;
    v3 = (S_vv3 *)a2;
    if (a2 == 0) {
        v3 = (S_vv3 *)lookup_low_id((int)g_8c418248);
    }
    if (v3 == 0) {
        return 0;
    }
    v8 = (unsigned char)o->tag;
    switch (v8) {
    case 0:
    case 1:
    case 2:
        t1 = call_8c163428(v3, o, 0);
        if (t1 != 0) {
            v1 = (int)(v1 | 8);
            goto L_8c1c91e0;
        }
        break;
    case 3:
        t2 = operation_8c1c7658((void *)o);
        if (t2 != 0) {
            v9 = (int)t2->f0c;
            if (((v9 & 1)) != 0) {
                v1 = (int)(v1 | 2);
            }
            if (((v9 & 4)) != 0) {
                v1 = (int)(v1 | 4);
            }
            if (((v9 & 8)) == 0) {
                t3 = call_8c16337c(v3, 0xd7);
                if (t3 != 0) {
                    v1 = (int)(v1 | 0x10001);
                }
            }
            if (((v9 & 0x10)) == 0) {
                if (v3->f37c == 0) {
                    v1 = (int)(v1 | 1);
                }
            }
            if (((v9 & 0x20)) == 0) {
                if (v3->f37c >= 0xb) {
                    v1 = (int)(v1 | 1);
                }
            }
            if (((v9 & 0x40)) == 0) {
                v19 = (int)(g_8c510ba0 != 0);
                if (v19 == 1) {
                    v1 = (int)(v1 | 1);
                }
            }
        }
        v25 = (unsigned char)o->f01;
        switch (v25) {
        case 2:
            v26 = (int)o->f02;
            t4 = call_8c0adc1c((int)(o->f04), v26);
            if (t4 == 0) {
                goto L_8c1c91e0;
            }
            if (t4->f18 > v3->f184->f02) {
                v1 = (int)(v1 | 0x10001);
            }
            t5 = call_8c247730((void *)((int)v3 + 0x3bc), (int)(o->f04));
            if (o->f02 <= (char)t5) {
                v1 = (int)(v1 | 0x10001);
            }
            t6 = call_8c16337c(v3, 0xfc);
            if (t6 != 0) {
                goto L_8c1c91e0;
            }
            if (!(v26 > 0xe)) {
                goto L_8c1c91e0;
            }
            break;
        case 10:
            v29 = (int)((int)v3 + 0xbcc);
            t7 = operation_8c03b55c((void *)v29, 6);
            if (t7 != 0) {
                t7->v31(&(&frame)->f04);
                t8 = operation_8c1c7658((void *)(&(&frame)->f04));
                if (t8 == 0) {
                    goto L_8c1c91e0;
                }
                if (!((unsigned int)t8->f10 <= (unsigned int)*(unsigned char *)((char *)(&frame) + 0x7))) {
                    goto L_8c1c91e0;
                }
                v1 = (int)(v1 | 1);
                goto L_8c1c91e0;
            }
            break;
        case 11:
            if (v3->f184 == 0) {
                goto L_8c1c91e0;
            }
            v30 = (int)0;
            switch ((unsigned int)(o->f02)) {
            case 0:
                v31 = (S_vv31 *)v3->f184;
                t9 = operation_8c1a7128((int)v3);
                if (!(t9->f00 <= v31->f00)) {
                    break;
                }
                v32 = (int)1;
                v30 = (int)v32;
                break;
            case 1:
                v33 = (S_vv33 *)v3->f184;
                t10 = operation_8c1a7128((int)v3);
                if (!(t10->f02 <= v33->f02)) {
                    break;
                }
                v34 = (int)1;
                v30 = (int)v34;
                break;
            case 2:
                v35 = (S_vv35 *)v3->f184;
                t11 = operation_8c1a7128((int)v3);
                if (!(t11->f04 <= v35->f04)) {
                    break;
                }
                v36 = (int)1;
                v30 = (int)v36;
                break;
            case 3:
                t12 = operation_8c074b30((int)g_8c418248);
                if (!((short)t12 >= 0xfa)) {
                    break;
                }
                v38 = (int)1;
                v30 = (int)v38;
                break;
            case 4:
                t13 = operation_8c074b9c((int)g_8c418248);
                if (!((short)t13 >= 0xfa)) {
                    break;
                }
                v40 = (int)1;
                v30 = (int)v40;
                break;
            case 5:
                v41 = (S_vv41 *)v3->f184;
                t14 = operation_8c1a7128((int)v3);
                if (!(t14->f08 <= v41->f08)) {
                    break;
                }
                v42 = (int)1;
                v30 = (int)v42;
                break;
            case 6:
                v43 = (S_vv43 *)v3->f184;
                t15 = operation_8c1a7128((int)v3);
                if (!(t15->f0a <= v43->f0a)) {
                    break;
                }
                v44 = (int)1;
                v30 = (int)v44;
                break;
            case 7:
                v45 = (S_vv45 *)v3->f184;
                t16 = operation_8c1a7128((int)v3);
                if (!(t16->f0c <= v45->f0c)) {
                    break;
                }
                v30 = (int)1;
            }
            if (v30 == 0) {
                goto L_8c1c91e0;
            }
            break;
        case 12:
            t17 = operation_8c07faf0((int)v3, (int)(o->f02));
            if (t17 == 0) {
                v1 = (int)(v1 | 1);
            }
        }
    }
L_8c1c91e0:;
    if (g_8c4dc800 != 0 && o->tag == 3) {
        if (g_8c513360 != 0) {
            v57 = (int)(((g_8c513360->f20 & 0x40)) != 0);
            v59 = (int)v57;
        } else {
            v59 = (int)0;
        }
        if (v59 == 1) {
            v1 = (int)(v1 | 0x10001);
        }
    }
    v63 = (int)(((v1 & a1)) != 0);
    return (int)(v63);
}
