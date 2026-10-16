typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
void operation_8c1713a4(int a0)
{
    int v1;
    char *v2;
    float v3;
    float v4;
    v1 = (int)a0;
    v1 = (int)(v1 + 1);
    v2 = (char *)*(int *)0x8c4db408;
    v3 = (float)*(int *)((char *)((char *)v2 + 0x0) + ((unsigned char)v1 << 2));
    v1 = (int)(v1 + 1);
    v4 = (float)*(int *)((char *)((char *)v2 + 0x0) + ((unsigned char)v1 << 2));
    *(float *)0x8c30ab0c = v3 / v4 + (float)*(int *)((char *)((char *)v2 + 0x0) + ((unsigned char)a0 << 2));
}
