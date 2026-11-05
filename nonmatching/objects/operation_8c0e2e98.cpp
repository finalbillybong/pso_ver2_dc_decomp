/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e2e98
 * function: operation_8c0e2e98
 * language: c++
 * reference size: 560 bytes
 * compiled size: 560 bytes (+0.0%)
 * differing lines: 164 of 239 reference instruction lines
 * differing bytes: 91
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_10 Arg0_30_10;
typedef struct Arg0_30_14 Arg0_30_14;
typedef struct Arg0_30_1c Arg0_30_1c;
typedef struct Arg0_30_24 Arg0_30_24;
typedef struct Arg0_30_28 Arg0_30_28;
typedef struct Arg0_30_8 Arg0_30_8;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv11 S_vv11;
typedef struct S_vv12 S_vv12;
typedef struct S_vv15 S_vv15;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv8 S_vv8;
typedef struct S_vv9 S_vv9;
class S_c8c021ef8;
class S_c8c021ef8 {
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
typedef struct S_c8c021ef8Data {
    char unknown0[0x184];
    int f184;
    char unknown188[0x10];
    short f198;
    short f19a;
    char unknown19c[0x194];
    short f330;
    short f332;
    char unknown334[0x124];
    float f458;
} S_c8c021ef8Data;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Arg0_30 {
    char unknown0[0x8];
    Arg0_30_8 *f08;
    int f0c;
    Arg0_30_10 *f10;
    Arg0_30_14 *f14;
    int f18;
    Arg0_30_1c *f1c;
    int f20;
    Arg0_30_24 *f24;
    Arg0_30_28 *f28;
    int f2c;
    int f30;
    char unknown34[0x4];
    int f38;
};
struct S_vv3 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x4];
    float f10;
    char unknown14[0x8];
    int f1c;
    int f20;
};
struct S_vv2 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x4];
    float f10;
    char unknown14[0x8];
    int f1c;
    int f20;
};
struct S_vv1 {
    char unknown0[0x20];
    float f20;
    float f24;
};
struct S_vv4 {
    char unknown0[0x24];
    int f24;
};
struct S_vv5 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x18];
    int f24;
};
struct S_vv10 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x4];
    float f10;
    char unknown14[0x8];
    int f1c;
    int f20;
};
struct S_vv9 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x4];
    float f10;
    char unknown14[0x8];
    int f1c;
    int f20;
};
struct S_vv8 {
    char unknown0[0x20];
    float f20;
    float f24;
};
struct S_vv11 {
    char unknown0[0x24];
    int f24;
};
struct S_vv12 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x18];
    int f24;
};
struct S_vv15 {
    char unknown0[0x20];
    int f20;
};
extern S_g8c418248 *g_8c418248;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void call_8c0f7830(S_vv1 *, int, float);
extern "C" void call_8c0e1f40(S_vv3 *);
extern "C" void operation_8c0fccb0(void *, int);
extern "C" void operation_8c0e2e98(Object *o)
{
    S_vv3 *v3;
    S_vv2 *v2;
    S_vv1 *v1;
    S_vv4 *v4;
    S_vv5 *v5;
    S_vv10 *v10;
    S_vv9 *v9;
    S_vv8 *v8;
    S_vv11 *v11;
    S_vv12 *v12;
    S_vv15 *v15;
    int v16;
    S_c8c021ef8 *t1;
    int t2;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0 || ((S_c8c021ef8Data *)t1)->f184 == 0) {
        return;
    }
    v1 = (S_vv1 *)o->f30->f18;
    v2 = (S_vv2 *)o->f30->f0c;
    v3 = (S_vv3 *)o->f30->f14;
    v4 = (S_vv4 *)o->f30->f08;
    v5 = (S_vv5 *)o->f30->f10;
    v3->f20 = ((S_c8c021ef8Data *)t1)->f198;
    v2->f20 = ((S_c8c021ef8Data *)t1)->f330;
    v1->f20 = (float)((S_c8c021ef8Data *)t1)->f198;
    v1->f24 = (float)((S_c8c021ef8Data *)t1)->f330;
    if ((float)v2->f20 > ((float)v3->f20 * 0.2f)) {
        call_8c0f7830(v1, -0xff00eb, 11.1f);
        v2->f1c = -1;
        v4->f24 = -1;
        v3->f1c = -1;
        v5->f24 = -1;
    } else {
        call_8c0f7830(v1, -0xd00e7, 11.1f);
        v4->f24 = v2->f1c = -0xd00e7;
        v5->f24 = v3->f1c = -0xd00e7;
    }
    call_8c0e1f40(v3);
    call_8c0e1f40((S_vv3 *)v2);
    v2->f08 = v2->f10 + 107.0f;
    v5->f08 = v2->f08;
    v3->f08 = v2->f08 + v3->f10 + 12.0f;
    v8 = (S_vv8 *)o->f30->f2c;
    v9 = (S_vv9 *)o->f30->f20;
    v10 = (S_vv10 *)o->f30->f28;
    v11 = (S_vv11 *)o->f30->f1c;
    v12 = (S_vv12 *)o->f30->f24;
    v10->f20 = ((S_c8c021ef8Data *)t1)->f19a;
    v9->f20 = ((S_c8c021ef8Data *)t1)->f332;
    v8->f20 = (float)((S_c8c021ef8Data *)t1)->f19a;
    v8->f24 = (float)((S_c8c021ef8Data *)t1)->f332;
    if ((float)v9->f20 > ((float)v10->f20 * 0.2f)) {
        call_8c0f7830((S_vv1 *)v8, -0xff3c06, 11.1f);
        v9->f1c = -1;
        v11->f24 = -1;
        v10->f1c = -1;
        v12->f24 = -1;
    } else {
        call_8c0f7830((S_vv1 *)v8, -0x3eec, 11.1f);
        v11->f24 = v9->f1c = -0x3eec;
        v12->f24 = v10->f1c = -0x3eec;
    }
    call_8c0e1f40((S_vv3 *)v10);
    call_8c0e1f40((S_vv3 *)v9);
    v9->f08 = v9->f10 + 96.0f;
    v12->f08 = v9->f08;
    v10->f08 = v9->f08 + v10->f10 + 12.0f;
    v15 = (S_vv15 *)o->f30->f38;
    t2 = t1->v17();
    v15->f20 = t2 + 1;
    v16 = (int)o->f30->f30;
    if (t1 != 0) {
        operation_8c0fccb0((void *)v16, (int)((int)((S_c8c021ef8Data *)t1)->f458));
    }
}
