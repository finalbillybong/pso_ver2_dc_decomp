/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1546d4
 * function: handle_6x18_vol_opt_phase_2_boss_actions_8c1546d4
 * language: c++
 * reference size: 728 bytes
 * compiled size: 724 bytes (-0.5%)
 * differing lines: 128 of 318 reference instruction lines
 * differing bytes: 455
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4da890 S_L8c4da890;
typedef struct S_L8c4da890_10 S_L8c4da890_10;
typedef struct S_L8c4da890_4 S_L8c4da890_4;
typedef struct S_L8c4da890_8 S_L8c4da890_8;
typedef struct S_L8c4da890_c S_L8c4da890_c;
typedef struct S_c8c053d84_dc S_c8c053d84_dc;
typedef struct Frame Frame;
typedef struct S_g8c4da890 S_g8c4da890;
typedef struct Object Object;
typedef struct S_x22400 S_x22400;
typedef struct S_x23632 S_x23632;
typedef struct S_x24416 S_x24416;
typedef struct S_x59440 S_x59440;
class S_c8c053d84;
struct Object {
    char unknown0[0x2];
    short f02;
};
struct S_x59440 {
    int f00;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
    int f18;
    char unknown1c[0x8];
    int f24;
    char unknown28[0x8];
};
class S_c8c053d84 {
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
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76(int, void *);
};
typedef struct S_c8c053d84Data {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x38];
    int f64;
    char unknown68[0x74];
    S_c8c053d84_dc *fdc;
} S_c8c053d84Data;
struct S_L8c4da890 {
    S_g8c4da890 *f00;
    S_L8c4da890_4 *f04;
    S_L8c4da890_8 *f08;
    S_L8c4da890_c *f0c;
    S_L8c4da890_10 *f10;
};
struct S_x22400 {
    int f00;
};
struct S_c8c053d84_dc {
    char unknown0[0x44];
    int f44;
    char unknown48[0x28];
    int f70;
    char unknown74[0x28];
    int f9c;
};
struct S_x23632 {
    int f00;
};
struct S_x24416 {
    int f00;
};
extern S_L8c4da890 g_8c4da890;
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void apply_actor_matrix_frame(void *);
extern "C" void TBreakUpMdl_create_8c108644(int, int, int, int, int);
extern "C" void hide_actor_model_entries(void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void handle_6x18_vol_opt_phase_2_boss_actions_8c1546d4(Object *o)
{
    Frame frame;
    int v1;
    S_c8c053d84 *t1;
    int v2;
    char *v6;
    int v8;
    int v7;
    int v3;
    int v5;
    int v4;
    t1 = lookup_object_by_id((unsigned short)(o->f02));
    if (t1 == 0) {
        return;
    }
    v1 = (int)0;
    while (4 > v1) {
        *(short *)((char *)((char *)t1 + 0x4c8) + (v1 << 1)) = *(short *)((char *)((char *)o + 0x4) + (v1 << 1));
        v1 = (int)(v1 + 1);
    }
    v2 = (int)0x10000;
    v7 = (int)0;
    v3 = (int)0x3a4;
    v4 = (int)-0x20000002;
    v6 = (char *)v2;
    v5 = (int)0x3000f;
    while (4 > v7) {
        v8 = (int)*(int *)((char *)((char *)t1 + 0x0) + (v3));
        switch (v8 & (int)(v6)) {
        case 0:
            if (*(short *)((char *)((char *)t1 + 0x4c8) + (v7 << 1)) > 0) {
            } else {
                switch (v7) {
                case 0:
                    if (((v8 & v2)) != 0) {
                        goto L_8c15492e;
                    }
                    ((S_x59440 *)((int)t1 + v3))->f00 |= v2;
                    apply_actor_matrix_frame((void *)t1);
                    t1->v76(2, &(&frame)->f24);
                    TBreakUpMdl_create_8c108644((int)((&g_8c4da890)->f00), (int)((void *)0x8c315fd8), (int)(((S_c8c053d84Data *)t1)->f28), (int)(&(&frame)->f24), (int)(((S_c8c053d84Data *)t1)->f64));
                    t1->v76(0x12, &(&frame)->f24);
                    TBreakUpMdl_create_8c108644((int)((&g_8c4da890)->f04), (int)((void *)0x8c315fd8), (int)(((S_c8c053d84Data *)t1)->f28), (int)(&(&frame)->f24), (int)(((S_c8c053d84Data *)t1)->f64));
                    hide_actor_model_entries((void *)((void *)0x8c4da8a4));
                    break;
                case 1:
                    if (((v8 & 0x20000)) != 0) {
                        goto L_8c15492e;
                    }
                    ((S_x22400 *)((int)t1 + v3))->f00 |= 0x20000;
                    ((S_c8c053d84Data *)t1)->fdc->f44 &= v4;
                    apply_actor_matrix_frame((void *)t1);
                    t1->v76(0x32, &(&frame)->f18);
                    TBreakUpMdl_create_8c108644((int)((&g_8c4da890)->f08), (int)((void *)0x8c315fd8), (int)(((S_c8c053d84Data *)t1)->f28), (int)(&(&frame)->f18), (int)(((S_c8c053d84Data *)t1)->f64));
                    hide_actor_model_entries((void *)((void *)0x8c4da924));
                    play_se_8c05fbf8(v5, (void *)(((char *)t1 + 0x3c)), 0, 1);
                    break;
                case 2:
                    if (((v8 & 0x40000)) != 0) {
                        goto L_8c15492e;
                    }
                    ((S_x23632 *)((int)t1 + v3))->f00 |= 0x40000;
                    ((S_c8c053d84Data *)t1)->fdc->f70 &= v4;
                    apply_actor_matrix_frame((void *)t1);
                    t1->v76(0x22, &(&frame)->f0c);
                    TBreakUpMdl_create_8c108644((int)((&g_8c4da890)->f0c), (int)((void *)0x8c315fd8), (int)(((S_c8c053d84Data *)t1)->f28), (int)(&(&frame)->f0c), (int)(((S_c8c053d84Data *)t1)->f64));
                    hide_actor_model_entries((void *)((void *)0x8c4da964));
                    play_se_8c05fbf8(v5, (void *)(((char *)t1 + 0x3c)), 0, 1);
                    break;
                case 3:
                    if (((v8 & 0x80000)) == 0) {
                        ((S_x24416 *)((int)t1 + v3))->f00 |= 0x80000;
                        ((S_c8c053d84Data *)t1)->fdc->f9c &= v4;
                        apply_actor_matrix_frame((void *)t1);
                        t1->v76(0x29, (&frame));
                        TBreakUpMdl_create_8c108644((int)((&g_8c4da890)->f10), (int)((void *)0x8c315fd8), (int)(((S_c8c053d84Data *)t1)->f28), (int)(((char *)t1 + 0x324)), (int)(((S_c8c053d84Data *)t1)->f64));
                        hide_actor_model_entries((void *)((void *)0x8c4da9a4));
                        play_se_8c05fbf8(v5, (void *)(((char *)t1 + 0x3c)), 0, 1);
                    }
                }
            }
        }
L_8c15492e:;
        v7 = (int)(v7 + 1);
        v6 = (char *)((int)(v6) << 1);
    }
}
