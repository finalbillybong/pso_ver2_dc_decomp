typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d5ad0 S_L8c4d5ad0;
typedef struct S_L8c4d5ad0_14 S_L8c4d5ad0_14;
typedef struct S_vv1_20 S_vv1_20;
typedef struct S_vv1_c S_vv1_c;
struct S_L8c4d5ad0 {
    char unknown0[0x14];
    S_L8c4d5ad0_14 *f14;
};
class S_vv1 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_vv1Data {
    char unknown0[0xc];
    S_vv1_c *f0c;
    char unknown10[0x10];
    S_vv1_20 *f20;
    char unknown24[0x4];
    int f28;
} S_vv1Data;
extern S_L8c4d5ad0 g_8c4d5ad0;
extern "C" void call_8c011ec0(void *);
extern "C" void operation_8c105320(int a0)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)(&g_8c4d5ad0)->f14;
    while (v1 != 0) {
        if (((S_vv1Data *)v1)->f28 == a0) {
            call_8c011ec0(((S_vv1Data *)v1)->f20);
            if (v1 != 0) {
                v1->v0(1);
            }
        }
        v1 = (S_vv1 *)((S_vv1Data *)v1)->f0c;
    }
}
