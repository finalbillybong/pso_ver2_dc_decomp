typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class S_g8c4e2ba4 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c4e2ba4Data {

} S_g8c4e2ba4Data;
class S_g8c4e2ba0 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c4e2ba0Data {

} S_g8c4e2ba0Data;
extern "C" void call_8c0de430(void);
extern "C" void call_8c0db1a0(void);
extern "C" void operation_8c1bec20(void)
{
    if (*(int *)0x8c4e2ba4 != 0) {
        if (*(int *)0x8c4e2ba4 != 0) {
            (*(S_g8c4e2ba4 **)0x8c4e2ba4)->v0(1);
        }
        *(int *)0x8c4e2ba4 = 0;
    }
    if (*(int *)0x8c4e2ba0 != 0) {
        if (*(int *)0x8c4e2ba0 != 0) {
            (*(S_g8c4e2ba0 **)0x8c4e2ba0)->v0(1);
        }
        *(int *)0x8c4e2ba0 = 0;
    }
    call_8c0de430();
    call_8c0db1a0();
}
