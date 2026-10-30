typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1_0 S_vv1_0;
extern int g_8c4db408;
extern void operation_8c150054(int, int, int, int, int);
void operation_8c16fde8(int a0)
{
    char *v1;
    int v4;
    int v2;
    int v5;
    int v3;
    int v6;
    int pm1;
    v1 = (char *)g_8c4db408;
    v2 = *(int *)(v1 + ((unsigned char)a0 << 2));
    a0++;
    v3 = a0;
    ++v3;
    v6 = *(int *)(((unsigned char)a0 << 2) + v1);
    v4 = *(int *)(((unsigned char)v3 << 2) + v1);
    ++v3;
    pm1 = (unsigned char)v3 << 2;
    a0 = pm1;
    v5 = *(int *)(v1 + (a0));
    v3++;
    a0 = (unsigned char)v3 << 2;
    operation_8c150054(v4, v2, v6, v5, *(int *)(v1 + (a0)));
}
