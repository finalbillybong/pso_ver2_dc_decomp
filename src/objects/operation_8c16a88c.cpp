typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db3a0 S_g8c4db3a0;
typedef struct S_g8c4db3a0_0 S_g8c4db3a0_0;
typedef struct Object Object;
typedef struct Arg0_1ac Arg0_1ac;
typedef struct S_vv15_0 S_vv15_0;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_20 S_vv4_20;
typedef struct S_vv4_c S_vv4_c;
class S_vv13;
struct Object {
    char unknown0[0x1ac];
    Arg0_1ac *f1ac;
};
struct Arg0_1ac {
    char unknown0[0x14];
    int f14;
};
struct S_vv4 {
    int f00;
    char unknown4[0x8];
    S_vv4_c *f0c;
    char unknown10[0x10];
    S_vv4_20 *f20;
};
class S_vv13 {
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
typedef struct S_vv13Data {

} S_vv13Data;
extern int g_8c317ab0;
extern S_g8c4db3a0 *g_8c4db3a0;
extern unsigned char g_8c4db3d8;
extern "C" int hierarchy_is_active(void *);
extern "C" void call_8c16aad8(void *, int, S_vv4 *, int);
extern "C" void call_8c169ebc(S_vv4 *);
extern "C" void operation_8c16a88c(Object *o, int a1, int a2)
{
    int v3;
    S_vv4 *v4;
    int v5;
    int v6;
    int v12;
    S_vv13 *v13;
    char *v15;
    unsigned char v14;
    int v1;
    int v2;
    int t1;
    int t2;
    int t3;
    g_8c4db3a0 = (S_g8c4db3a0 *)a1;
    g_8c4db3d8 = a2;
    v1 = (int)0x134;
    v3 = (int)o->f1ac->f14;
    v4 = (S_vv4 *)v3;
    v2 = (int)0xbc8;
    while (v4 != 0) {
        v5 = (int)(v4->f00 == g_8c317ab0);
        v6 = (int)0;
        if (v5 != 0) {
            t1 = hierarchy_is_active((void *)v4);
            if (t1 != 0) {
                v6 = (int)1;
            }
        }
        if (v6 != 0) {
            t2 = hierarchy_is_active((void *)(v4->f20));
            if (t2 == 0) {
                v13 = (S_vv13 *)0;
            } else {
                v12 = (int)v4->f20;
                v13 = (S_vv13 *)v12;
            }
            if (v13 != 0) {
                v14 = (unsigned char)g_8c4db3d8;
                if (*(unsigned char *)((char *)((char *)v13 + 0x0) + (v1)) == v14) {
                    if (v14 == 3) {
                        v15 = (char *)g_8c4db3a0;
                        t3 = v13->v34();
                        call_8c16aad8((void *)(*(S_vv15_0 **)((char *)((char *)v15 + 0x0) + (v2))), (int)(v15), v4, t3);
                        v6 = (int)v15;
                    } else {
                        call_8c16aad8((void *)(*(S_g8c4db3a0_0 **)((char *)((char *)g_8c4db3a0 + 0x0) + (v2))), (int)g_8c4db3a0, v4, 1);
                    }
                }
            }
        }
        call_8c169ebc(v4);
        v4 = (S_vv4 *)v4->f0c;
    }
}
