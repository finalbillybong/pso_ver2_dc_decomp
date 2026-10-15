typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c28660c S_L8c28660c;
typedef struct S_L8c4db494 S_L8c4db494;
struct S_L8c4db494 {
    char unknown0[0x6];
    char f06;
};
struct S_L8c28660c {
    char unknown0[0x8];
    int f08;
};
extern S_L8c28660c g_8c28660c;
extern S_L8c4db494 g_8c4db494;
void operation_8c16ffac(unsigned int a0)
{
    if ((unsigned int)2 >= a0) {
        (&g_8c4db494)->f06 = *(int *)((char *)&g_8c28660c + (a0 << 2));
        return;
    }
    (&g_8c4db494)->f06 = (&g_8c28660c)->f08;
}
