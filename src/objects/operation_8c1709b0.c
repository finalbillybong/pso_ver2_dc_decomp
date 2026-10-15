typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db494 S_L8c4db494;
struct S_L8c4db494 {
    char unknown0[0x11];
    char f11;
};
extern S_L8c4db494 g_8c4db494;
void operation_8c1709b0(unsigned int a0)
{
    if ((unsigned int)1 >= a0) {
        (&g_8c4db494)->f11 = *(int *)((char *)0x8c28664c + (a0 << 2));
    }
}
