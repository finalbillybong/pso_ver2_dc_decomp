typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c41bcf0;
void operation_8c1d9e50(void)
{
    int v1;
    int v3;
    int v2;
    v1 = (int)0;
    while (6 > v1) {
        *(int *)((char *)0x8c4e2ec0 + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    v2 = (int)g_8c41bcf0;
    v3 = (int)0;
    while (6 > v3) {
        if ((int)v2 == *(int *)((char *)0x8c2894dc + (v3 << 2))) {
            *(int *)((char *)0x8c4e2ec0 + (v3 << 2)) = 1;
            return;
        }
        v3 = (int)(v3 + 1);
    }
}
