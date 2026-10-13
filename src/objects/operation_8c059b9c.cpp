typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class S_g8c467980 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c467980Data {

} S_g8c467980Data;
extern "C" void operation_8c059b9c(void)
{
    if (*(int *)0x8c467980 != 0) {
        (*(S_g8c467980 **)0x8c467980)->v0(1);
    }
    *(int *)0x8c467980 = 0;
}
