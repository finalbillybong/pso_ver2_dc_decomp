typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cd3c S_L8c41cd3c;
typedef struct S_x41088 S_x41088;
typedef struct S_x42000 S_x42000;
typedef struct S_x54544 S_x54544;
struct S_L8c41cd3c {
    char unknown0[0x4];
    int f04;
    int f08;
    int f0c;
    int f10;
};
struct S_x54544 {
    float f00;
};
struct S_x41088 {
    float f00;
};
struct S_x42000 {
    float f00;
};
extern S_L8c41cd3c g_8c41cd3c;
void operation_8c03bb4c(int a0, int a1, float f0, float f1, float f2)
{
    *(int *)((char *)&g_8c41cd3c + ((unsigned short)a0 * 0x14)) = 1;
    *(int *)((char *)&g_8c41cd3c.f04 + ((unsigned short)a0 * 0x14)) = a1;
    ((S_x54544 *)((char *)&g_8c41cd3c.f08 + (unsigned short)a0 * 0x14))->f00 = f0;
    ((S_x41088 *)((char *)&g_8c41cd3c.f0c + (unsigned short)a0 * 0x14))->f00 = f1;
    ((S_x42000 *)((char *)&g_8c41cd3c.f10 + (unsigned short)a0 * 0x14))->f00 = f2;
}
