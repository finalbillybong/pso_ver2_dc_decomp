typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2865cc S_L8c2865cc;
struct S_L8c2865cc {
    char unknown0[0x8];
    int f08;
};
extern char g_8c4db494;
extern S_L8c2865cc g_8c2865cc;
void operation_8c16fed4(unsigned int a0)
{
    if ((unsigned int)2 >= a0) {
        g_8c4db494 = *(int *)((char *)&g_8c2865cc + (a0 << 2));
        return;
    }
    g_8c4db494 = (&g_8c2865cc)->f08;
}
