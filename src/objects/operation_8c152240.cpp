typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class S_g8c4da88c;
class S_vv22_0;
class S_g8c4da88c {
public:
    char unknown0[0x8];
    virtual void v0(int);
};
typedef struct S_g8c4da88cData {

} S_g8c4da88cData;
class S_vv22_0 {
public:
    char unknown0[0x8];
    virtual void v0(int);
};
typedef struct S_vv22_0Data {

} S_vv22_0Data;
extern "C" void operation_8c152240(void)
{
    int v21;
    int v22;
    if (*(int *)0x8c4da88c != 0) {
        (*(S_g8c4da88c **)0x8c4da88c)->v0(1);
    }
    *(int *)0x8c4da88c = 0;
    v21 = (int)0;
    while (5 > v21) {
        v22 = (int)(v21 << 2);
        if (*(int *)((char *)((char *)v22 + 0x0) + ((int)((void *)0x8c4da890))) != 0) {
            (*(S_vv22_0 **)((char *)((char *)v22 + 0x0) + ((int)((void *)0x8c4da890))))->v0(1);
        }
        *(int *)((char *)((char *)v22 + 0x0) + ((int)((void *)0x8c4da890))) = 0;
        v21 = (int)(v21 + 1);
    }
}
