typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c09ea64(void)
{
    int v3;
    int v2;
    int v1;
    int v5;
    int v4;
    v3 = 0;
    v1 = v3;
    for (v2 = v3; v2 < 0x12; v2++) {
        v1 += *(int *)((char *)0x8c46ec58 + (v2 << 2));
    }
    v3 += v1;
    v4 = 0;
    for (v5 = v4; v5 < 0x12; v5++) {
        v4 += *(int *)((char *)0x8c46eca0 + (v5 << 2));
    }
    v3 += v4;
    return (v3 << 1) + 0x10;
}
