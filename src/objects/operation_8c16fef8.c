typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db494 S_L8c4db494;
struct S_L8c4db494 {
    char unknown0[0x1];
    char f01;
};
extern int g_8c2865d8;
extern S_L8c4db494 g_8c4db494;
void operation_8c16fef8(unsigned int a0)
{
    if ((unsigned int)3 >= a0) {
        (&g_8c4db494)->f01 = *(int *)((char *)&g_8c2865d8 + (a0 << 2));
        return;
    }
    (&g_8c4db494)->f01 = g_8c2865d8;
}
