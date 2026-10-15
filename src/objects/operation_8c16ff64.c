typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db494 S_L8c4db494;
struct S_L8c4db494 {
    char unknown0[0x4];
    char f04;
};
extern int g_8c2865fc;
extern S_L8c4db494 g_8c4db494;
void operation_8c16ff64(unsigned int a0)
{
    if ((unsigned int)1 >= a0) {
        (&g_8c4db494)->f04 = *(int *)((char *)&g_8c2865fc + (a0 << 2));
        return;
    }
    (&g_8c4db494)->f04 = g_8c2865fc;
}
