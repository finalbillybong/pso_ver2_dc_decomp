typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c301784 S_L8c301784;
struct S_L8c301784 {
    char unknown0[0xc];
    Vector3 f0c;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c30176c;
extern Vector3 g_8c301778;
extern int g_8c46b040;
extern char g_8c46ec18;
extern S_L8c301784 g_8c301784;
extern "C" char gc_8c301784[];
extern "C" void operation_8c09b55c(int a0)
{
    if (g_8c46ec18 == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c301784 + 0x0) = *(Vector3 *)&g_8c30176c;
        *(Vector3 *)&*(Vector3 *)(gc_8c301784 + 0xc) = *(Vector3 *)&g_8c301778;
        g_8c46ec18 = 1;
    }
    (((PmfObj *)(a0))->*(*(PMF_0 *)(g_8c46b040 * 0xc + gc_8c301784)))();
}
