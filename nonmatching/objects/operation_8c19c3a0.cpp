/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19c3a0
 * function: operation_8c19c3a0
 * language: c++
 * reference size: 580 bytes
 * compiled size: 580 bytes (+0.0%)
 * differing lines: 98 of 239 reference instruction lines
 * differing bytes: 155
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbc20 S_g8c4dbc20;
typedef struct S_g8c4dbc20_0 S_g8c4dbc20_0;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_bc8 Arg0_28_bc8;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_388 Arg0_388;
typedef struct Arg0_394 Arg0_394;
typedef struct S_vv13 S_vv13;
typedef struct S_vv13_90 S_vv13_90;
typedef struct S_vv2_0 S_vv2_0;
class S_vv3;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    char unknown2c[0x34c];
    int f378;
    int f37c;
    int f380;
    char unknown384[0x4];
    Arg0_388 *f388;
    char unknown38c[0x8];
    Arg0_394 *f394;
};
struct Arg0_28 {
    char unknown0[0xbc8];
    Arg0_28_bc8 *fbc8;
};
struct Frame {
    char unknown0[0x7c];
};
struct S_g8c4dbc20 {
    S_g8c4dbc20_0 *f00;
};
struct S_g8c4dbc20_0 {
    char unknown0[0xbc];
    int fbc;
};
struct Arg0_388 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0x2];
    short f84;
};
struct S_vv13 {
    char unknown0[0x90];
    S_vv13_90 *f90;
};
class S_vv3 {
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
    virtual int v31(int);
};
typedef struct S_vv3Data {

} S_vv3Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dbc20 *g_8c4dbc20;
extern "C" int operation_8c16a718(void *, int);
extern "C" void call_8c220b80(int, int);
extern "C" int operation_8c19fb18(int);
extern "C" void operation_8c1cd6f4(void *, int, int);
extern "C" void operation_8c1cdc30(void *);
extern "C" void operation_8c1cdcdc(void *);
extern "C" void operation_8c1cdc94(void *);
extern "C" void operation_8c1cdd08(void *);
extern "C" void operation_8c19a044(void *, int);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TWindowHelpItem_ctor_8c1d5b24(void *);
extern "C" void operation_8c1d5dfc(void *, int);
extern "C" void operation_8c19c3a0(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    S_vv3 *v3;
    char *v23;
    int v8;
    int v9;
    int v11;
    int v12;
    int v10;
    S_vv13 *v13;
    int v19;
    int t1;
    int t2;
    int t3;
    int t4;
    o->f37c = 1;
    t1 = operation_8c16a718((void *)(o->f28->fbc8), (int)(&frame));
    o->f378 = 0;
    v1 = (int)0;
    while (t1 > v1) {
        v2 = (int)(v1 << 2);
        v3 = (S_vv3 *)*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + ((int)((&frame))));
        if (v3 != 0) {
            t2 = v3->v31(o->f378 * 0x1c + (int)o + 0x30);
            if (t2 != 0) {
                *(int *)((char *)((char *)o + 0x2c) + (o->f378 * 0x1c)) = (int)(*(int *)((char *)((char *)v2 + 0x0) + ((int)((&frame)))));
                *(int *)((char *)((char *)o + 0x44) + (o->f378 * 0x1c)) = (int)v1;
                *(int *)((char *)o + 0x378) += 1;
            }
        }
        v1 = (int)(v1 + 1);
    }
    if (o->f378 != 0) {
        o->f24 = 1;
    } else {
        call_8c220b80(0x48, 1);
        o->f24 = 7;
        return;
    }
    if (o->f388 == 0) {
        v23 = (char *)g_8c4dbc20->f00->fbc;
        t3 = operation_8c19fb18((int)(v23));
        o->f388 = (Arg0_388 *)(int)t3;
        v9 = (int)0;
        v8 = (int)0x378;
        while (*(int *)((char *)((char *)o + 0x0) + (v8)) > v9) {
            operation_8c1cd6f4((void *)(o->f388), (int)(*(Arg0_2c **)((char *)((char *)o + 0x2c) + (v9 * 0x1c))), v9);
            v9 = (int)(v9 + 1);
        }
        operation_8c1cdc30((void *)(o->f388));
        v19 = (int)o->f388->f84;
    } else {
        operation_8c1cdcdc((void *)(o->f388));
        operation_8c1cdc94((void *)(o->f388));
        v10 = (int)0x388;
        v12 = (int)0;
        v11 = (int)0x378;
        while (*(int *)((char *)((char *)o + 0x0) + (v11)) > v12) {
            operation_8c1cd6f4((void *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v10))), (int)(*(Arg0_2c **)((char *)((char *)o + 0x2c) + (v12 * 0x1c))), v12);
            v12 = (int)(v12 + 1);
        }
        operation_8c1cdd08((void *)(o->f388));
        operation_8c1cdc30((void *)(o->f388));
        v13 = (S_vv13 *)o->f388;
        o->f388->f80 = (o->f388->f80 & 0xffff) & -3;
        if (v13->f90 != 0) {
            operation_8c19a044((void *)(v13->f90), 1);
        }
        v19 = (int)o->f388->f84;
    }
    if (o->f394 == 0) {
        t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xb8);
        if (t4 != 0) {
            TWindowHelpItem_ctor_8c1d5b24((void *)t4);
        }
        o->f394 = (Arg0_394 *)(int)t4;
        operation_8c1d5dfc((void *)(o->f394), (int)((int)o + v19 * 0x1c + 0x30));
        o->f380 = (int)v19;
        return;
    }
    operation_8c1d5dfc((void *)(o->f394), (int)((int)o + v19 * 0x1c + 0x30));
    o->f380 = (int)v19;
}
