typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
void operation_8c09b2ec(void)
{
    int v2;
    int v1;
    int v3;
    v1 = (int)0;
    while (0xa > v1) {
        v3 = v1 << 3;
        *(int *)((char *)0x8c46eb3c + v3) = *(int *)((char *)0x8c46eb8c + v3) = 0;
        v1 = (int)(v1 + 1);
    }
    v2 = (int)0;
    while (5 > v2) {
        *(int *)((char *)0x8c46ebdc + (v2 << 3)) = 0;
        v2 = (int)(v2 + 1);
    }
    *(int *)0x8c46ec04 = 0;
}
