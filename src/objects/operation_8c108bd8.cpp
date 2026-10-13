typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d7bbc S_g8c4d7bbc;
class S_g8c4d7c54 {
public:
    char unknown0[0x8];
    virtual void v0(int);
};
typedef struct S_g8c4d7c54Data {

} S_g8c4d7c54Data;
extern "C" void call_8c03dc40(void *, int);
extern "C" void operation_8c108bd8(void)
{
    call_8c03dc40((void *)(*(S_g8c4d7bbc **)0x8c4d7bbc), 1);
    if (*(int *)0x8c4d7c54 != 0) {
        (*(S_g8c4d7c54 **)0x8c4d7c54)->v0(1);
    }
    *(int *)0x8c4d7c54 = 0;
}
