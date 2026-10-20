typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class S_vv5;
class S_vv5 {
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
    virtual void v24(int, float);
};
typedef struct S_vv5Data {

} S_vv5Data;
extern "C" float call_8c0fd702(int);
extern "C" float operation_8c0fd6c8(int a0, int a1, int a2, int a3, int a4)
{
    S_vv5 *v5;
    v5 = (S_vv5 *)a0;
    switch (a4) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 19:
        v5->v24(0, 1.0f);
        break;
    }
    return 0.0f;
}
