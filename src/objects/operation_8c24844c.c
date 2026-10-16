typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
struct S_L8c339ca0 {
    char unknown0[0x24];
    int f24;
    int f28;
    int f2c;
};
extern S_L8c339ca0 g_8c339ca0;
int operation_8c24844c(void)
{
    int v1;
    if ((&g_8c339ca0)->f24 != 0) {
        v1 = (int)(&g_8c339ca0)->f28;
    } else {
        v1 = (int)0;
    }
    if (v1 == 1) {
        if ((&g_8c339ca0)->f2c != 0) {
            return 1;
        }
        v1 = (int)-1;
    }
    return (int)(v1);
}
