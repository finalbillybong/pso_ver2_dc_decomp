typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db3a0 S_g8c4db3a0;
typedef struct Object Object;
typedef struct S_vv31 S_vv31;
typedef struct S_vv31_20 S_vv31_20;
typedef struct S_vv31_c S_vv31_c;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_20 S_vv5_20;
typedef struct S_vv5_c S_vv5_c;
class S_vv14;
class S_vv39;
struct Object {
    char unknown0[0x14];
    int f14;
};
struct S_vv5 {
    int f00;
    char unknown4[0x8];
    S_vv5_c *f0c;
    char unknown10[0x4];
    int f14;
    char unknown18[0x8];
    S_vv5_20 *f20;
};
class S_vv14 {
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
typedef struct S_vv14Data {
    char unknown0[0xec];
    int fec;
} S_vv14Data;
struct S_vv31 {
    int f00;
    char unknown4[0x8];
    S_vv31_c *f0c;
    char unknown10[0x10];
    S_vv31_20 *f20;
};
class S_vv39 {
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
typedef struct S_vv39Data {
    char unknown0[0xec];
    int fec;
} S_vv39Data;
extern "C" int hierarchy_is_active(void *);
extern "C" int call_8c03b55c(int, int);
extern "C" void release_child_slot_8c022624(void *, void *);
extern "C" void call_8c169920(S_vv31 *);
extern "C" void operation_8c169920(Object *o)
{
    int v1;
    int v2;
    int v6;
    int v3;
    int v4;
    S_vv5 *v5;
    int v17;
    int v13;
    S_vv14 *v14;
    int v20;
    int v30;
    S_vv31 *v31;
    int v32;
    int v7;
    int v38;
    S_vv39 *v39;
    int v42;
    int v45;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    v1 = (int)0x134;
    v2 = (int)0x136;
    v4 = (int)o->f14;
    v5 = (S_vv5 *)v4;
    v3 = (int)0xbcc;
    while (v5 != 0) {
        v6 = (int)((int)v5->f00 == *(int *)0x8c317ab0);
        v7 = (int)0;
        if (v6 != 0) {
            t1 = hierarchy_is_active((void *)v5);
            if (t1 != 0) {
                v7 = (int)1;
            }
        }
        if (v7 != 0) {
            t2 = hierarchy_is_active((void *)(v5->f20));
            if (t2 == 0) {
                v14 = (S_vv14 *)0;
            } else {
                v13 = (int)v5->f20;
                v14 = (S_vv14 *)v13;
            }
            if (v14 != 0) {
                v17 = (int)0;
                if (((((S_vv14Data *)v14)->fec & 4)) != 0 && ((((S_vv14Data *)v14)->fec & 8)) != 0) {
                    v17 = (int)1;
                }
                if (v17 != 0) {
                    v20 = (int)0;
                    if (*(unsigned char *)((char *)((char *)v14 + 0x0) + (v1)) == 1 && *(unsigned char *)((char *)((char *)v14 + 0x0) + (v2)) == 3) {
                        v20 = (int)1;
                    }
                    if (v20 == 0) {
                        t3 = v14->v30();
                        t4 = call_8c03b55c((int)(*(int *)0x8c4db3a0 + v3), (int)((short)t3));
                        if (t4 != 0) {
                            release_child_slot_8c022624((void *)(*(S_g8c4db3a0 **)0x8c4db3a0), (void *)v14);
                        }
                    }
                }
            }
        }
        v30 = (int)v5->f14;
        v31 = (S_vv31 *)v30;
        while (v31 != 0) {
            v32 = (int)((int)v31->f00 == *(int *)0x8c317ab0);
            v7 = (int)0;
            if (v32 != 0) {
                t5 = hierarchy_is_active((void *)v31);
                if (t5 != 0) {
                    v7 = (int)1;
                }
            }
            v39 = (S_vv39 *)v7;
            if (v7 != 0) {
                t6 = hierarchy_is_active((void *)(v31->f20));
                if (t6 == 0) {
                    v39 = (S_vv39 *)0;
                } else {
                    v38 = (int)v31->f20;
                    v39 = (S_vv39 *)v38;
                }
                if (v39 != 0) {
                    v42 = (int)0;
                    if (((((S_vv39Data *)v39)->fec & 4)) != 0 && ((((S_vv39Data *)v39)->fec & 8)) != 0) {
                        v42 = (int)1;
                    }
                    if (v42 != 0) {
                        v45 = (int)0;
                        if (*(unsigned char *)((char *)((char *)v39 + 0x0) + (v1)) == 1 && *(unsigned char *)((char *)((char *)v39 + 0x0) + (v2)) == 3) {
                            v45 = (int)1;
                        }
                        if (v45 == 0) {
                            t7 = v39->v30();
                            t8 = call_8c03b55c((int)(*(int *)0x8c4db3a0 + v3), (int)((short)t7));
                            if (t8 != 0) {
                                release_child_slot_8c022624((void *)(*(S_g8c4db3a0 **)0x8c4db3a0), (void *)v39);
                            }
                        }
                    }
                }
            }
            call_8c169920(v31);
            v31 = (S_vv31 *)v31->f0c;
        }
        v5 = (S_vv5 *)v5->f0c;
    }
}
