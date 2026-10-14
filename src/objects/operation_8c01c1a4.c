typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cb00 S_L8c41cb00;
struct S_L8c41cb00 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x8];
    int f10;
};
extern S_L8c41cb00 g_8c41cb00;
void operation_8c01c1a4(int a0)
{
    (&g_8c41cb00)->f04 = a0;
    (&g_8c41cb00)->f10 = 1;
}
