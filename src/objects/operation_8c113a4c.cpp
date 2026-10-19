typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d820c S_g8c4d820c;
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
};
typedef struct ObjectData {
    char unknown0[0xe8];
    float fe8;
    char unknownec[0x4];
    float ff0;
} ObjectData;
struct S_g8c4d820c {
    char unknown0[0x4];
    int f04;
};
extern "C" void operation_8c113a4c(Object *o)
{
    float v3;
    float v4;
    {
        float *pf = &((ObjectData *)o)->fe8;
        *pf += ((ObjectData *)o)->ff0;
        v4 = *pf;
        v3 = (float)(float)(unsigned int)((*(S_g8c4d820c **)0x8c4d820c)->f04 + -1);
        if (v4 > v3) {
            ((ObjectData *)o)->fe8 = 0.0f;
        }
    }
    o->v21();
}
