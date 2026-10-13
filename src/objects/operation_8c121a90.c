typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
void operation_8c121a90(int a0, int a1)
{
    char *v2;
    char *v1;
    v1 = (char *)*(int *)((char *)0x8c4d878c + (a0 << 2));
    v2 = (char *)*(int *)((char *)0x8c4d878c + (a1 << 2));
    *(int *)((char *)0x8c4d878c + (a0 << 2)) = (int)(v2);
    *(int *)((char *)0x8c4d878c + (a1 << 2)) = (int)(v1);
}
