typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    virtual int v48(void *, int, int, int);
};
typedef struct ObjectData {
    char unknown0[0x13c];
    int f13c;
    char unknown140[0xe8];
    void *f228;
    void *f22c;
} ObjectData;
extern "C" int call_8c1aaabc(int);
extern "C" void operation_1abd98_8c1ac468();
extern "C" void operation_1ac120();
extern "C" void operation_8c23a6e0(Object *o)
{
    int t1;
    int t2;
    int t3;
    t1 = call_8c1aaabc((int)((int)((ObjectData *)o)->f13c + 0x754));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 == 1) {
            ((ObjectData *)o)->f22c = (void *)operation_1abd98_8c1ac468;
            ((ObjectData *)o)->f228 = (void *)0;
            goto L_8c23a732;
        }
        ((ObjectData *)o)->f22c = (void *)operation_1ac120;
        ((ObjectData *)o)->f228 = (void *)(void *)0x8c1c6058;
    } else {
        ((ObjectData *)o)->f22c = (void *)operation_1ac120;
        ((ObjectData *)o)->f228 = (void *)(void *)0x8c1c6058;
    }
L_8c23a732:;
    t3 = o->v48(((char *)o + 0x234), 0, 0, 1);
    if (t3 != 0) {
        o->v48(((char *)o + 0x240), 0, 0, 0);
        return;
    }
    o->v48(((char *)o + 0x240), 0, 0, 1);
}
