typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cb00 S_L8c41cb00;
struct S_L8c41cb00 {
    int f00;
    char unknown4[0x4];
    int f08;
    int f0c;
};
extern int g_8c41cb38;
extern S_L8c41cb00 g_8c41cb00;
void operation_8c01c17c(void)
{
    if (g_8c41cb38 == 0) {
        (&g_8c41cb00)->f00 = 1;
        (&g_8c41cb00)->f08 = 1;
        (&g_8c41cb00)->f0c = 1;
        return;
    }
    (&g_8c41cb00)->f00 = 0x13;
    (&g_8c41cb00)->f08 = 0x13;
    (&g_8c41cb00)->f0c = 0x13;
}
