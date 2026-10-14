typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4daae0 S_L8c4daae0;
struct S_L8c4daae0 {
    char unknown0[0x8];
    int f08;
};
extern S_L8c4daae0 g_8c4daae0;
void operation_8c16efc8(int a0)
{
    (&g_8c4daae0)->f08 = a0;
}
