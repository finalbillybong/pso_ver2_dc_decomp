typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c3032d8 S_g8c3032d8;
class S_vv1;
class S_vv1 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};
typedef struct S_vv1Data {

} S_vv1Data;
extern "C" void operation_8c0a19c4(int a0)
{
    S_vv1 *v1;
    *(char *)0x8c46efc8 = a0;
    v1 = (S_vv1 *)*(S_g8c3032d8 **)((char *)0x8c3032d8 + (*(unsigned char *)0x8c46efc8 << 2));
    if (v1 != 0) {
        v1->v6();
    }
}
