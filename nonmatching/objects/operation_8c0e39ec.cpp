/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e39ec
 * function: operation_8c0e39ec
 * language: c++
 * reference size: 608 bytes
 * compiled size: 608 bytes (+0.0%)
 * differing lines: 8 of 251 reference instruction lines
 * differing bytes: 10
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order, constant loading;
 *   review found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Arg0_36c Arg0_36c;
typedef struct S_vv41 S_vv41;
typedef struct S_vv44 S_vv44;
typedef struct S_vv6 S_vv6;
typedef struct S_x34832 S_x34832;
class Object;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual int v20(int);
};
typedef struct ObjectData {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2fc];
    S_c8c021ef8 *f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x16];
    Arg0_36c *f36c;
    char unknown370[0x20];
    short f390;
    char unknown392[0x2];
    int f394;
    char unknown398[0x14];
    int f3ac;
} ObjectData;
struct Arg0_36c {
    float f00;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_vv6 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
};
struct S_x34832 {
    Vector3 f00;
};
struct S_vv41 {
    char unknown0[0x35c];
    int f35c;
    int f360;
};
struct S_vv44 {
    char unknown0[0x354];
    volatile unsigned short f354;
};
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
extern Vector3 g_8c307860;
extern int g_8c44be04;
extern int g_8c467874;
extern int g_8c467878;
extern "C" int call_8c04a52c(Object *, int, float);
extern "C" void vector_sub_in_place_8c37f6f0(Frame *, int);
extern "C" int query_capped_segment(void *, void *);
extern "C" int operation_8c011214(int, int, int);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int operation_8c012a14(int);
extern "C" void operation_8c0e39ec(Object *o)
{
    Frame frame;
    int t3;
    S_vv41 *v41;
    unsigned short v2;
    int v5;
    float v9;
    int v8;
    int v28;
    float v4;
    float v10;
    int v11;
    unsigned short v7;
    int t6;
    int v40;
    int v3;
    S_vv44 *v44;
    int t4;
    int t8;
    float v111;
    int v1;
    int v89;
    int t2;
    S_vv6 *v6;
    unsigned short t9;
    S_c8c021ef8 *t7;
    int t1;
    if (((ObjectData *)o)->f3ac == 1) {
        ((ObjectData *)o)->f354 = 0xffff;
        ((ObjectData *)o)->f34 |= 0x4040000;
    } else {
        v1 = ((ObjectData *)o)->f34;
        if (0 != ((0x1000 & v1))) {
            if (!((short)-- *(short *)((char *)o + 0x390) >= 0)) {
                ((ObjectData *)o)->f354 = (unsigned short)0xffff;
                ((ObjectData *)o)->f390 = (short)0;
                ((ObjectData *)o)->f34 = ((ObjectData *)o)->f34 | 0x1000;
                goto L_8c0e3b84;
            }
            t1 = call_8c04a52c(o, 0, ((ObjectData *)o)->f36c->f00);
            ((ObjectData *)o)->f354 = t1;
        } else {
            if (((v1 & 0x10)) != 0) {
                t2 = o->v20(0x1e);
                if (t2 == 0) {
                    goto L_8c0e3b84;
                }
                v2 = (int)0xffff;
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c307860;
                v111 = ((ObjectData *)o)->f36c->f00;
                v28 = (int)0;
                v4 = v111 * v111;
                v3 = (int)0x324;
                goto L_8c0e3b1e;
                v5 = 0;
            L_8c0e3a9c:
                ;
                v1 = (int)v5;
                v6 = (S_vv6 *)*(S_g8c467240 **)((char *)0x8c467240 + (v5 << 2));
                v28 = v1;
                if (v6 != 0) {
                    v7 = (unsigned short)v6->f20;
                    t9 = 0x4000;
                    if (t9 > v7 && (unsigned short)v7 != ((ObjectData *)o)->f20 && ((v6->f34 & 0x2000800)) == 0) {
                        v8 = (int)((int)o + v3);
                        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x34832 *)((int)v6 + v3))->f00;
                        vector_sub_in_place_8c37f6f0((Frame *)((&frame)), v8);
                        v111 = (&frame)->f00.f00;
                        v10 = v111 * (&frame)->f00.f00 + (&frame)->f00.f08 * (&frame)->f00.f08;
                        if (v4 > v10) {
                            v11 = (int)((int)v6 + v3);
                            t3 = query_capped_segment((void *)o, (void *)v11);
                            if (1 != t3) {
                                t4 = operation_8c011214(v8, v11, -1);
                                if (t4 == 0) {
                                    v2 = v7;
                                    v4 = v10;
                                }
                            }
                        }
                    }
                    v28 = (v5 + 1);
                L_8c0e3b1e:
                    ;
                    v5 = (int)v28;
                    if ((g_8c467874 + g_8c467878) > v28) {
                        goto L_8c0e3a9c;
                    }
                }
                ((ObjectData *)o)->f354 = v2;
            } else {
                t2 = ((ObjectData *)o)->f394;
                if (t2 != 0) {
                    int v43;
                    v41 = (S_vv41 *)o;
                    while (!((v40 = v41->f360) == 0)) {
                        v41 = (S_vv41 *)v40;
                    }
                    v43 = (int)v41->f35c;
                    if (v43 != 0) {
                        v44 = (S_vv44 *)v43;
                    } else {
                        v44 = (S_vv44 *)0;
                    }
                    ((ObjectData *)o)->f354 = 0xffff & v44->f354;
                } else {
                    int t5;
                    t5 = o->v20(0x1e);
                    if (t5 != 0) {
                        t6 = call_8c04a52c(o, 0, ((ObjectData *)o)->f36c->f00);
                        ((ObjectData *)o)->f354 = (unsigned short)t6;
                    }
                }
            }
        }
    }
L_8c0e3b84:
    ;
    v89 = (unsigned short)(int)((ObjectData *)o)->f354;
    if ((unsigned int)0x1000 > (unsigned int)(unsigned short)v89) {
        t7 = lookup_low_id((int)((unsigned short)v89));
        if (t7 != 0 && t7->f37c == g_8c44be04) {
            ((ObjectData *)o)->f334 = t7;
            return;
        }
        t7 = (S_c8c021ef8 *)0;
        ((ObjectData *)o)->f334 = t7;
        return;
    }
    if ((unsigned int)0x4000 > (unsigned int)(unsigned short)v89) {
        t8 = operation_8c012a14(v89);
        ((ObjectData *)o)->f334 = (S_c8c021ef8 *)(int)t8;
    }
}
