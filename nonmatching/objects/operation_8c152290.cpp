/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c152290
 * function: operation_8c152290
 * language: c++
 * reference size: 632 bytes
 * compiled size: 632 bytes (+0.0%)
 * differing lines: 14 of 242 reference instruction lines
 * differing bytes: 16
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
typedef struct S_g8c4daa20 S_g8c4daa20;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_498 Arg0_498;
class Object;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
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
    virtual int v41();
    virtual int v42();
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
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    char unknown48[0x30];
    Vector3 f78;
    char unknown84[0x100];
    Arg0_184 *f184;
    char unknown188[0x168];
    int f2f0;
    float f2f4;
    int f2f8;
    char unknown2fc[0xe];
    short f30a;
    char unknown30c[0x18];
    Block_p0_324 f324;
    char unknown330[0x60];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0xec];
    int f48c;
    char unknown490[0x8];
    Arg0_498 *f498;
    int f49c;
    float f4a0;
    float f4a4;
    float f4a8;
} ObjectData;
struct S_g8c4daa20 {
    char unknown0[0x4];
    char f04;
    char f05;
    char f06;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern int g_8c4d9b9c;
extern S_g8c4daa20 *g_8c4daa20;
extern "C" float njSin_8c37eb0c(void *);
extern "C" float call_8c12c714(float);
extern "C" int operation_8c03d338(void);
extern "C" void call_8c15564c(Object *);
extern "C" void operation_8c152508(void *);
extern "C" void operation_8c027090(int);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void update_context_blend(void *);
extern "C" void operation_8c152290(Object *o)
{
    int v5;
    float t1;
    float t2;
    float t3;
    float t4;
    int t5;
    int t6;
    int t7;
    t1 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f498));
    t2 = call_8c12c714(t1 * ((ObjectData *)o)->f4a0);
    g_8c4daa20->f06 = (int)t2;
    t3 = call_8c12c714(t1 * ((ObjectData *)o)->f4a4);
    g_8c4daa20->f05 = (int)t3;
    t4 = call_8c12c714(t1 * ((ObjectData *)o)->f4a8);
    g_8c4daa20->f04 = (int)t4;
    *(int *)&((ObjectData *)o)->f498 += ((ObjectData *)o)->f49c;
    t5 = operation_8c03d338();
    if (t5 == 1) {
        return;
    }
    t6 = o->v42();
    if (t6 != 0) {
        o->v71();
    } else {
        t7 = o->v41();
        if (t7 != 0) {
            if (g_8c4d9b9c != 0) {
                call_8c15564c(o);
                ((ObjectData *)o)->f34 &= -0x201;
                ((ObjectData *)o)->f3c.f04 = 0.0f;
            } else {
                o->v70();
            }
        }
    }
    if (((((ObjectData *)o)->f34 & 0x4000)) != 0) {
        if (--((ObjectData *)o)->f2f8 > 0) {
        } else {
            ((ObjectData *)o)->f2f0 = 0;
            ((ObjectData *)o)->f2f4 = 0.0f;
            ((ObjectData *)o)->f2f8 = 0;
            ((ObjectData *)o)->f34 &= -0x4001;
        }
        return;
    }
    if (((ObjectData *)o)->f30a != ((ObjectData *)o)->f390) {
        v5 = (int)((ObjectData *)o)->f398;
        if (v5 != -1) {
            ((ObjectData *)o)->f48c = (int)v5;
            ((ObjectData *)o)->f398 = -1;
            operation_8c152508((void *)o);
        }
        ((ObjectData *)o)->f39c = ((ObjectData *)o)->f30a;
        ((ObjectData *)o)->f30a = ((ObjectData *)o)->f390;
        ((ObjectData *)o)->f398 = 0;
    }
    operation_8c152508((void *)o);
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f324;
    operation_8c027090((int)o);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    update_context_blend((void *)(((char *)o + 0x4ac)));
    o->v64();
}
