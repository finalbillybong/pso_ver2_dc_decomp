typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_bc8 S_vv4_bc8;
class S_c8c169508;
struct Object {
    char unknown0[0x2];
    short f02;
    int f04;
};
struct S_vv4 {
    char unknown0[0xbc8];
    S_vv4_bc8 *fbc8;
};
class S_c8c169508 {
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
    virtual void v28(S_vv4 *);
};
typedef struct S_c8c169508Data {

} S_c8c169508Data;
extern "C" int operation_8c16a18c(void *, int);
extern "C" S_c8c169508 *operation_8c169508(void *);
extern "C" void operation_8c0241d0(Object *o)
{
    int v1;
    short v2;
    int v7;
    int v9;
    int v12;
    int v13;
    S_vv4 *v4;
    int t1;
    S_c8c169508 *t2;
    v2 = o->f02;
    if ((unsigned short)v2 == 0xffff) {
        v4 = (S_vv4 *)0;
    } else {
        if ((int)(unsigned short)v2 >= 0xc) {
            v4 = (S_vv4 *)0;
        } else {
            v1 = (int)*(int *)((char *)0x8c41ce2c + ((unsigned short)v2 << 2));
            v4 = (S_vv4 *)v1;
        }
    }
    v7 = (int)*(int *)0x8c4627c8;
    v12 = (int)0;
    if (v7 == 0) {
        v9 = (int)0;
        if ((unsigned short)v2 == *(int *)0x8c418248) {
            v9 = (int)1;
        }
        v12 = (int)v9;
    }
    v13 = (int)(v12 == 0);
    if (v13 != 0 && v4 != 0) {
        t1 = operation_8c16a18c((void *)(v4->fbc8), (int)(o->f04));
        if (t1 != 0) {
            t2 = operation_8c169508((void *)t1);
            if (t2 != 0) {
                t2->v28(v4);
            }
        }
    }
}
