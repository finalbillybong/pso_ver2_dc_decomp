typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_13c Arg0_13c;
typedef struct S_vv13 S_vv13;
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
    virtual int v33();
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
    virtual void v48(Frame *, int, int, int);
};
typedef struct ObjectData {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xe4];
    short f224;
    char unknown226[0xe];
    int f234;
    char unknown238[0x8];
    int f240;
} ObjectData;
struct S_vv13 {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    char unknown0[0xc];
};
extern "C" int allocate_block(void *, unsigned int);
extern "C" void operation_8c1ab01c(void *, int, int, int);
extern "C" int call_8c1aaabc(int);
extern "C" void call_8c076af4(Object *, float, int, int);
extern "C" void operation_8c075894(void *, void *, int, int);
extern "C" void operation_8c23becc();
extern "C" void operation_8c23bdd4(Object *o)
{
    Frame frame;
    S_vv13 *v13;
    int v14;
    int t1;
    int t2;
    int t3;
    if (((ObjectData *)o)->f234 == 1) {
        if (o != 0) {
            t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
            if (t1 != 0) {
                operation_8c1ab01c((void *)t1, (int)o, (int)operation_8c23becc, 0x1e);
            }
        }
        ((ObjectData *)o)->f234 = 0;
    }
    ((ObjectData *)o)->f240 = 2;
    v13 = (S_vv13 *)((int)((ObjectData *)o)->f13c + 0x754);
    if (v13->f18 == 0) {
        v14 = (int)0;
        while (v14 != 2) {
            v13->f18 += 1;
            v14 = (int)(v14 + 1);
        }
    }
    t2 = call_8c1aaabc((int)((int)((ObjectData *)o)->f13c + 0x754));
    if ((short)t2 == 2) {
        t3 = o->v33();
        if (t3 != 1) {
            return;
        }
        call_8c076af4(o, 1.0f, 0, 1);
        return;
    }
    operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), (int)(((ObjectData *)o)->f224), (int)(&frame));
    o->v48((&frame), 0, 0, 1);
}
