typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c247f08(int a0)
{
    int v1;
    v1 = (int)(*(int *)0x8c510ba0 != 0);
    if (v1 == 0) {
        return 0;
    }
    *(int *)0x8c4703c0 = a0;
    return 1;
}
