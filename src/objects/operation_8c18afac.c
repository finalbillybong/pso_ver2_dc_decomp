typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4dbc84 S_L8c4dbc84;
struct S_L8c4dbc84 {
    char unknown0[0x10];
    int f10;
};
extern S_L8c4dbc84 g_8c4dbc84;
void operation_8c18afac(int a0)
{
    if (a0 >= 0 && 0xf >= a0 && *(int *)((char *)&g_8c4dbc84.f10 + (a0 * 0x14)) != -1) {
        *(int *)((char *)&g_8c4dbc84.f10 + (a0 * 0x14)) = -1;
    }
}
