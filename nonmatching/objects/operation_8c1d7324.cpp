/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d7324
 * function: operation_8c1d7324
 * language: c++
 * reference size: 304 bytes
 * compiled size: 304 bytes (+0.0%)
 * differing lines: 92 of 142 reference instruction lines
 * differing bytes: 52
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_10 Arg0_30_10;
typedef struct Arg0_30_14 Arg0_30_14;
typedef struct Arg0_30_1c Arg0_30_1c;
typedef struct Arg0_30_20 Arg0_30_20;
typedef struct Arg0_30_28 Arg0_30_28;
typedef struct Arg0_30_2c Arg0_30_2c;
typedef struct Arg0_30_34 Arg0_30_34;
typedef struct Arg0_30_38 Arg0_30_38;
typedef struct Arg0_30_3c Arg0_30_3c;
typedef struct Arg0_70 Arg0_70;
typedef struct S_vv1 S_vv1;
typedef struct S_vv13 S_vv13;
typedef struct S_vv17 S_vv17;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv9 S_vv9;
class S_vv10;
class S_vv14;
class S_vv18;
class S_vv4;
struct Frame {
    char unknown0[0x4];
    short f04;
    short f06;
    short f08;
    short f0a;
    char unknownc[0x4];
};
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x3c];
    Arg0_70 *f70;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
    char unknown4[0xc];
    Arg0_30_10 *f10;
    Arg0_30_14 *f14;
    char unknown18[0x4];
    Arg0_30_1c *f1c;
    Arg0_30_20 *f20;
    char unknown24[0x4];
    Arg0_30_28 *f28;
    Arg0_30_2c *f2c;
    char unknown30[0x4];
    Arg0_30_34 *f34;
    Arg0_30_38 *f38;
    Arg0_30_3c *f3c;
};
struct S_vv1 {
    int f00;
    char unknown4[0x18];
    int f1c;
};
struct S_vv3 {
    char unknown0[0x20];
    int f20;
};
class S_vv4 {
public:
    char unknown0[0x4];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct S_vv4Data {
    char unknown0[0x24];
    float f24;
} S_vv4Data;
struct S_vv9 {
    char unknown0[0x20];
    int f20;
};
class S_vv10 {
public:
    char unknown0[0x4];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct S_vv10Data {
    char unknown0[0x24];
    float f24;
} S_vv10Data;
struct S_vv13 {
    char unknown0[0x20];
    int f20;
};
class S_vv14 {
public:
    char unknown0[0x4];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct S_vv14Data {
    char unknown0[0x24];
    float f24;
} S_vv14Data;
struct S_vv17 {
    char unknown0[0x20];
    int f20;
};
class S_vv18 {
public:
    char unknown0[0x4];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct S_vv18Data {
    char unknown0[0x24];
    float f24;
} S_vv18Data;
struct S_vv2 {
    int f00;
};
extern "C" void initialize_fields_8c207358(void *);
extern "C" void call_8c1c8ce4(void *, Frame *);
extern "C" int call_8c18e768(int, int);
extern "C" void call_8c1d7184(Object *);
extern "C" void operation_8c1e5f20(S_vv1 *, int);
extern "C" int operation_8c1d7324(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int v5;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv9 *v9;
    S_vv10 *v10;
    int v7;
    S_vv13 *v13;
    S_vv14 *v14;
    S_vv17 *v17;
    S_vv18 *v18;
    S_vv2 *v2;
    int t1;
    int t2;
    int t3;
    int t4;
    initialize_fields_8c207358((void *)(&frame));
    call_8c1c8ce4((void *)(o->f70), (Frame *)((&frame)));
    v1 = (S_vv1 *)o->f30->f00;
    v2 = (S_vv2 *)o->f30->f3c;
    v3 = (S_vv3 *)o->f30->f10;
    v4 = (S_vv4 *)o->f30->f14;
    v5 = (int)v1->f1c;
    t1 = call_8c18e768((int)((&frame)->f04), 0x64);
    v7 = (int)v5;
    if (v3->f20 < (short)t1) {
        v3->f20 += 1;
        ((S_vv4Data *)v4)->f24 = 0.0f;
        v7 = (int)(v5 + 1);
        v4->v3();
    }
    v9 = (S_vv9 *)o->f30->f1c;
    v10 = (S_vv10 *)o->f30->f20;
    t2 = call_8c18e768((int)((&frame)->f06), 0x64);
    if (v9->f20 < (short)t2) {
        v9->f20 += 1;
        ((S_vv10Data *)v10)->f24 = 0.0f;
        v7 = (int)(v7 + 1);
        v10->v3();
    }
    v13 = (S_vv13 *)o->f30->f28;
    v14 = (S_vv14 *)o->f30->f2c;
    t3 = call_8c18e768((int)((&frame)->f08), 0x64);
    if (v13->f20 < (short)t3) {
        v13->f20 += 1;
        ((S_vv14Data *)v14)->f24 = 0.0f;
        v7 = (int)(v7 + 1);
        v14->v3();
    }
    v17 = (S_vv17 *)o->f30->f34;
    v18 = (S_vv18 *)o->f30->f38;
    t4 = call_8c18e768((int)((&frame)->f0a), 0x64);
    if (v17->f20 < (short)t4) {
        v17->f20 += 1;
        ((S_vv18Data *)v18)->f24 = 0.0f;
        v7 = (int)(v7 + 1);
        v18->v3();
    }
    call_8c1d7184(o);
    if (v7 != v1->f1c) {
        operation_8c1e5f20(v1, v7);
        v1->f00 |= 2;
        v2->f00 &= -3;
        return 1;
    }
    return 0;
}
