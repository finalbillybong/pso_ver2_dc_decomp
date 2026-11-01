/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10922c
 * function: operation_8c10922c
 * language: c++
 * reference size: 756 bytes
 * compiled size: 760 bytes (+0.5%)
 * differing lines: 52 of 293 reference instruction lines
 * differing bytes: 653
 * provenance: generator draft (mode switch2ext)
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
typedef struct Frame Frame;
typedef struct S_g8c4d7bac S_g8c4d7bac;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_dc Arg0_dc;
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
    virtual void v76(int, Frame *);
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x72];
    Vector3 f164;
    char unknown170[0x19a];
    short f30a;
    char unknown30c[0x28];
    Arg0_334 *f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x16];
    Arg0_36c *f36c;
    char unknown370[0x1c];
    Arg0_38c *f38c;
    int f390;
    int f394;
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x4];
    Vector3 f3ac;
    float f3b8;
    float f3bc;
    float f3c0;
    char unknown3c4[0xc];
    int f3d0;
} ObjectData;
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x8];
    int f18;
};
struct S_g8c4d7bac {
    float f00;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
    Arg0_36c_8 *f08;
};
struct Frame {
    char unknown0[0xc];
};
extern int g_8c418244;
extern S_g8c4d7bac *g_8c4d7bac;
extern "C" int lookup_object_by_id(unsigned short);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void call_8c043f28(Object *, void *);
extern "C" void call_8c0c2ebc(Object *, float, float, Vector3);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void operation_8c04a43c(void *, void *, float);
extern "C" void call_8c109af8(Object *);
extern "C" void apply_actor_matrix_frame(void *);
extern "C" void create_effect_777c(void *, int);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void operation_8c10922c(Object *o)
{
    Frame frame;
    float v15;
    short v29;
    int v28;
    int t1;
    int t2;
    t1 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f354));
    ((ObjectData *)o)->f334 = (Arg0_334 *)(int)t1;
    if (((ObjectData *)o)->f398 == -1) {
    } else {
        if (((ObjectData *)o)->f398 != 0) {
            if (((ObjectData *)o)->f398 != 1) {
                return;
            }
        } else {
            ((ObjectData *)o)->fdc->f18 &= -0x700001;
            ((ObjectData *)o)->f34 &= -0x101;
            ((ObjectData *)o)->f34 &= -0x4040001;
            ((ObjectData *)o)->f3b8 = 0.0f;
            ((ObjectData *)o)->f3c0 = 0.0f;
            ((ObjectData *)o)->ff0 = 1;
            if (((ObjectData *)o)->f30a == 1) {
                ((ObjectData *)o)->f3bc = g_8c4d7bac->f00;
            } else {
                ((ObjectData *)o)->f3bc = 120.0f;
                ((ObjectData *)o)->f3d0 += 1;
            }
            t2 = call_8c24e644(0x30009, (void *)(((ObjectData *)o)->f38c));
            play_se_8c05fbf8(t2, (void *)(((char *)o + 0x3c)), 0, 0);
            if (((ObjectData *)o)->f334 != 0) {
                *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f334->f324;
            }
            ((ObjectData *)o)->f398 = 1;
            return;
        }
        if (((ObjectData *)o)->f334 != 0) {
            *(Vector3 *)&((ObjectData *)o)->f3ac = *(Vector3 *)&((ObjectData *)o)->f334->f324;
            *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f334->f324;
        } else {
            o->v66();
            return;
        }
        call_8c043f28(o, (void *)(((ObjectData *)o)->f36c->f08));
        call_8c0c2ebc(o, ((ObjectData *)o)->f36c->f04, ((ObjectData *)o)->fdc->f0c, *(Vector3 *)&((ObjectData *)o)->f3ac);
        ((ObjectData *)o)->f3b8 += ((ObjectData *)o)->f36c->f04;
        operation_8c01c5f0(o);
        operation_8c04a43c((void *)o, (void *)0, 0.0f);
        if (((ObjectData *)o)->f30a == 9) {
            ((ObjectData *)o)->f3c0 += ((ObjectData *)o)->f36c->f04;
            v15 = (float)((ObjectData *)o)->f3c0;
            if (!(20.0f > v15)) {
                ((ObjectData *)o)->f3c0 = v15 - 20.0f;
                call_8c109af8(o);
            }
        }
        if (((g_8c418244 & 3)) == 0) {
            apply_actor_matrix_frame((void *)o);
            o->v76(0x1f, (&frame));
            create_effect_777c((void *)(&frame), 0xf3);
            o->v76(0x27, (&frame));
            create_effect_777c((void *)(&frame), 0xf3);
        }
        refresh_follow_effect_8c052180((void *)o);
        if (((((ObjectData *)o)->fdc->f18 & 0x700000)) != 0) {
            ((ObjectData *)o)->f398 = -1;
            return;
        }
        if (((ObjectData *)o)->f3b8 < ((ObjectData *)o)->f3bc) {
            return;
        }
        ((ObjectData *)o)->f398 = -1;
        return;
    }
    v28 = (int)((ObjectData *)o)->f394;
    if (((((ObjectData *)o)->f3a4 & 1)) == 0) {
        v29 = (short)((ObjectData *)o)->f30a;
        if (v29 != v28) {
            ((ObjectData *)o)->f39c = (int)v29;
            ((ObjectData *)o)->f390 = (int)v28;
        }
    }
}
