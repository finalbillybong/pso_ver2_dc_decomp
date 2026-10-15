typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db494 S_L8c4db494;
struct S_L8c4db494 {
    char unknown0[0x8];
    char f08;
};
extern int g_8c286620;
extern S_L8c4db494 g_8c4db494;
void operation_8c16fff4(unsigned int a0)
{
    if ((unsigned int)1 >= a0) {
        (&g_8c4db494)->f08 = *(int *)((char *)&g_8c286620 + (a0 << 2));
        return;
    }
    (&g_8c4db494)->f08 = g_8c286620;
}
