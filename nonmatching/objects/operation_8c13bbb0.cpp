/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13bbb0
 * function: operation_8c13bbb0
 * language: c++
 * reference size: 688 bytes
 * compiled size: 688 bytes (+0.0%)
 * differing lines: 30 of 253 reference instruction lines
 * differing bytes: 36
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
typedef struct S_g8c4d9c0c S_g8c4d9c0c;
typedef struct S_g8c4d9c1c S_g8c4d9c1c;
typedef struct Arg0_3ac Arg0_3ac;
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
};
typedef struct ObjectData {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x2a6];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    float f3a8;
    Arg0_3ac *f3ac;
    int f3b0;
    int f3b4;
    char unknown3b8[0x28];
    int f3e0;
} ObjectData;
struct S_g8c4d9c0c {
    char unknown0[0x18];
    int f18;
};
extern int g_8c4d9b70;
extern S_g8c4d9c0c *g_8c4d9c0c;
extern S_g8c4d9c1c *g_8c4d9c1c;
extern "C" int angle_difference(int, int);
extern "C" int angle_step(int, int, int);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int call_8c18e8a0(int, int);
extern "C" float njCos_8c38c154(int);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njUnitMatrix_8c37b5c4(int);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be38c(int, void *, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" int call_8c18e768(int, int);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c13bbb0(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    float t5;
    float t6;
    int t7;
    switch (((ObjectData *)o)->f398) {
    case 0:
        ((ObjectData *)o)->f3a4 |= 0x10000;
        ((ObjectData *)o)->ff0 = 0;
        t1 = angle_difference((int)(((ObjectData *)o)->f64), (int)((int)((ObjectData *)o)->f3b4 + -0x4000));
        if ((int)(g_8c4d9c1c) >= t1) {
            ((ObjectData *)o)->f398 = 3;
            goto L_8c13bd9e;
        }
        ((ObjectData *)o)->f398 = 1;
        break;
    case 1:
        if (--((ObjectData *)o)->f3e0 > 0) {
            goto L_8c13bd9e;
        }
        ((ObjectData *)o)->f398 = 2;
        break;
    case 2:
        t2 = angle_step((int)(((ObjectData *)o)->f64), (int)((int)((ObjectData *)o)->f3b4 + -0x4000), (int)g_8c4d9c1c);
        ((ObjectData *)o)->f64 = (int)t2;
        t3 = angle_difference((int)(((ObjectData *)o)->f64), (int)((int)((ObjectData *)o)->f3b4 + -0x4000));
        if (!((int)(g_8c4d9c1c) >= t3)) {
            goto L_8c13bd9e;
        }
        ((ObjectData *)o)->f398 = 3;
        break;
    case 3:
        call_8c05fd7c(0x30005, o, (void *)(((char *)o + 0x3c)), 0, 0);
        operation_8c01c5f0(o);
        *(int *)((char *)o + 0x3ac) -= g_8c4d9c0c->f18;
        *(int *)((char *)o + 0x3b0) -= g_8c4d9c0c->f18;
        t1 = 0xffff;
        t4 = call_8c18e8a0((int)((int)(((ObjectData *)o)->f3ac) & t1), 0x2aaa);
        t4 = t4 + -0x1555;
        if (((((ObjectData *)o)->f3a4 & 0x20000)) != 0) {
            t5 = njCos_8c38c154(t4);
            ((ObjectData *)o)->f3a8 = 134.0f / t5;
            ((ObjectData *)o)->f40 = 50.0f;
        } else {
            t6 = njCos_8c38c154(t4);
            ((ObjectData *)o)->f3a8 = 128.0f / t6;
            ((ObjectData *)o)->f40 = 15.0f;
        }
        njPushMatrixEx_8c38ae68();
        ((ObjectData *)o)->f3c = ((ObjectData *)o)->f3a8;
        ((ObjectData *)o)->f44 = 0.0f;
        njUnitMatrix_8c37b5c4(0);
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f3ac));
        call_8c3be38c(0, (void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x3c)));
        njPopMatrixEx_8c38ad10();
        t7 = call_8c18e768((int)((unsigned short)((ObjectData *)o)->f3ac), 0x2aaa);
        ((ObjectData *)o)->f3b4 = (int)((float)(t7 * 0x3c + 0x78) * 65536.0f / 360.0f);
        if (-0x238e >= ((ObjectData *)o)->f3b0) {
            o->v66();
        }
    case -1:
        break;
    }
L_8c13bd9e:;
    operation_8c01c5f0(o);
    if (g_8c4d9b70 >= 0) {
        minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    }
}
