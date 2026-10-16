typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c14f8e4(void)
{
    int v1;
    int v2;
    v1 = (int)0;
    v2 = (int)0;
    while (0x12 > v2) {
        v1 = (int)(v1 + *(int *)((char *)0x8c46ec58 + (v2 << 2)));
        v2 = (int)(v2 + 1);
    }
    return (int)(v1);
}
