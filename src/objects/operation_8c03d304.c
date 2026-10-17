typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c03d304(int a0)
{
    int v1;
    v1 = (int)0;
    while (0x10 > v1) {
        if (*(int *)((char *)0x8c462c88 + (v1 << 2)) == 0) {
            *(int *)((char *)0x8c462c88 + (v1 << 2)) = a0;
            *(short *)0x8c462c82 += 1;
            return 1;
        }
        v1 = (int)(v1 + 1);
    }
    return 0;
}
