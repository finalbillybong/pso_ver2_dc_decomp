typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_1ac Arg0_1ac;
typedef struct Arg0_1ac_14 Arg0_1ac_14;
typedef struct Arg0_1b0 Arg0_1b0;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_20 S_vv1_20;
typedef struct S_vv1_c S_vv1_c;
class S_vv24;
struct Object {
    char unknown0[0x1ac];
    Arg0_1ac *f1ac;
    Arg0_1b0 *f1b0;
};
struct Arg0_1ac {
    char unknown0[0x4];
    short f04;
    char unknown6[0xe];
    Arg0_1ac_14 *f14;
};
struct S_vv1 {
    int f00;
    char unknown4[0x8];
    S_vv1_c *f0c;
    char unknown10[0x10];
    S_vv1_20 *f20;
};
struct Arg0_1b0 {
    char unknown0[0x4];
    short f04;
};
class S_vv24 {
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
};
typedef struct S_vv24Data {

} S_vv24Data;
extern int g_8c317ab0;
extern int g_8c4db3a0;
extern int g_8c4db3b0;
extern "C" int hierarchy_is_active(void *);
extern "C" void call_8c16a22c(S_vv1 *);
extern "C" void update_hierarchy(void *);
extern "C" void operation_8c16a2fc(Object *o, int a1)
{
    S_vv1 *v1;
    int v2;
    int v3;
    S_vv24 *v24;
    int t1;
    int t2;
    int t3;
    g_8c4db3b0 = 0;
    g_8c4db3a0 = a1;
    v1 = (S_vv1 *)o->f1ac->f14;
    while (v1 != 0) {
        v2 = (int)(v1->f00 == g_8c317ab0);
        v3 = (int)0;
        if (v2 != 0) {
            t1 = hierarchy_is_active((void *)v1);
            if (t1 != 0) {
                v3 = (int)1;
            }
        }
        v24 = (S_vv24 *)v3;
        if (v3 != 0) {
            t2 = hierarchy_is_active((void *)(v1->f20));
            if (t2 == 0) {
                v24 = (S_vv24 *)0;
            } else {
                v24 = (S_vv24 *)v1->f20;
            }
            if (v24 != 0) {
                t3 = hierarchy_is_active((void *)v24);
                if (t3 != 0) {
                    v24->v27();
                }
            }
        }
        call_8c16a22c(v1);
        v1 = (S_vv1 *)v1->f0c;
    }
    o->f1ac->f04 |= 1;
    update_hierarchy((void *)(o->f1b0));
    update_hierarchy((void *)(o->f1b0));
    o->f1b0->f04 |= 1;
}
