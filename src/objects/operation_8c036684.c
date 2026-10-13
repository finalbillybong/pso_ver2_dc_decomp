typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4621ac S_L8c4621ac;
struct S_L8c4621ac {
    char unknown0[0x20];
    int f20;
};
extern S_L8c4621ac g_8c4621ac;
int operation_8c036684(void)
{
    return (int)((&g_8c4621ac)->f20);
}
