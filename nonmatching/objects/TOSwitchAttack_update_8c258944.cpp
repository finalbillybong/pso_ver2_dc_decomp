/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c258944
 * function: TOSwitchAttack_update_8c258944
 * language: c++
 * reference size: 1100 bytes
 * compiled size: 1104 bytes (+0.4%)
 * differing lines: 150 of 396 reference instruction lines
 * differing bytes: 765
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
class S_c8c0541b4;
class Object;
typedef struct Block_frame_10 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_10;
typedef struct Block_frame_8 {
    int f00;
    float f04;
} Block_frame_8;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
class Object {
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
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x14];
    int f14;
    char unknown18[0x1c];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x4c];
    float f94;
    float f98;
    float f9c;
    int fa0;
    unsigned short fa4;
    unsigned short fa6;
    volatile unsigned short fa8;
    unsigned char faa;
    unsigned char fab;
    int fac;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
    Block_frame_8 f08;
    Block_frame_10 f10;
};
struct S_c8c053d84 {
    char unknown0[0xdc];
    int fdc;
    int fe0;
};
class S_c8c0541b4 {
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
    virtual void v25(Object *, int, Block8);
};
typedef struct S_c8c0541b4Data {

} S_c8c0541b4Data;
extern S_g8c418248 *g_8c418248;
extern int g_8c44be04;
extern int g_8c467874;
extern int g_8c467878;
extern int g_8c46ee80;
extern "C" int lookup_low_id(int);
extern "C" float squared_distance_xz(void *, void *);
extern "C" int operation_03d080(unsigned short);
extern "C" S_c8c0541b4 *operation_8c0541b4(int, int);
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void create_effect(void *, int, int);
extern "C" void operation_8c0a1ed0(int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void TOSwitchAttackSub_create_8c258ee4(int, int, int, int, float);
extern "C" void TOSwitchAttack_update_8c258944(Object *o)
{
    Frame frame;
    int v3;
    int v76;
    int v16;
    unsigned short v78;
    unsigned short v77;
    int v36;
    int v21;
    S_c8c053d84 *t9;
    int v23;
    int v33;
    int v39;
    char *v40;
    int v47;
    int v38;
    char *v41;
    S_c8c0541b4 *t7;
    int v22;
    char *v37;
    unsigned char v79;
    int v62;
    int v63;
    int t1;
    int t2;
    float t3;
    float t4;
    int t5;
    int v55;
    int v17;
    float t8;
    int t6;
    float t10;
    S_c8c0541b4 *t11;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        ((ObjectData *)o)->f34 &= -0x8000001;
    } else {
        ((ObjectData *)o)->f34 |= 0x8000000;
    }
    v3 = (int)0x8000000;
    if (((((ObjectData *)o)->f34 & v3)) == 0) {
        t2 = lookup_low_id((int)g_8c418248);
        if (t2 != 0) {
            v76 = (int)g_8c46ee80;
            if (v76 != 0) {
                t3 = squared_distance_xz((void *)(t2 + 0x3c), (void *)(v76 + 0x90));
                t4 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)(g_8c46ee80 + 0x90));
                if (t3 > (t4 * 2.0f)) {
                    ((ObjectData *)o)->f34 |= 0x8000000;
                }
            }
        }
    }
    if (((ObjectData *)o)->fac > 0) {
        ((ObjectData *)o)->fac -= 1;
    }
    v16 = (int)0;
    if (((((ObjectData *)o)->fa8 & 0xffff)) == 0 && ((ObjectData *)o)->fa0 == 1) {
        v16 = (int)1;
    }
    if (v16 != 0) {
        return;
    }
    v17 = (int)1;
    v77 = (unsigned short)((ObjectData *)o)->fa6;
    v78 = (unsigned short)0x100;
    if ((unsigned int)(v77 & 0xffff) <= v78) {
        t5 = operation_03d080((unsigned short)v77);
        if ((unsigned char)t5 == 1) {
            ((ObjectData *)o)->faa = 0;
            v17 = (int)0;
        }
    }
    if (v17 != 1 || !((unsigned int)0x100 >= (unsigned int)(((ObjectData *)o)->fa4 & 0xffff))) {
        return;
    }
    t6 = operation_03d080((unsigned short)(((ObjectData *)o)->fa4));
    if ((unsigned char)t6 != 1) {
    } else {
        if ((((ObjectData *)o)->faa) != 0) {
        } else {
            v21 = (int)0x37c;
            v22 = (int)g_8c467874;
            v33 = (int)0;
            goto L_8c258b1c;
            v23 = (int)0;
            do {
                t7 = operation_8c0541b4(v23, 0);
                if (t7 != 0 && *(int *)((char *)((char *)t7 + 0x0) + (v21)) == (int)g_8c44be04) {
                    t8 = squared_distance_xz((void *)(((char *)t7 + 0x3c)), (void *)(((char *)o + 0x3c)));
                    if (((ObjectData *)o)->f98 > t8) {
                        (&frame)->f08.f00 = 0;
                        (&frame)->f08.f04 = ((ObjectData *)o)->f9c;
                        t7->v25(o, 0, *(Block8 *)&(&frame)->f08);
                    }
                }
                v23 = (int)(v23 + 1);
                v33 = (int)v23;
L_8c258b1c:;
                v23 = (int)v33;
            } while (v33 != v22);
            v36 = (int)(v22 + g_8c467878);
            v55 = (int)v22;
            goto L_8c258bc0;
            v37 = (char *)v22;
            do {
                t9 = lookup_object_by_id((unsigned short)v37);
                if (t9 != 0) {
                    v38 = (int)0;
                    v39 = (int)t9->fdc;
                    v47 = (int)v39;
                    goto L_8c258bb6;
                    v40 = (char *)v39;
                    v41 = (char *)v38;
                    do {
                        t10 = squared_distance_xz((void *)(v40 + 0x1c), (void *)(((char *)o + 0x3c)));
                        if (((ObjectData *)o)->f98 > t10) {
                            t11 = operation_8c0541b4((int)(v37), (int)(v41));
                            if (t11 != 0) {
                                (&frame)->f00.f00 = 0;
                                (&frame)->f00.f04 = ((ObjectData *)o)->f9c;
                                t11->v25(o, 0, *(Block8 *)&(&frame)->f00);
                            }
                        }
                        v41 = (char *)(v41 + 1);
                        v38 = (int)v41;
                        v47 = (int)(v40 + 0x2c);
L_8c258bb6:;
                        v40 = (char *)v47;
                        v41 = (char *)v38;
                    } while (v38 != t9->fe0);
                }
                v37 = (char *)(v37 + 1);
                v55 = (int)v37;
L_8c258bc0:;
                v37 = (char *)v55;
            } while (v55 != v36);
            v79 = (unsigned char)((ObjectData *)o)->fab;
            switch (v79) {
            case 0:
                if (((((ObjectData *)o)->f34 & 0x8000000)) == 0) {
                    create_effect((void *)(((char *)o + 0x3c)), 0x45, 0x40);
                    create_effect((void *)(((char *)o + 0x3c)), 0x189, 0x40);
                    operation_8c0a1ed0(2);
                }
                play_se_8c05fbf8(0x10012, (void *)(((char *)o + 0x3c)), 0, 0);
                break;
            case 1:
                if (((((ObjectData *)o)->f34 & 0x8000000)) != 0) {
                    goto L_8c258d56;
                }
                operation_8c0a1ed0(2);
                break;
            case 2:
                if (((((ObjectData *)o)->f34 & 0x8000000)) != 0) {
                    goto L_8c258d56;
                }
                if (((ObjectData *)o)->fac != 0) {
                    goto L_8c258d56;
                }
                *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&((ObjectData *)o)->f3c;
                (&frame)->f10.f04 += 10.0f;
                v62 = (int)0x1a6;
                v63 = (int)0x40;
                create_effect((void *)(&(&frame)->f10), v62, v63);
                create_effect((void *)(&(&frame)->f10), 0x1a7, 0x40);
                ((ObjectData *)o)->fac = 0x3c;
                break;
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
                if (((ObjectData *)o)->f14 == 0) {
                    TOSwitchAttackSub_create_8c258ee4((int)o, (int)(((ObjectData *)o)->fa6), (int)(((ObjectData *)o)->fa4), (int)(v79 + -3), ((ObjectData *)o)->f94);
                }
            }
L_8c258d56:;
            ((ObjectData *)o)->fa0 = 1;
        }
    }
    ((ObjectData *)o)->faa = t6;
}
