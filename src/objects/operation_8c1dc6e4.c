typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c1dc6e4(int a0)
{
    if (!(a0 >= 0)) {
        return 0;
    }
    if (a0 >= 0x64) {
        return 0;
    }
    return *(int *)0x8c4db9e8 + 4 + (a0 << 7);
}
