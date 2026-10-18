typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4d9e20;
extern int g_8c4d9e24;
void operation_8c13f454(int a0)
{
    int v1;
    v1 = (int)4;
    if (g_8c4d9e20 != 0) {
        if (g_8c4d9e24 != 0) {
            v1 += 8;
        }
        if (a0 >= 0 && a0 >= v1) {
            return;
        }
    }
}
