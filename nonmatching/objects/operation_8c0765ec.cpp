/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0765ec
 * function: operation_8c0765ec
 * language: c++
 * reference size: 268 bytes
 * compiled size: 264 bytes (-1.5%)
 * differing lines: 62 of 116 reference instruction lines
 * differing bytes: 213
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_13c Arg0_13c;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_s4 S_vv11_s4;
typedef struct S_vv9 S_vv9;
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
    virtual void v58(Arg0_13c *, int, int, float, int);
};
typedef struct ObjectData {
    char unknown0[0xe4];
    short fe4;
    char unknowne6[0x56];
    Arg0_13c *f13c;
    char unknown140[0xbc];
    int f1fc;
} ObjectData;
struct Arg0_13c {
    char unknown0[0x754];
    short f754;
};
struct S_vv11_s4 {
    char unknown0[0x2];
    short f02;
};
struct S_vv11 {
    char unknown0[0x4];
    short f04;
};
struct S_vv9 {
    int f00;
};
extern "C" int operation_8c1aaabc(void *);
extern "C" int operation_8c0541b4(short, int);
extern "C" float squared_distance_xz(void *, void *);
extern "C" void operation_8c0765ec(Object *o, float f0)
{
    int v1;
    int t2;
    int v10;
    S_vv11 *v11;
    int v21;
    int v12;
    int v27;
    S_vv9 *v9;
    int v30;
    int t1;
    int v8;
    float t3;
    int t4;
    v1 = (int)((ObjectData *)o)->f13c;
    if (v1 != 0 && ((ObjectData *)o)->fe4 == 2) {
        if (((((ObjectData *)o)->f1fc & 0x20)) != 0) {
            t1 = operation_8c1aaabc((void *)(v1 + 0x754));
            if ((short)t1 == 2) {
                ((ObjectData *)o)->f13c->f754 = 1;
            }
        }
        v8 = (int)0x754;
        v9 = (S_vv9 *)((int)((ObjectData *)o)->f13c + v8 + 0x30);
        if (v9 != 0) {
            v21 = (int)0;
            goto L_8c0766ae;
            v10 = (int)0;
L_8c07664c:;
            v11 = (S_vv11 *)v9;
            v11 = (S_vv11 *)((int)v11 + (v10 << 2));
            v12 = (int)((S_vv11_s4 *)((char *)v11 + 0x4))->f02;
            t2 = operation_8c0541b4(v11->f04, v12);
            if (t2 != 0) {
                t3 = squared_distance_xz((void *)(((char *)((ObjectData *)o)->f13c + 0x3c)), (void *)(t2 + 0x3c));
                if (f0 > t3) {
                    t4 = operation_8c1aaabc((void *)((int)((ObjectData *)o)->f13c + v8));
                    o->v58(((ObjectData *)o)->f13c, t2, (short)t4, *(float *)((char *)0x8c2e73b4 + (*(short *)((char *)((char *)((ObjectData *)o)->f13c + 0x0) + (v8)) << 2)), v12);
                }
            }
            v21 = (int)(v10 + 1);
L_8c0766ae:;
            v27 = (int)v9->f00;
            if (v27 < 0 || v27 > 0xa) {
                v30 = (int)0;
            } else {
                v30 = (int)v27;
            }
            v10 = (int)v21;
            if (v21 != v30) {
                goto L_8c07664c;
            }
        }
    }
}
