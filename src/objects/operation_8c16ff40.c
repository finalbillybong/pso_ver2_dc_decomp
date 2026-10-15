typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db494 S_L8c4db494;
struct S_L8c4db494 {
    char unknown0[0x3];
    char f03;
};
extern int g_8c2865f0;
extern S_L8c4db494 g_8c4db494;
void operation_8c16ff40(unsigned int a0)
{
    if ((unsigned int)2 >= a0) {
        (&g_8c4db494)->f03 = *(int *)((char *)&g_8c2865f0 + (a0 << 2));
        return;
    }
    (&g_8c4db494)->f03 = g_8c2865f0;
}
