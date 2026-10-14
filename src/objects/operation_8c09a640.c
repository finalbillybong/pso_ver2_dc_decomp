typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c469e98 S_L8c469e98;
struct S_L8c469e98 {
    char unknown0[0x10];
    int f10;
};
extern S_L8c469e98 g_8c469e98;
int operation_8c09a640(int a0)
{
    return (&g_8c469e98)->f10 & a0;
}
