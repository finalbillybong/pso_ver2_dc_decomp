typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c469e98 S_L8c469e98;
struct S_L8c469e98 {
    char unknown0[0xc];
    int f0c;
};
extern S_L8c469e98 g_8c469e98;
int operation_8c09a64c(int a0)
{
    return (&g_8c469e98)->f0c & a0;
}
