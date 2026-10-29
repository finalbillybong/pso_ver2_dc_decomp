typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Object Object;
typedef struct Arg0_158 Arg0_158;
typedef struct Arg0_15c Arg0_15c;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_184 Arg0_28_184;
typedef struct S_vv11 S_vv11;
typedef struct S_vv12 S_vv12;
typedef struct S_vv12_90 S_vv12_90;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_90 S_vv7_90;
class Arg0_58;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    Block20 f2c;
    Block20 f40;
    char unknown54[0xfc];
    int f150;
    char unknown154[0x4];
    Arg0_158 *f158;
    Arg0_15c *f15c;
};
struct Arg0_15c {
    char unknown0[0x80];
    volatile unsigned short f80;
};
struct Arg0_28 {
    char unknown0[0x184];
    Arg0_28_184 *f184;
};
struct Arg0_28_184 {
    char unknown0[0x20];
    int f20;
};
class Arg0_58 {
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
    virtual int v31(void *);
};
typedef struct Arg0_58Data {
    char unknown0[0xe8];
    int fe8;
} Arg0_58Data;
struct Arg0_158 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv7 {
    char unknown0[0x90];
    S_vv7_90 *f90;
};
struct S_vv11 {
    char unknown0[0x80];
    volatile unsigned short f80;
};
struct S_vv12 {
    char unknown0[0x90];
    S_vv12_90 *f90;
};
extern "C" char g_8c31cc44[];
extern "C" int operation_8c220ce0(void);
extern "C" int operation_8c1571f4(void *);
extern "C" void request_resource_release(void *);
extern "C" void operation_8c220ca8(int, int);
extern "C" int operation_8c1cdc80(void *);
extern "C" void operation_8c023b3c(void *, int, int);
extern "C" void operation_8c19ca7c(int);
extern "C" void operation_8c1005bc(int);
extern "C" void operation_8c19a044(void *, int);
extern "C" void operation_8c19b710(Object *o)
{
    char *v71;
    S_vv7 *v7;
    S_vv11 *v11;
    S_vv12 *v12;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = operation_8c220ce0();
    if (t1 == 0) {
        return;
    }
    if (o->f15c == 0) {
    } else {
        if (((o->f15c->f80 & 0xffff & 2)) == 0) {
        } else {
            t2 = operation_8c1571f4((void *)(o->f15c));
            if (t2 == 0) {
                v71 = (char *)o->f158;
                if (v71 != 0) {
                    if (0x64 > o->f28->f184->f20) {
                        request_resource_release((void *)(o->f15c));
                        o->f15c = (Arg0_15c *)0;
                        operation_8c220ca8(5, 1);
                        o->f24 = 0xb;
                        return;
                    }
                    t3 = operation_8c1cdc80((void *)v71) << 3;
                    t4 = (*(Arg0_58 **)((char *)((char *)o + 0x58) + t3))->v31(&o->f40);
                    if (t4 != 0) {
                        *(Block20 *)&o->f2c = *(Block20 *)&o->f40;
                        operation_8c023b3c((void *)(o->f28), (int)(((Arg0_58Data *)(*(Arg0_58 **)((char *)((char *)o + 0x58) + t3)))->fe8), 1);
                        operation_8c19ca7c((int)(&o->f2c));
                        o->f150 = 0x5f;
                        if (o->f158 != 0) {
                            request_resource_release((void *)(o->f158));
                            o->f158 = (Arg0_158 *)0;
                        }
                        operation_8c1005bc((int)(g_8c31cc44 + 0x18));
                    }
                    request_resource_release((void *)(o->f15c));
                    o->f15c = (Arg0_15c *)0;
                    operation_8c220ca8(6, 1);
                    o->f24 = 3;
                    return;
                }
            }
            if (t2 == 1) {
                request_resource_release((void *)(o->f15c));
                o->f15c = (Arg0_15c *)0;
                operation_8c220ca8(4, 1);
                o->f24 = 1;
                v7 = (S_vv7 *)o->f158;
                o->f158->f80 = (o->f158->f80 & 0xffff) & -3;
                if (v7->f90 == 0) {
                    return;
                }
                operation_8c19a044((void *)(v7->f90), 1);
                return;
            }
        }
    }
    v11 = (S_vv11 *)o->f15c;
    if (v11 != 0 && ((v11->f80 & 0xffff & 4)) != 0) {
        request_resource_release((void *)v11);
        o->f15c = (Arg0_15c *)0;
        operation_8c220ca8(4, 1);
        o->f24 = 1;
        v12 = (S_vv12 *)o->f158;
        o->f158->f80 = (o->f158->f80 & 0xffff) & -3;
        if (v12->f90 != 0) {
            operation_8c19a044((void *)(v12->f90), 1);
        }
    }
}
