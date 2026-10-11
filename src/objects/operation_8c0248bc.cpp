typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    virtual int v20(int);
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
};
typedef struct ObjectData {
    char unknown0[0x20];
    short f20;
    char unknown22[0xa];
    short f2c;
    char unknown2e[0x6];
    int f34;
    char unknown38[0x2f8];
    short f330;
    char unknown332[0x296];
    int f5c8;
} ObjectData;
extern "C" void call_8c03be74(int);
extern "C" void call_8c022d94(int);
extern "C" int call_8c032a2c(short);
extern "C" void operation_8c0248bc(Object *o)
{
    int t1;
    int t2;
    call_8c03be74((int)((char *)o + 0x5b8));
    call_8c022d94((int)o);
    t1 = o->v20(3);
    if (t1 != 0) {
        t2 = call_8c032a2c(((ObjectData *)o)->f20);
        ((ObjectData *)o)->f2c = t2;
    }
    o->v52();
    o->v44();
    o->v45();
    o->v46();
    o->v47();
    o->v48();
    o->v49();
    o->v50();
    o->v51();
    if (!(((ObjectData *)o)->f5c8 > 0)) {
        ((ObjectData *)o)->f34 &= -0x4000101;
    } else {
        ((ObjectData *)o)->f5c8 += -1;
        if (!(((ObjectData *)o)->f5c8 >= 0)) {
            ((ObjectData *)o)->f5c8 = 0;
        }
        ((ObjectData *)o)->f34 |= 0x4000000;
    }
    if (!(((ObjectData *)o)->f330 > 0)) {
        ((ObjectData *)o)->f34 |= 0xa00;
    }
}
