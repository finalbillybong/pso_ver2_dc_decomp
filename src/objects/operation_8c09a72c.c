typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c469e98 S_L8c469e98;
struct S_L8c469e98 {
    char unknown0[0x14];
    int f14;
};
extern S_L8c469e98 g_8c469e98;
int operation_8c09a72c(int a0)
{
    return (&g_8c469e98)->f14 & a0;
}
