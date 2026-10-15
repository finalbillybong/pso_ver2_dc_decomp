typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db494 S_L8c4db494;
struct S_L8c4db494 {
    char unknown0[0x9];
    char f09;
};
extern int g_8c286628;
extern S_L8c4db494 g_8c4db494;
void operation_8c170018(unsigned int a0)
{
    if ((unsigned int)1 >= a0) {
        (&g_8c4db494)->f09 = *(int *)((char *)&g_8c286628 + (a0 << 2));
        return;
    }
    (&g_8c4db494)->f09 = g_8c286628;
}
