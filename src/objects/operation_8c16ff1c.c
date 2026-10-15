typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db494 S_L8c4db494;
struct S_L8c4db494 {
    char unknown0[0x2];
    char f02;
};
extern int g_8c2865e8;
extern S_L8c4db494 g_8c4db494;
void operation_8c16ff1c(unsigned int a0)
{
    if ((unsigned int)1 >= a0) {
        (&g_8c4db494)->f02 = *(int *)((char *)&g_8c2865e8 + (a0 << 2));
        return;
    }
    (&g_8c4db494)->f02 = g_8c2865e8;
}
