typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db3a4 S_g8c4db3a4;
typedef struct Object Object;
typedef struct Arg0_1ac Arg0_1ac;
typedef struct Arg0_1ac_14 Arg0_1ac_14;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_20 S_vv2_20;
typedef struct S_vv2_c S_vv2_c;
class S_vv25;
struct Object {
    char unknown0[0x1ac];
    Arg0_1ac *f1ac;
};
struct Arg0_1ac {
    char unknown0[0x14];
    Arg0_1ac_14 *f14;
};
struct S_vv2 {
    int f00;
    char unknown4[0x8];
    S_vv2_c *f0c;
    char unknown10[0x10];
    S_vv2_20 *f20;
};
class S_vv25 {
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
    virtual void v31(void *);
};
typedef struct S_vv25Data {
    char unknown0[0xe8];
    int fe8;
    int fec;
} S_vv25Data;
struct S_g8c4db3a4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c317ab0;
extern S_g8c4db3a4 *g_8c4db3a4;
extern int g_8c4db3b4;
extern "C" int hierarchy_is_active(void *);
extern "C" void call_8c169b90(S_vv2 *);
extern "C" int operation_8c16a7a8(Object *o, int a1, int a2)
{
    S_vv2 *v2;
    int v3;
    int v4;
    S_vv25 *v25;
    int v28;
    int v1;
    int t1;
    int t2;
    g_8c4db3a4 = (S_g8c4db3a4 *)a2;
    g_8c4db3b4 = 0;
    v1 = (int)0x134;
    v2 = (S_vv2 *)o->f1ac->f14;
    while (v2 != 0) {
        v3 = (int)(v2->f00 == g_8c317ab0);
        v4 = (int)0;
        if (v3 != 0) {
            t1 = hierarchy_is_active((void *)v2);
            if (t1 != 0) {
                v4 = (int)1;
            }
        }
        v25 = (S_vv25 *)v4;
        if (v4 != 0) {
            t2 = hierarchy_is_active((void *)(v2->f20));
            if (t2 == 0) {
                v25 = (S_vv25 *)0;
            } else {
                v25 = (S_vv25 *)v2->f20;
            }
            if (v25 != 0) {
                v28 = (int)0;
                if (((((S_vv25Data *)v25)->fec & 4)) != 0 && ((((S_vv25Data *)v25)->fec & 8)) != 0) {
                    v28 = (int)1;
                }
                if (v28 != 0 && (*(unsigned char *)((char *)((char *)v25 + 0x0) + (v1))) == 0) {
                    v25->v31(((char *)g_8c4db3a4 + 0x8));
                    g_8c4db3a4->f04 = (int)(((S_vv25Data *)v25)->fe8);
                    g_8c4db3a4 = (S_g8c4db3a4 *)((int)g_8c4db3a4 + 0x1c);
                    g_8c4db3b4 += 1;
                }
            }
        }
        call_8c169b90(v2);
        v2 = (S_vv2 *)v2->f0c;
    }
    return (int)(g_8c4db3b4);
}
