typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4daae0 S_L8c4daae0;
struct S_L8c4daae0 {
    char unknown0[0x4];
    int f04;
};
extern S_L8c4daae0 g_8c4daae0;
void operation_8c16efbc(int a0)
{
    (&g_8c4daae0)->f04 = a0;
}
