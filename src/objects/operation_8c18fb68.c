typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4dc120 S_L8c4dc120;
struct S_L8c4dc120 {
    char unknown0[0x10];
    int f10;
};
extern S_L8c4dc120 g_8c4dc120;
void operation_8c18fb68(int a0)
{
    if (a0 >= 0 && 0x11 >= a0 && *(int *)((char *)&g_8c4dc120.f10 + (a0 * 0x14)) != -1) {
        *(int *)((char *)&g_8c4dc120.f10 + (a0 * 0x14)) = -1;
    }
}
