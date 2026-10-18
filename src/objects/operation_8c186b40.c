typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4e18c0 S_L8c4e18c0;
typedef struct S_g8c4e18c0 S_g8c4e18c0;
typedef struct S_g8c4e18c4 S_g8c4e18c4;
struct S_L8c4e18c0 {
    char unknown0[0x4];
    S_g8c4e18c4 *f04;
};
extern S_L8c4e18c0 g_8c4e18c0;
extern void operation_8c186b78(int, int, int);
void operation_8c186b40(void)
{
    int v1;
    int off;
    v1 = (int)0;
    while (0x10 > v1) {
        off = v1 << 3;
        operation_8c186b78(v1, (int)(*(S_g8c4e18c0 **)((char *)&g_8c4e18c0 + off)), (int)(*(S_g8c4e18c4 **)((char *)&g_8c4e18c0.f04 + off)));
        v1 = (int)(v1 + 1);
    }
}
