typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_14 Arg0_14;
typedef struct S_vv1_338 S_vv1_338;
class S_vv1;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xe];
    Arg0_14 *f14;
    char unknown18[0x8];
    short f20;
};
class S_vv1 {
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
    virtual int v38();
    virtual int v39();
    virtual int v40();
    virtual int v41();
    virtual int v42();
    virtual int v43();
    virtual void v44();
    virtual int v45();
    virtual void v46();
    virtual void v47();
    virtual int v48();
    virtual int v49();
    virtual void v50();
    virtual void v51();
    virtual int v52();
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
typedef struct S_vv1Data {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2e];
    int f34;
    char unknown38[0x300];
    S_vv1_338 *f338;
} S_vv1Data;
struct S_vv1_338 {
    char unknown0[0x8];
    int f08;
    char unknownc[0x10];
    float f1c;
};
extern "C" int operation_8c03d338(void);
extern "C" void call_8c027090(S_vv1 *);
extern "C" void call_8c102cd0(void *, int, int, int);
extern "C" void operation_8c01312c(Object *o)
{
    S_vv1 *v1;
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
    v1 = (S_vv1 *)o->f14;
    if (v1 == 0) {
        o->f04 |= 1;
        return;
    }
    t1 = operation_8c03d338();
    if (t1 != 0) {
        return;
    }
    t2 = v1->v42();
    if (t2 != 0) {
        ((S_vv1Data *)v1)->f04 &= -9;
        v1->v71();
        return;
    }
    v1->v50();
    v1->v51();
    t3 = v1->v52();
    if (t3 == 0) {
        v1->v47();
        t4 = v1->v45();
        if (t4 == 0) {
            t5 = v1->v49();
            if (t5 == 0) {
                t6 = v1->v48();
                if (t6 == 0) {
                    goto L_8c013218;
                }
            }
        }
        call_8c027090(v1);
        call_8c102cd0((void *)((int)v1 + 0x3c), -0x5db4, 1, 0);
        v1->v37();
        ((S_vv1Data *)v1)->f04 |= 8;
        return;
L_8c013218:;
        ((S_vv1Data *)v1)->f04 &= -9;
    }
    t7 = v1->v41();
    if (t7 != 0) {
        v1->v70();
        return;
    }
    t8 = v1->v40();
    if (t8 != 0) {
        v1->v69();
        return;
    }
    if (((((S_vv1Data *)v1)->f34 & 0x600000)) != 0) {
        return;
    }
    if (((S_vv1Data *)v1)->f338 != 0) {
        o->f20 = 0;
    } else {
        o->f20 = 2;
    }
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            goto L_8c0132f0;
        }
        if (o->f20 == 2) {
            goto L_8c0132f0;
        }
        return;
    }
    if (((((S_vv1Data *)v1)->f338->f08 & 4)) != 0) {
        v1->v68();
        return;
    }
    if (((S_vv1Data *)v1)->f338->f1c > 0.1f) {
        v1->v67();
        return;
    }
    v1->v66();
    return;
L_8c0132f0:;
    v1->v37();
    t9 = v1->v38();
    if (t9 != 0) {
        v1->v66();
        return;
    }
    t10 = v1->v43();
    if (t10 != 0) {
        v1->v67();
        return;
    }
    t11 = v1->v39();
    if (t11 != 0) {
        v1->v68();
        return;
    }
    v1->v67();
}
