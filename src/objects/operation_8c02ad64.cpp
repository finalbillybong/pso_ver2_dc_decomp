typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c169508 S_c8c169508;
typedef struct Frame Frame;
typedef struct Arg0_bc8 Arg0_bc8;
class Object;
class Object {
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
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
};
typedef struct ObjectData {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2d0];
    short f308;
    char unknown30a[0x46];
    int f350;
    char unknown354[0x874];
    Arg0_bc8 *fbc8;
} ObjectData;
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    int f08;
    char f0c;
    char f0d;
    char unknowne[0x12];
};
struct S_c8c169508 {
    char unknown0[0xe8];
    int fe8;
};
extern "C" void operation_1c7dd4(void *);
extern "C" int find_node_8c16a3c0(void *, int);
extern "C" S_c8c169508 *operation_8c169508(void *);
extern "C" void operation_8c02c998(void *);
extern "C" int operation_8c02c1ac(void *);
extern "C" void operation_8c0368a8(void *);
extern "C" void operation_8c022bbc(void *);
extern "C" int operation_8c02ad64(Object *o)
{
    Frame frame;
    int v1;
    int v3;
    int v2;
    int t1;
    S_c8c169508 *t2;
    int t3;
    v1 = (int)(((ObjectData *)o)->f308 == 2);
    if (v1 != 0) {
        return 0;
    }
    operation_1c7dd4((void *)(&(&frame)->f0c));
    (&frame)->f0c = 3;
    (&frame)->f0d = 9;
    t1 = find_node_8c16a3c0((void *)(((ObjectData *)o)->fbc8), (int)(&(&frame)->f0c));
    if (t1 != 0) {
        t2 = operation_8c169508((void *)t1);
        if (t2 == 0) {
            return 0;
        }
        operation_8c02c998((void *)o);
        o->v64();
        ((ObjectData *)o)->f34 &= -0xe01;
        ((ObjectData *)o)->f350 = (unsigned int)((ObjectData *)o)->f350 >> 1 << 1;
        v2 = (int)t2->fe8;
        t3 = operation_8c02c1ac((void *)o);
        if (t3 == 0) {
            if (o != 0) {
                v3 = (int)(((ObjectData *)o)->f308 == 2);
                if (v3 != 0) {
                    goto L_8c02ae2a;
                }
            }
            (&frame)->f00 = 0x1a;
            (&frame)->f01 = 1;
            (&frame)->f04 = -1;
            (&frame)->f08 = 0;
            (&frame)->f00 = 0x29;
            (&frame)->f01 = 3;
            (&frame)->f02 = ((ObjectData *)o)->f20;
            (&frame)->f04 = (int)v2;
            (&frame)->f08 = 1;
            operation_8c0368a8((void *)(&frame));
            operation_8c022bbc((void *)o);
        }
L_8c02ae2a:;
        return 1;
    }
    return 0;
}
