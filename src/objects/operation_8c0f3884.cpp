typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_e4 Arg0_e4;
typedef struct Arg2 Arg2;
class Object;
class Arg1;
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
    virtual void v15(Arg1 *, float);
};
typedef struct ObjectData {
    char unknown0[0xe4];
    Arg0_e4 *fe4;
} ObjectData;
class Arg1 {
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
    virtual void v24(void *, float);
};
typedef struct Arg1Data {
    char unknown0[0x308];
    short f308;
} Arg1Data;
struct Arg2 {
    float f00;
};
extern "C" void operation_8c0f3884(Object *o, Arg1 *a1, Arg2 *a2)
{
    int v1;
    a1->v24(((ObjectData *)o)->fe4, 1.0f);
    v1 = (int)(((Arg1Data *)a1)->f308 == 2);
    if (v1 == 0) {
        o->v15(a1, a2->f00);
    }
}
