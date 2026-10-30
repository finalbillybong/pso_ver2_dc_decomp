typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4d85e4;
extern int g_8c4d879c;
extern int g_8c4d87ac;
extern int g_8c4d87b0;
extern int g_8c4d87b4;
extern int g_8c4d87c4;
extern int g_8c4d97d0;
int operation_8c122410(int a0)
{
    if (g_8c4d97d0 != 0) {
        return 0;
    }
    if (g_8c4d879c == 0) {
        return 1;
    }
    if (g_8c4d879c == 3 && g_8c4d87c4 == 0) {
        return 1;
    }
    if (((a0 & 1)) != 0) {
        g_8c4d85e4 = 1;
    } else {
        g_8c4d85e4 = 2;
    }
    g_8c4d87ac = (int)(g_8c4d879c);
    g_8c4d87b0 = 0;
    g_8c4d87b4 = 0;
    return 1;
}
