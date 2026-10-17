typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c510e88 S_L8c510e88;
typedef struct S_x73584 S_x73584;
struct S_L8c510e88 {
    char unknown0[0x4];
    int f04;
};
struct S_x73584 {
    float f00;
};
extern S_L8c510e88 g_8c510e88;
void operation_8c24759c(void)
{
    int v1;
    v1 = (int)0;
    while (4 > v1) {
        ((S_x73584 *)((char *)&g_8c510e88.f04 + v1 * 0xc))->f00 = -10000.0f;
        v1 = (int)(v1 + 1);
    }
}
