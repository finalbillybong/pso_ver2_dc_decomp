/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c042488
 * function: capture_frame_buffer_8c042488
 * language: c++
 * reference size: 1112 bytes
 * compiled size: 1116 bytes (+0.4%)
 * differing lines: 280 of 406 reference instruction lines
 * differing bytes: 747
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03ed10 S_c8c03ed10;
typedef struct S_c8c36b024 S_c8c36b024;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv38 S_vv38;
typedef struct S_vv47 S_vv47;
typedef struct S_vv52 S_vv52;
typedef struct S_vv53 S_vv53;
typedef struct S_x21920 S_x21920;
class S_vv55;
struct S_c8c36b024 {
    char unknown0[0x8];
    int f08;
    char unknownc[0x4];
    int f10;
};
struct S_x21920 {
    int f00;
};
struct S_c8c03ed10 {
    short f00;
    short f02;
};
struct Frame {
    char unknown0[0x8];
    int f08;
    char unknownc[0x4];
    int f10;
    char unknown14[0x30];
    int f44;
    char unknown48[0xc];
    void *f54;
    void *f58;
    short f5c;
    short f5e;
    int f60;
    short f64;
    char unknown66[0x2];
    S_c8c03ed10 *f68;
    int f6c;
};
struct S_vv38 {
    short f00;
};
struct S_vv52 {
    int f00;
};
class S_vv55 {
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
    virtual int v17();
};
typedef struct S_vv55Data {
    char unknown0[0x184];
    int f184;
    char unknown188[0x690];
    int f818;
} S_vv55Data;
struct S_vv53 {
    int f00;
};
struct S_vv47 {
    short f00;
};
extern int g_8c467874;
extern "C" int get_game_mode_8c01c25c(void);
extern "C" int get_current_area_8c032b10(void);
extern "C" int operation_8c0c349c(void);
extern "C" S_c8c36b024 *call_8c36b024(int);
extern "C" int call_8c3727a0(int);
extern "C" int call_8c37284a(int);
extern "C" int bu_check_busy_8c372d98(int);
extern "C" int net_call_8c37293e(int, int);
extern "C" void wait_vsync_and_flip_8c380516(void);
extern "C" int operation_8c03ed64(void);
extern "C" S_c8c03ed10 *operation_8c03ed10(int);
extern "C" float floor_e(float);
extern "C" void call_8c0422d4(int, int);
extern "C" void memset_8c12b880(int, int, int);
extern "C" void strncpy_8c12b154(int, void *, int);
extern "C" void call_8c18e720(void *, void *);
extern "C" void memcpy_8c12b77c(void *, void *, int);
extern "C" void call_8c377d84(void *, void *);
extern "C" int vmu_save_file_timestamped_8c01024c(int, int, int, int);
extern "C" void operation_8c017ba8(void);
extern "C" void call_8c38c8ac(int, int, int);
extern "C" void operation_8c017bd4(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void operation_8c03ed70(int);
extern "C" int capture_frame_buffer_8c042488(void)
{
    Frame frame;
    int v5;
    int v11;
    int v12;
    int v15;
    int v16;
    int v17;
    float v21;
    int v50;
    float v22;
    S_vv53 *v53;
    int v57;
    float v27;
    int v19;
    char *v28;
    char *v32;
    S_vv38 *v38;
    S_vv55 *v55;
    int v34;
    S_c8c03ed10 *t10;
    int v35;
    int v23;
    int v26;
    int v51;
    int v68;
    int v30;
    int v31;
    int v49;
    char *v54;
    int v62;
    int v29;
    int v43;
    int v48;
    S_vv52 *v52;
    int v61;
    int v10;
    int v33;
    int v37;
    int v72;
    int v73;
    int v76;
    int v77;
    float v78;
    float v84;
    S_vv47 *v47;
    float v85;
    int v83;
    int t1;
    int t2;
    int t3;
    S_c8c36b024 *t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int v82;
    float t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    float t21;
    t1 = get_game_mode_8c01c25c();
    if (t1 == 0x10) {
        t2 = get_current_area_8c032b10();
        if ((unsigned int)3 >= (unsigned int)(t2 + -0xb)) {
            t3 = operation_8c0c349c();
            if (t3 != 0) {
                return 0;
            }
        }
    }
    t4 = call_8c36b024(0x12);
    v5 = (int)t4->f08;
    if (((v5 & 4)) != 0 && ((t4->f10 & 8)) != 0) {
        v10 = (int)0;
        goto L_8c04250c;
    }
    if (((v5 & 0x400)) != 0 && ((t4->f10 & 8)) != 0) {
        v10 = (int)1;
        goto L_8c04250c;
    }
    return 0;
L_8c04250c:;
    t5 = call_8c3727a0(7);
    if (t5 == 0) {
        v16 = (int)0;
    } else {
        t6 = call_8c37284a(7);
        if (t6 != 0) {
            v15 = (int)0;
        } else {
            t7 = bu_check_busy_8c372d98(7);
            if (t7 != 0) {
                v12 = (int)0;
            } else {
                t8 = net_call_8c37293e(7, 0);
                if (0xc3 > t8) {
                    v11 = (int)0;
                } else {
                    v11 = (int)1;
                }
                v12 = (int)v11;
            }
            v15 = (int)v12;
        }
        v16 = (int)v15;
    }
    if (v16 == 0) {
        return 0;
    }
    wait_vsync_and_flip_8c380516();
    t9 = operation_8c03ed64();
    if (t9 == 0) {
        v83 = (int)v10;
        v85 = (float)/* ? fr15 */ 0;
    } else {
        S_c8c03ed10 *self;
        t10 = operation_8c03ed10((int)((void *)0x8c2f1b84));
        v17 = (int)(((S_x21920 *)(-0x5fa07fb0))->f00 | -0x5b000000);
        t10->f00 = 0x100;
        t10->f02 = 0xc0;
        self = (S_c8c03ed10 *)t10;
        v19 = (int)((char *)t10 + 0x4);
        if (v10 == 0 || v10 != 1) {
            v21 = (float)2.5f;
            (&frame)->f08 = 1;
            v26 = (int)1;
            v27 = (float)v21;
            goto L_8c0425e6;
        }
        v22 = (float)1.25f;
        v23 = (int)0xb5;
        (&frame)->f08 = 0xa1;
        v26 = (int)v23;
        v27 = (float)v22;
L_8c0425e6:;
        v43 = (int)0;
        v38 = (S_vv38 *)v19;
        goto L_8c04265a;
        v28 = (char *)v19;
        v29 = (int)0;
L_8c0425f8:;
        t11 = floor_e((float)v29 * v27);
        v30 = (int)((int)t11 + v26);
        if (((int)t11 + v26) > 0x1de) {
            v30 = (int)0x1de;
        }
        v31 = (int)(v30 * 0x500 + v17);
        v37 = (int)0;
        v38 = (S_vv38 *)v28;
        goto L_8c042652;
        v32 = (char *)v28;
        v33 = (int)0;
L_8c042628:;
        t21 = floor_e((float)v33 * v27);
        v34 = (int)((int)t21 + (&frame)->f08);
        if (v34 > 0x27e) {
            v34 = (int)0x27e;
        }
        v35 = (int)v31;
        v35 = (int)(v35 + (v34 << 1));
        call_8c0422d4(v35, (int)(v32));
        v37 = (int)(v33 + 1);
        v38 = (S_vv38 *)(v32 + 2);
L_8c042652:;
        if (0x100 > v37) {
            v32 = (char *)v38;
            v33 = (int)v37;
            goto L_8c042628;
        }
        v10 = (int)v37;
        v43 = (int)(v29 + 1);
L_8c04265a:;
        if (0xc0 > v43) {
            v28 = (char *)v38;
            v29 = (int)v43;
            goto L_8c0425f8;
        }
        v47 = (S_vv47 *)((int)v38 + 2);
        v38->f00 = 0x118;
        v48 = (int)((int)v47 + 2);
        v49 = (int)(v48 + 0x60);
        v50 = (int)(v48 + 0x30);
        memset_8c12b880(v49, 0, 0x120);
        v68 = (int)0;
        v61 = (int)v48;
        v62 = (int)v49;
        v57 = (int)v50;
        goto L_8c0426f6;
        v51 = (int)0;
        v52 = (S_vv52 *)v48;
        v53 = (S_vv53 *)v50;
        v54 = (char *)v49;
L_8c0426b4:;
        v55 = (S_vv55 *)*(S_g8c467240 **)((char *)0x8c467240 + (v51 << 2));
        v61 = (int)v52;
        v62 = (int)v54;
        v57 = (int)v53;
        if (v55 != 0) {
            v52->f00 = (int)(((S_vv55Data *)v55)->f818);
            v57 = (int)v53;
            if (((S_vv55Data *)v55)->f184 != 0) {
                t12 = v55->v17();
                v53->f00 = (int)t12;
                v57 = (int)((int)v53 + 4);
            }
            strncpy_8c12b154((int)(v54), (void *)((int)v55 + 0x7e4), 0x18);
            v61 = (int)((int)v52 + 4);
            v62 = (int)(v54 + 0x18);
        }
        v68 = (int)(v51 + 1);
L_8c0426f6:;
        if ((unsigned short)g_8c467874 > v68) {
            v51 = (int)v68;
            v52 = (S_vv52 *)v61;
            v53 = (S_vv53 *)v57;
            v54 = (char *)v62;
            goto L_8c0426b4;
        }
        v47->f00 = g_8c467874;
        memset_8c12b880((int)(&(&frame)->f10), 0, 0x60);
        call_8c18e720((void *)(&(&frame)->f10), (void *)((void *)0x8c284865));
        call_8c18e720((void *)(((char *)(&frame) + 0x22)), (void *)((void *)0x8c284877));
        memcpy_8c12b77c((void *)(&(&frame)->f44), (void *)((void *)0x8c284899), 0x10);
        (&frame)->f54 = (void *)(void *)0x8c2848aa;
        (&frame)->f58 = (void *)(void *)0x8c2848ca;
        (&frame)->f5c = 1;
        (&frame)->f5e = 1;
        (&frame)->f60 = 0;
        (&frame)->f64 = 0;
        (&frame)->f68 = (S_c8c03ed10 *)self;
        (&frame)->f6c = 0x18188;
        call_8c377d84((void *)(((char *)t10 + 0x181a0)), (void *)(&(&frame)->f10));
        t13 = call_8c3727a0(7);
        if (t13 == 0) {
            v77 = (int)0;
        } else {
            t14 = call_8c37284a(7);
            if (t14 != 0) {
                v76 = (int)0;
            } else {
                t15 = bu_check_busy_8c372d98(7);
                if (t15 != 0) {
                    v73 = (int)0;
                } else {
                    t16 = net_call_8c37293e(7, 0);
                    if (0xc3 > t16) {
                        v72 = (int)0;
                    } else {
                        v72 = (int)1;
                    }
                    v73 = (int)v72;
                }
                v76 = (int)v73;
            }
            v77 = (int)v76;
        }
        v83 = (int)v47;
        v85 = (float)v27;
        if (v77 != 0) {
            t17 = vmu_save_file_timestamped_8c01024c(7, (int)((void *)0x8c284858), (int)(((char *)t10 + 0x181a0)), 0xc3);
            v83 = (int)v47;
            v85 = (float)v27;
            if (t17 == 0) {
                v78 = (float)0.0f;
                t18 = get_game_mode_8c01c25c();
                if (t18 == 0x10) {
                    operation_8c017ba8();
                }
                v82 = (int)0x50005;
                v83 = (int)-1;
                v84 = (float)v78;
L_8c04283a:;
                v85 = (float)(v84 + 1.0f);
                if ((v84 + 1.0f) > 585.0f) {
                    v85 = (float)585.0f;
                }
                call_8c38c8ac(v82, (int)((int)(585.0f - v85)), 4);
                wait_vsync_and_flip_8c380516();
                t19 = bu_check_busy_8c372d98(7);
                v84 = (float)v85;
                if (t19 == v83) {
                    goto L_8c04283a;
                }
                t20 = get_game_mode_8c01c25c();
                if (t20 == 0x10) {
                    operation_8c017bd4();
                }
                reset_state_8c391cc4();
            }
        }
        operation_8c03ed70((int)((void *)0x8c2f1b84));
        return 1;
    }
    return 0;
}
