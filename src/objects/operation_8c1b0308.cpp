typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class S_g8c4e236c {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c4e236cData {

} S_g8c4e236cData;
extern "C" void operation_8c1b0308(void)
{
    if (*(int *)0x8c4e236c != 0) {
        (*(S_g8c4e236c **)0x8c4e236c)->v0(1);
    }
}
