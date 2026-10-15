typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c169618 S_c8c169618;
typedef struct S_c8c169618_20 S_c8c169618_20;
typedef struct Frame Frame;
typedef struct S_g8c4db3bc S_g8c4db3bc;
typedef struct Object Object;
typedef struct Arg0_1ac Arg0_1ac;
typedef struct Arg0_1ac_14 Arg0_1ac_14;
typedef struct S_vv42 S_vv42;
typedef struct S_vv42_20 S_vv42_20;
typedef struct S_vv42_c S_vv42_c;
class S_vv1;
class S_vv65;
struct Object {
    char unknown0[0x1ac];
    Arg0_1ac *f1ac;
};
struct S_c8c169618 {
    char unknown0[0x20];
    S_c8c169618_20 *f20;
};
struct Arg0_1ac {
    char unknown0[0x14];
    Arg0_1ac_14 *f14;
};
struct S_vv42 {
    int f00;
    char unknown4[0x8];
    S_vv42_c *f0c;
    char unknown10[0x10];
    S_vv42_20 *f20;
};
struct Frame {
    char unknown0[0x14];
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
    virtual int v34();
};
typedef struct S_vv1Data {

} S_vv1Data;
class S_vv65 {
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
    virtual void v31(Frame *);
};
typedef struct S_vv65Data {

} S_vv65Data;
extern int g_8c317ab0;
extern int g_8c4db3b4;
extern S_g8c4db3bc *g_8c4db3bc;
extern "C" int operation_8c1c9358(void *);
extern "C" S_c8c169618 *call_8c169618(Arg0_1ac *);
extern "C" int hierarchy_is_active(void *);
extern "C" int operation_8c163898(Frame *, void *);
extern "C" void call_8c169824(S_vv42 *);
extern "C" int operation_8c16a50c(Object *o, int a1)
{
    Frame frame;
    S_vv42 *v42;
    S_vv1 *v1;
    int v43;
    int v44;
    S_vv65 *v65;
    int t1;
    S_c8c169618 *t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    t1 = operation_8c1c9358((void *)a1);
    if (t1 != 0) {
        g_8c4db3bc = (S_g8c4db3bc *)a1;
        t2 = call_8c169618((Arg0_1ac *)(o->f1ac));
        v1 = (S_vv1 *)t2;
        if (t2 != 0) {
            t3 = hierarchy_is_active((void *)(t2->f20));
            if (t3 == 0) {
                v1 = (S_vv1 *)0;
            } else {
                v1 = (S_vv1 *)t2->f20;
            }
            if (v1 != 0) {
                t4 = hierarchy_is_active((void *)v1);
                if (t4 != 0) {
                    t5 = v1->v34();
                    return (int)(t5);
                }
            }
        }
        return 0;
    }
    g_8c4db3bc = (S_g8c4db3bc *)a1;
    g_8c4db3b4 = 0;
    v42 = (S_vv42 *)o->f1ac->f14;
    while (v42 != 0) {
        v43 = (int)(v42->f00 == g_8c317ab0);
        v44 = (int)0;
        if (v43 != 0) {
            t6 = hierarchy_is_active((void *)v42);
            if (t6 != 0) {
                v44 = (int)1;
            }
        }
        if (v44 != 0) {
            t7 = hierarchy_is_active((void *)(v42->f20));
            if (t7 == 0) {
                v65 = (S_vv65 *)0;
            } else {
                v65 = (S_vv65 *)v42->f20;
            }
            if (v65 != 0) {
                v65->v31((&frame));
                t8 = operation_8c163898((Frame *)((&frame)), g_8c4db3bc);
                if (t8 != 0) {
                    g_8c4db3b4 += 1;
                }
            }
        }
        call_8c169824(v42);
        v42 = (S_vv42 *)v42->f0c;
    }
    return (int)(g_8c4db3b4);
}
