/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c126650
 * function: operation_8c126650
 * language: c++
 * reference size: 632 bytes
 * compiled size: 628 bytes (-0.6%)
 * differing lines: 84 of 263 reference instruction lines
 * differing bytes: 456
 * provenance: generator draft (mode retflip2)
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
typedef struct Frame Frame;
typedef struct S_g8c4d83a0 S_g8c4d83a0;
typedef struct S_g8c4d83a0_42c S_g8c4d83a0_42c;
typedef struct Arg0_3e0 Arg0_3e0;
typedef struct S_x45616_0 S_x45616_0;
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
};
typedef struct ObjectData {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x6];
    int f28;
    char unknown2c[0x4];
    short f30;
    char unknown32[0x6];
    int f38;
    char unknown3c[0x48];
    int f84;
    char unknown88[0x68];
    short ff0;
    char unknownf2[0x23e];
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x10];
    int f36c;
    char unknown370[0x14];
    int f384;
    char unknown388[0x4];
    int f38c;
    char unknown390[0x14];
    int f3a4;
    char unknown3a8[0x48];
    int f3f0;
    short f3f4;
    short f3f6;
} ObjectData;
struct S_g8c4d83a0 {
    char unknown0[0x42c];
    S_g8c4d83a0_42c *f42c;
};
struct S_g8c4d83a0_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
    char unknown10[0x8];
    int f18;
    int f1c;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    char unknownc[0x8];
    int f14;
    char unknown18[0x8];
};
extern "C" int call_8c18e768(int, int);
extern "C" void call_8c127074(Object *, int, void *, void *);
extern "C" void operation_8c127a04(int, int, int, int, int, int);
extern "C" int operation_8c012a14(int);
extern "C" void place_actor_8c128930(void *, void *, int, int);
extern "C" void set_330(void *, short);
extern "C" void operation_8c127654(Object *);
extern "C" void operation_8c126650(Object *o, int a1)
{
    Frame frame;
    int t2;
    int v2;
    int v7;
    int v13;
    int v3;
    int v9;
    int v4;
    int v8;
    int v12;
    int v5;
    int v6;
    int t1;
    int v14;
    int t3;
    int t4;
    if (a1 == 1) {
        ((ObjectData *)o)->f3a4 |= 0x1000000;
        ((ObjectData *)o)->f38c = 0x28;
        ((ObjectData *)o)->ff0 = 0;
        ((ObjectData *)o)->f38 = (int)((*(S_g8c4d83a0 **)0x8c4d83a0)->f42c->f18);
        ((ObjectData *)o)->f28 = (int)((*(S_g8c4d83a0 **)0x8c4d83a0)->f42c->f1c);
        ((ObjectData *)o)->f3f6 = 0;
        o->v64();
    } else {
        *(int *)((char *)o + 0x3a4) &= -0x1000001;
        ((ObjectData *)o)->f38c = 0x27;
        ((ObjectData *)o)->ff0 = 5;
        ((ObjectData *)o)->f38 = (int)((*(S_g8c4d83a0 **)0x8c4d83a0)->f42c->f08);
        ((ObjectData *)o)->f28 = (int)((*(S_g8c4d83a0 **)0x8c4d83a0)->f42c->f0c);
        o->v64();
        if (((((ObjectData *)o)->f3a4 & 0x40000)) == 0) {
            t1 = call_8c18e768((int)(((ObjectData *)o)->f330), (int)(((ObjectData *)o)->f3f4 + 1));
            ((ObjectData *)o)->f330 = t1;
            if (!(((ObjectData *)o)->f330 > 0)) {
                ((ObjectData *)o)->f330 = 1;
            }
            v2 = (int)0x330;
            ((ObjectData *)o)->f35a = *(short *)((char *)((char *)o + 0x0) + (v2));
            v7 = (int)v2;
            if (((ObjectData *)o)->f84 == 0) {
                goto L_8c126824;
            }
            v3 = (int)0;
            ((ObjectData *)o)->f3a4 |= 0x40000;
            while (4 > v3) {
                v4 = (int)(((ObjectData *)o)->f20 + 1 + v3);
                v5 = (int)(((ObjectData *)o)->f30 + 1 + v3);
                call_8c127074(o, v3, (void *)(&(&frame)->f14), (void *)(&(&frame)->f04));
                operation_8c127a04((int)o, v4, v5, (int)(&(&frame)->f14), (int)((&frame)->f04), (int)(*(short *)((char *)((char *)o + 0x0) + (v2))));
                v3 = (int)(v3 + 1);
            }
            v9 = (int)v3;
        } else {
            v6 = (int)0x330;
            v7 = (int)0;
            v8 = (int)0x3f4;
            v9 = (int)0;
            while (*(short *)((char *)((char *)o + 0x0) + (v8)) > v9) {
                t2 = operation_8c012a14((int)(*(Arg0_3e0 **)((char *)((char *)o + 0x3e0) + (v9 << 2))));
                if (t2 != 0) {
                    call_8c127074(o, v9, (void *)(&(&frame)->f08), (void *)(&frame));
                    place_actor_8c128930((void *)t2, (void *)(&(&frame)->f08), (int)((&frame)->f00), (int)(*(short *)((char *)((char *)o + 0x0) + (v6))));
                    v7 = (int)(v7 + 1);
                }
                v9 = (int)(v9 + 1);
            }
            if (v7 > 0) {
                t3 = call_8c18e768((int)(((ObjectData *)o)->f330), (int)(v7 + 1));
                ((ObjectData *)o)->f330 = t3;
                v14 = (int)0;
                v12 = (int)0x3e0;
                v13 = (int)0x3f4;
                while (*(short *)((char *)((char *)o + 0x0) + (v13)) > v14) {
                    t4 = operation_8c012a14((int)(*(S_x45616_0 **)((char *)((char *)((int)o + v12) + 0x0) + (v14 << 2))));
                    if (t4 != 0) {
                        set_330((void *)t4, ((ObjectData *)o)->f330);
                    }
                    v14 = (int)(v14 + 1);
                }
                v9 = (int)0x330;
                v7 = (int)v13;
            }
        }
L_8c126824:;
        ((ObjectData *)o)->f3f4 = 0;
    }
    ((ObjectData *)o)->f36c = a1 * 0x1c + 0x8c312230;
    operation_8c127654(o);
    ((ObjectData *)o)->f384 = a1;
    ((ObjectData *)o)->f3f0 = 0;
}
