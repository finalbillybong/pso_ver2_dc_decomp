/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c109ecc
 * function: operation_8c109ecc
 * language: c++
 * reference size: 1240 bytes
 * compiled size: 1240 bytes (+0.0%)
 * differing lines: 24 of 547 reference instruction lines
 * differing bytes: 28
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
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct Short4 {
    unsigned short s[4];
} Short4;
typedef struct S_L8c30bb00 S_L8c30bb00;
typedef struct Frame Frame;
typedef struct S_g8c4d7bac S_g8c4d7bac;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_38c Arg0_38c;
class Object;
typedef struct Block_frame_50 {
    int f00;
    char unknown4[0x4];
    int f08;
    char unknownc[0xc];
} Block_frame_50;
typedef struct Block_frame_38 {
    int f00;
    char unknown4[0x4];
    int f08;
    char unknownc[0xc];
} Block_frame_38;
typedef struct Block_frame_20 {
    int f00;
    char unknown4[0x4];
    int f08;
    char unknownc[0xc];
} Block_frame_20;
typedef struct Block_frame_8 {
    int f00;
    char unknown4[0x4];
    int f08;
    char unknownc[0xc];
} Block_frame_8;
struct S_g8c4d7bac {
    char unknown0[0x1c];
    int f1c;
};
struct Frame {
    unsigned short f00;
    unsigned short f02;
    unsigned short f04;
    unsigned short f06;
    Block_frame_8 f08;
    Block_frame_20 f20;
    Block_frame_38 f38;
    Block_frame_50 f50;
    int f68;
    char unknown6c[0x8];
};
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
typedef struct ObjectData {
    char unknown0[0x64];
    int f64;
    char unknown68[0x324];
    Arg0_38c *f38c;
    char unknown390[0x34];
    int f3c4;
    char unknown3c8[0xc];
    int f3d4;
    int f3d8;
    int f3dc;
    int f3e0;
    int f3e4;
} ObjectData;
struct S_L8c30bb00 {
    short f00;
    short f02;
    short f04;
    short f06;
};
extern Block24 g_8c30baa0;
extern Block24 g_8c30bab8;
extern Block24 g_8c30bad0;
extern Block24 g_8c30bae8;
extern S_g8c4d7bac *g_8c4d7bac;
extern int g_8c4d7c58;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c30bb00 g_8c30bb00;
extern "C" void apply_actor_matrix_frame(void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TObjGyaranzoMissile_ctor_8c111ec8(int, Object *, void *, unsigned short);
extern "C" void create_effect_777c(void *, int);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c109ecc(Object *o)
{
    Frame frame;
    int v1;
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
    int t14;
    int t15;
    int t16;
    int t17;
    g_8c4d7c58 = g_8c4d7bac->f1c + 0x96;
    apply_actor_matrix_frame((void *)o);
    *(Block24 *)&(&frame)->f50 = *(Block24 *)&g_8c30baa0;
    (&frame)->f50.f00 = (int)(&(&frame)->f68);
    (&frame)->f50.f08 = (int)((ObjectData *)o)->f64 + 0x800;
    *(Block24 *)&(&frame)->f38 = *(Block24 *)&g_8c30bab8;
    (&frame)->f38.f00 = (int)(&(&frame)->f68);
    (&frame)->f38.f08 = (int)((ObjectData *)o)->f64 + 0x800;
    *(Block24 *)&(&frame)->f20 = *(Block24 *)&g_8c30bad0;
    (&frame)->f20.f00 = (int)(&(&frame)->f68);
    (&frame)->f20.f08 = (int)((ObjectData *)o)->f64 + -0x800;
    *(Block24 *)&(&frame)->f08 = *(Block24 *)&g_8c30bae8;
    (&frame)->f08.f00 = (int)(&(&frame)->f68);
    (&frame)->f08.f08 = (int)((ObjectData *)o)->f64 + -0x800;
    *(Short4 *)&(&frame)->f00 = *(Short4 *)&g_8c30bb00;
    (&frame)->f00 = ((ObjectData *)o)->f3d8;
    v1 = (int)((ObjectData *)o)->f3e4;
    if (v1 > 1) {
        (&frame)->f02 = ((ObjectData *)o)->f3dc;
        if (v1 > 2) {
            (&frame)->f04 = ((ObjectData *)o)->f3d4;
            if (v1 > 3) {
                (&frame)->f06 = ((ObjectData *)o)->f3e0;
            }
        }
    }
    o->v76(0x10, &(&frame)->f68);
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
    if (t1 != 0) {
        TObjGyaranzoMissile_ctor_8c111ec8(t1, o, (void *)(&(&frame)->f50), (&frame)->f00);
    }
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
    if (t2 != 0) {
        TObjGyaranzoMissile_ctor_8c111ec8(t2, o, (void *)(&(&frame)->f38), (&frame)->f02);
    }
    create_effect_777c((void *)(&(&frame)->f68), 0xf3);
    o->v76(0x14, &(&frame)->f68);
    t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
    if (t3 != 0) {
        TObjGyaranzoMissile_ctor_8c111ec8(t3, o, (void *)(&(&frame)->f20), (&frame)->f00);
    }
    t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
    if (t4 != 0) {
        TObjGyaranzoMissile_ctor_8c111ec8(t4, o, (void *)(&(&frame)->f08), (&frame)->f02);
    }
    create_effect_777c((void *)(&(&frame)->f68), 0xf3);
    if (!(((ObjectData *)o)->f3c4 >= 1)) {
    } else {
        o->v76(0x11, &(&frame)->f68);
        t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
        if (t5 != 0) {
            TObjGyaranzoMissile_ctor_8c111ec8(t5, o, (void *)(&(&frame)->f50), (&frame)->f00);
        }
        t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
        if (t6 != 0) {
            TObjGyaranzoMissile_ctor_8c111ec8(t6, o, (void *)(&(&frame)->f38), (&frame)->f02);
        }
        create_effect_777c((void *)(&(&frame)->f68), 0xf3);
        o->v76(0x15, &(&frame)->f68);
        t7 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
        if (t7 != 0) {
            goto L_8c10a194;
L_8c10a194:;
            TObjGyaranzoMissile_ctor_8c111ec8(t7, o, (void *)(&(&frame)->f20), (&frame)->f00);
        }
        t8 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
        if (t8 != 0) {
            TObjGyaranzoMissile_ctor_8c111ec8(t8, o, (void *)(&(&frame)->f08), (&frame)->f02);
        }
        create_effect_777c((void *)(&(&frame)->f68), 0xf3);
    }
    if (!(((ObjectData *)o)->f3c4 >= 2)) {
    } else {
        o->v76(0x12, &(&frame)->f68);
        t9 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
        if (t9 != 0) {
            TObjGyaranzoMissile_ctor_8c111ec8(t9, o, (void *)(&(&frame)->f50), (&frame)->f04);
        }
        t10 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
        if (t10 != 0) {
            TObjGyaranzoMissile_ctor_8c111ec8(t10, o, (void *)(&(&frame)->f38), (&frame)->f06);
        }
        create_effect_777c((void *)(&(&frame)->f68), 0xf3);
        o->v76(0x16, &(&frame)->f68);
        t11 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
        if (t11 != 0) {
            TObjGyaranzoMissile_ctor_8c111ec8(t11, o, (void *)(&(&frame)->f20), (&frame)->f04);
        }
        t12 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
        if (t12 != 0) {
            TObjGyaranzoMissile_ctor_8c111ec8(t12, o, (void *)(&(&frame)->f08), (&frame)->f06);
        }
        create_effect_777c((void *)(&(&frame)->f68), 0xf3);
        o->v76(0x13, &(&frame)->f68);
        t13 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
        if (t13 != 0) {
            TObjGyaranzoMissile_ctor_8c111ec8(t13, o, (void *)(&(&frame)->f50), (&frame)->f04);
        }
        t14 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
        if (t14 != 0) {
            TObjGyaranzoMissile_ctor_8c111ec8(t14, o, (void *)(&(&frame)->f38), (&frame)->f06);
        }
        create_effect_777c((void *)(&(&frame)->f68), 0xf3);
        o->v76(0x17, &(&frame)->f68);
        t15 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
        if (t15 != 0) {
            TObjGyaranzoMissile_ctor_8c111ec8(t15, o, (void *)(&(&frame)->f20), (&frame)->f04);
        }
        t16 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x114);
        if (t16 != 0) {
            TObjGyaranzoMissile_ctor_8c111ec8(t16, o, (void *)(&(&frame)->f08), (&frame)->f06);
        }
        create_effect_777c((void *)(&(&frame)->f68), 0xf3);
    }
    t17 = call_8c24e644(0x3000a, (void *)(((ObjectData *)o)->f38c));
    play_se_8c05fbf8(t17, (void *)(((char *)o + 0x3c)), 0, 0);
}
