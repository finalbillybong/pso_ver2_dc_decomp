typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_13c Arg0_13c;
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
} ObjectData;
struct Frame {
    char unknown0[0xc];
};
extern "C" int call_8c1aaabc(int);
extern "C" void call_8c075894(Object *, void *, int, Frame *);
extern "C" void operation_8c076580(void *);
extern "C" void operation_8c239c1c(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    t1 = call_8c1aaabc((int)((int)((ObjectData *)o)->f13c + 0x754));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        call_8c075894(o, (void *)(((ObjectData *)o)->f13c), (int)(((ObjectData *)o)->f224), (Frame *)((&frame)));
        o->v48((&frame), 0, 0, 1);
        return;
    }
    operation_8c076580((void *)o);
}
