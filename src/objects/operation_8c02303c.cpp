typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_bc8 Arg0_bc8;
typedef struct Arg1 Arg1;
class S_c8c169508;
struct Arg1 {
    unsigned char f00;
};
struct Object {
    char unknown0[0x184];
    Arg0_184 *f184;
    char unknown188[0xa40];
    Arg0_bc8 *fbc8;
};
struct Arg0_184 {
    char unknown0[0x20];
    int f20;
};
struct Arg0_bc8 {
    char unknown0[0x20];
    short f20;
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
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual int v34();
};
typedef struct S_c8c169508Data {

} S_c8c169508Data;
extern "C" int operation_8c1c9358(void *);
extern "C" int find_node_8c16a3c0(void *, int);
extern "C" S_c8c169508 *operation_8c169508(void *);
extern "C" int operation_8c1c74dc(void *);
extern "C" int operation_8c02303c(Object *o, Arg1 *a1)
{
    int v1;
    int v2;
    int v3;
    int t1;
    int t2;
    S_c8c169508 *t3;
    int t4;
    int t5;
    t1 = operation_8c1c9358((void *)a1);
    if (t1 != 0) {
        if (a1->f00 == 4) {
            v1 = (int)(0xf423f > o->f184->f20);
            return (int)(v1);
        }
        t2 = find_node_8c16a3c0((void *)(o->fbc8), (int)a1);
        if (t2 != 0) {
            t3 = operation_8c169508((void *)t2);
            if (t3 == 0) {
                return 0;
            }
            t5 = t3->v34();
            v2 = (int)(0xa - t5);
            t4 = operation_8c1c74dc((void *)a1);
            v3 = (int)(v2 >= t4);
            return (int)(v3);
        }
    }
    if (o->fbc8->f20 >= 0x1e) {
        return 0;
    }
    return 1;
}
