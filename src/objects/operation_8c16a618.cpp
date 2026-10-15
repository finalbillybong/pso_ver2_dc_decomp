typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db3a0 S_g8c4db3a0;
typedef struct Object Object;
typedef struct Arg0_1ac Arg0_1ac;
typedef struct Arg0_1ac_14 Arg0_1ac_14;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_20 S_vv4_20;
typedef struct S_vv4_c S_vv4_c;
class S_vv27;
struct Object {
    char unknown0[0x1ac];
    Arg0_1ac *f1ac;
};
struct Arg0_1ac {
    char unknown0[0x14];
    Arg0_1ac_14 *f14;
};
struct S_vv4 {
    int f00;
    char unknown4[0x8];
    S_vv4_c *f0c;
    char unknown10[0x10];
    S_vv4_20 *f20;
};
class S_vv27 {
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
    virtual int v30();
};
typedef struct S_vv27Data {
    char unknown0[0xec];
    int fec;
} S_vv27Data;
extern "C" int hierarchy_is_active(void *);
extern "C" int call_8c03b55c(int, int);
extern "C" void release_child_slot_8c022624(void *, void *);
extern "C" void call_8c169920(S_vv4 *);
extern "C" void operation_8c16a618(Object *o, int a1)
{
    S_vv4 *v4;
    int v5;
    int v6;
    S_vv27 *v27;
    int v33;
    int v1;
    int v2;
    int v30;
    int v3;
    int t1;
    int t2;
    int t3;
    int t4;
    *(int *)0x8c4db3a0 = a1;
    v1 = (int)0x134;
    v2 = (int)0x136;
    v4 = (S_vv4 *)o->f1ac->f14;
    v3 = (int)0xbcc;
    while (v4 != 0) {
        v5 = (int)((int)v4->f00 == *(int *)0x8c317ab0);
        v6 = (int)0;
        if (v5 != 0) {
            t1 = hierarchy_is_active((void *)v4);
            if (t1 != 0) {
                v6 = (int)1;
            }
        }
        v27 = (S_vv27 *)v6;
        if (v6 != 0) {
            t2 = hierarchy_is_active((void *)(v4->f20));
            if (t2 == 0) {
                v27 = (S_vv27 *)0;
            } else {
                v27 = (S_vv27 *)v4->f20;
            }
            if (v27 != 0) {
                v30 = (int)0;
                if (((((S_vv27Data *)v27)->fec & 4)) != 0 && ((((S_vv27Data *)v27)->fec & 8)) != 0) {
                    v30 = (int)1;
                }
                if (v30 != 0) {
                    v33 = (int)0;
                    if (*(unsigned char *)((char *)((char *)v27 + 0x0) + (v1)) == 1 && *(unsigned char *)((char *)((char *)v27 + 0x0) + (v2)) == 3) {
                        v33 = (int)1;
                    }
                    if (v33 == 0) {
                        t3 = v27->v30();
                        t4 = call_8c03b55c((int)(*(int *)0x8c4db3a0 + v3), (int)((short)t3));
                        if (t4 != 0) {
                            release_child_slot_8c022624((void *)(*(S_g8c4db3a0 **)0x8c4db3a0), (void *)v27);
                        }
                    }
                }
            }
        }
        call_8c169920(v4);
        v4 = (S_vv4 *)v4->f0c;
    }
}
