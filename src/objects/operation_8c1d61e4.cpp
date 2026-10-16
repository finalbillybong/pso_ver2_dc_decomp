typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" int call_8c18e6fc(int);
extern "C" void operation_8c1d61e4(int a0)
{
    int t1;
    t1 = call_8c18e6fc((int)(a0 + 0xac));
    if (t1 != 0) {
        (((PmfObj *)(a0))->*(*(PMF_0 *)(a0 + 0xac)))();
    }
}
