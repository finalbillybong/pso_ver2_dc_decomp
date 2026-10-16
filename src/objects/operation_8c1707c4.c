typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db494 S_L8c4db494;
typedef struct S_g8c4db408 S_g8c4db408;
struct S_L8c4db494 {
    char unknown0[0xd];
    char f0d;
};
extern S_g8c4db408 *g_8c4db408;
extern S_L8c4db494 g_8c4db494;
void operation_8c1707c4(int a0)
{
    int v1;
    int v2;
    v1 = (int)*(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a0 << 2));
    v2 = (int)*(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)(a0 + 1) << 2));
    if (v1 >= 0 && 3 >= v1) {
        *(char *)((char *)&g_8c4db494.f0d + (*(int *)((char *)0x8c286630 + (v1 << 2)))) = v2;
    }
}
