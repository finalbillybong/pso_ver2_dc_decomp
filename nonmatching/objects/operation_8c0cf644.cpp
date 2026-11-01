/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cf644
 * function: operation_8c0cf644
 * language: c++
 * reference size: 1340 bytes
 * compiled size: 1348 bytes (+0.6%)
 * differing lines: 118 of 456 reference instruction lines
 * differing bytes: 940
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fab8 S_g8c46fab8;
typedef struct S_g8c46fab8_24 S_g8c46fab8_24;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct Arg0_3c4 Arg0_3c4;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv11 S_vv11;
typedef struct S_vv35 S_vv35;
typedef struct S_vv45 S_vv45;
class Object;
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
    Arg0_64 *f64;
    char unknown68[0x84];
    int fec;
    short ff0;
    char unknownf2[0x72];
    Vector3 f164;
    char unknown170[0x19a];
    short f30a;
    char unknown30c[0x28];
    Arg0_334 *f334;
    char unknown338[0x20];
    short f358;
    char unknown35a[0x12];
    Arg0_36c *f36c;
    float f370;
    char unknown374[0x10];
    int f384;
    char unknown388[0x8];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x2];
    short f3aa;
    char unknown3ac[0x2];
    short f3ae;
    char unknown3b0[0x8];
    int f3b8;
    char unknown3bc[0x8];
    Arg0_3c4 *f3c4;
} ObjectData;
struct S_vv11 {
    Vector3 f00;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_36c {
    char unknown0[0x8];
    Arg0_36c_8 *f08;
};
struct S_g8c46fab8 {
    char unknown0[0x1c];
    int f1c;
    char unknown20[0x4];
    S_g8c46fab8_24 *f24;
};
struct S_vv35 {
    char unknown0[0x4];
    short f04;
};
struct S_vv45 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void call_8c043f28(Object *, void *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" void operation_8c0521a0(void *);
extern "C" void operation_8c05228c(void *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void apply_actor_matrix_frame(void *);
extern "C" int create_effect_769c(void *, int);
extern "C" void call_8c0a7608(void *, void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void call_8c0effd0(int, void *, void *, Object *, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c0cf644(Object *o)
{
    int v1;
    int v7;
    int v8;
    S_vv11 *v11;
    int v19;
    int v22;
    S_vv35 *v35;
    int v38;
    int v40;
    S_vv45 *v45;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    switch (((ObjectData *)o)->f398) {
    case 0:
        if (((ObjectData *)o)->f3b8 != 0) {
            if (((((ObjectData *)o)->f3a4 & 1)) == 0) {
                v1 = (int)((ObjectData *)o)->f30a;
                if (v1 != 1) {
                    ((ObjectData *)o)->f39c = (int)v1;
                    ((ObjectData *)o)->f390 = 1;
                }
            }
            ((ObjectData *)o)->f398 = -1;
            return;
        }
        ((ObjectData *)o)->f3aa = (int)((ObjectData *)o)->f370;
        if (((ObjectData *)o)->f3aa == 0) {
            ((ObjectData *)o)->f3aa = 2;
        }
        if (((ObjectData *)o)->f3ae != 0) {
            v7 = (int)9;
        } else {
            v7 = (int)8;
        }
        ((ObjectData *)o)->ff0 = v7;
    case 1:
        if (((ObjectData *)o)->f3aa == 1) {
            if (((ObjectData *)o)->f3ae != 0) {
                v8 = (int)0x12;
            } else {
                v8 = (int)0x11;
            }
            ((ObjectData *)o)->ff0 = v8;
        }
        ((ObjectData *)o)->f398 = 2;
    case 2:
        if (((ObjectData *)o)->f334 != 0) {
            v11 = (S_vv11 *)((char *)o + 0x164);
            *(Vector3 *)&v11->f00 = *(Vector3 *)&((ObjectData *)o)->f334->f324;
            call_8c043f28(o, (void *)(((ObjectData *)o)->f36c->f08));
        }
        operation_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        operation_8c0521a0((void *)o);
        operation_8c05228c((void *)o);
        if (((ObjectData *)o)->f3ae != 0) {
            if (((ObjectData *)o)->ff0 == 9) {
                v22 = (int)0;
                goto L_8c0cf806;
            }
            t3 = check_range_8c01cf68((void *)o, 2.0f);
            v22 = (int)t3;
        } else {
            v19 = (int)0;
            if (((ObjectData *)o)->ff0 != 8) {
                t6 = check_range_8c01cf68((void *)o, 2.0f);
                v19 = (int)t6;
            }
            v22 = (int)v19;
        }
L_8c0cf806:;
        if (v22 == 0) {
            return;
        }
        apply_actor_matrix_frame((void *)o);
        o->v76(0x22, ((char *)o + 0x42c));
        t1 = create_effect_769c((void *)(((char *)o + 0x42c)), 0x119);
        ((ObjectData *)o)->f3c4 = (Arg0_3c4 *)(int)t1;
        ((ObjectData *)o)->f358 = (*(S_g8c46fab8 **)((char *)0x8c46fab8 + (((ObjectData *)o)->f384 << 2)))->f1c;
        ((ObjectData *)o)->f398 = 3;
        return;
    case 3:
        if (((ObjectData *)o)->f334 != 0) {
            *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f334->f324;
            call_8c043f28(o, (void *)(((ObjectData *)o)->f36c->f08));
        }
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        operation_8c0521a0((void *)o);
        operation_8c05228c((void *)o);
        apply_actor_matrix_frame((void *)o);
        o->v76(0x22, ((char *)o + 0x42c));
        if (((ObjectData *)o)->f3c4 != 0) {
            call_8c0a7608((void *)(((ObjectData *)o)->f3c4), (void *)(((char *)o + 0x42c)));
        }
        if ((short)--((ObjectData *)o)->f358 > 0) {
            return;
        }
        ((ObjectData *)o)->f3aa -= 1;
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x70);
        if (t2 != 0) {
            call_8c0effd0(t2, (void *)(((char *)o + 0x42c)), (void *)(((ObjectData *)o)->f64), o, (void *)((*(S_g8c46fab8 **)((char *)0x8c46fab8 + (((ObjectData *)o)->f384 << 2)))->f24));
        }
        ((ObjectData *)o)->f398 = 4;
        if (((ObjectData *)o)->f3c4 != 0) {
            v35 = (S_vv35 *)((ObjectData *)o)->f3c4;
            v35->f04 |= 1;
            ((ObjectData *)o)->f3c4 = (Arg0_3c4 *)0;
        }
        play_se_8c05fbf8(0x30004, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 4:
        operation_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        operation_8c0521a0((void *)o);
        operation_8c05228c((void *)o);
        if (((ObjectData *)o)->f3aa > 0) {
            if (((ObjectData *)o)->f3ae != 0) {
                t4 = check_range_8c01cf68((void *)o, 6.0f);
                v38 = (int)t4;
            } else {
                t5 = check_range_8c01cf68((void *)o, 7.0f);
                v38 = (int)t5;
            }
            if (v38 == 0) {
                return;
            }
            ((ObjectData *)o)->f358 = 0xf;
            ((ObjectData *)o)->f398 = 5;
            return;
        }
        if (((ObjectData *)o)->fec == 4) {
            return;
        }
        ((ObjectData *)o)->f358 = 0x1e;
        ((ObjectData *)o)->f398 = 6;
        return;
    case 5:
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        operation_8c0521a0((void *)o);
        operation_8c05228c((void *)o);
        *(short *)((char *)o + 0x358) -= 1;
        if (((ObjectData *)o)->f358 > 0) {
            return;
        }
        ((ObjectData *)o)->f398 = 1;
        return;
    case 6:
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        operation_8c0521a0((void *)o);
        operation_8c05228c((void *)o);
        *(short *)((char *)o + 0x358) -= 1;
        if (((ObjectData *)o)->f358 > 0) {
            return;
        }
        if (((ObjectData *)o)->f3aa > 0) {
            ((ObjectData *)o)->f398 = 1;
            return;
        }
        if (((((ObjectData *)o)->f3a4 & 1)) == 0) {
            v40 = (int)((ObjectData *)o)->f30a;
            if (v40 != 1) {
                ((ObjectData *)o)->f39c = (int)v40;
                ((ObjectData *)o)->f390 = 1;
            }
        }
        ((ObjectData *)o)->f398 = -1;
        return;
    case -1:
        if (((ObjectData *)o)->f3c4 != 0) {
            v45 = (S_vv45 *)((ObjectData *)o)->f3c4;
            v45->f04 |= 1;
            ((ObjectData *)o)->f3c4 = (Arg0_3c4 *)0;
        }
        return;
    }
}
