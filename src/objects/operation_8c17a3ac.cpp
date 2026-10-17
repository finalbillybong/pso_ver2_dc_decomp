typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct Frame Frame;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
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
    Block44 f234;
} ObjectData;
struct Arg0_13c_s754 {
    char unknown0[0x30];
    Block44 f30;
};
struct Frame {
    char unknown0[0xc];
};
extern "C" int call_8c1aaabc(int);
extern "C" void operation_8c075894(void *, void *, int, int);
extern "C" int call_8c087b0c(void);
extern "C" int call_8c18e768(int, int);
extern "C" void operation_8c074ac4(void *, int);
extern "C" void operation_8c17a3ac(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = call_8c1aaabc((int)((int)((ObjectData *)o)->f13c + 0x754));
    if ((short)t1 == 2) {
        *(Block44 *)&((ObjectData *)o)->f234 = *(Block44 *)&((Arg0_13c_s754 *)((char *)((ObjectData *)o)->f13c + 0x754))->f30;
        operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), (int)(((ObjectData *)o)->f224), (int)(((char *)o + 0x260)));
        v1 = (int)0;
        t2 = o->v33();
        if (t2 == 1) {
            t3 = call_8c087b0c();
            t4 = call_8c18e768(t3, 0x64);
            if (((t4 & 1)) == 0) {
                v1 = (int)1;
            }
        }
        operation_8c074ac4((void *)o, v1);
        return;
    }
    operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), (int)(((ObjectData *)o)->f224), (int)(&frame));
    o->v48((&frame), 0, 0, 1);
}
