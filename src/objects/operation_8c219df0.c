typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4db254;
extern int g_8c4dc800;
extern int g_8c510ba0;
int operation_8c219df0(void)
{
    int v2;
    int v1;
    int v5;
    v5 = 0;
    v2 = v5;
    if (g_8c4dc800 == 0) {
        v1 = (int)(g_8c510ba0 != 0);
        if (v1 == 0) {
            v2 = 1;
        }
    }
    if (v2 != 0) {
        if (g_8c4db254 == 0) {
            v5 = 1;
        }
    }
    return v5;
}
