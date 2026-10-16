typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c247f2c(float);
void operation_8c170108(int a0)
{
    char *v1;
    float v3;
    float v2;
    v1 = (char *)*(int *)0x8c4db408;
    v2 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    v3 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    operation_8c247f2c(v3 / (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0 << 2)) + v2);
}
