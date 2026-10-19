typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c169528 S_c8c169528;
typedef struct S_c8c169528_20 S_c8c169528_20;
typedef struct Object Object;
typedef struct Arg0_1ac Arg0_1ac;
class S_vv2;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x18a];
    Arg0_1ac *f1ac;
};
struct S_c8c169528 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    S_c8c169528_20 *f20;
};
class S_vv2 {
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
    virtual int v34();
    virtual void v35(int);
};
typedef struct S_vv2Data {
    char unknown0[0x2c];
    short f2c;
    char unknown2e[0xbe];
    int fec;
} S_vv2Data;
extern int g_8c4db3a8;
extern int g_8c4db3b0;
extern "C" S_c8c169528 *operation_8c169528(void *);
extern "C" int hierarchy_is_active(void *);
extern "C" void release_child_slot_8c022624(void *, void *);
extern "C" int operation_8c01d728(void *);
extern "C" void call_8c073710(S_vv2 *, int, int, int);
extern "C" int operation_8c16ab90(Object *o, int a1, int a2, int a3, register int a4, int a5)
{
    int v1;
    S_vv2 *v2;
    int v5;
    S_c8c169528 *t1;
    int t2;
    int t3;
    int t4;
    if (!(a4 >= 0)) {
        return 0;
    }
    g_8c4db3a8 = a2;
    g_8c4db3b0 = 0;
    t1 = operation_8c169528((void *)(o->f1ac));
    if (t1 == 0) {
        return 0;
    }
    t2 = hierarchy_is_active((void *)(t1->f20));
    if (t2 == 0) {
        v2 = (S_vv2 *)0;
    } else {
        v1 = (int)t1->f20;
        v2 = (S_vv2 *)v1;
    }
    if (v2 == 0) {
        return 0;
    }
    t3 = v2->v34();
    if ((t3 - a4) > 0) {
        v2->v35(a4);
        return 1;
    }
    v5 = (int)0;
    if (((((S_vv2Data *)v2)->fec & 4)) != 0 && ((((S_vv2Data *)v2)->fec & 8)) != 0) {
        v5 = (int)1;
    }
    if (v5 != 0) {
        release_child_slot_8c022624((void *)a1, (void *)v2);
    }
    t4 = operation_8c01d728((void *)a1);
    ((S_vv2Data *)v2)->f2c = t4;
    call_8c073710(v2, a5, a3, 0);
    o->f20 -= 1;
    t1->f04 |= 1;
    return 1;
}
