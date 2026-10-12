typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c0351c8(int a0)
{
    int v3;
    if (a0 < 0 || a0 >= 0xa) {
        v3 = (int)0;
    } else {
        v3 = (int)a0;
    }
    return 0x8c2f5da0 + v3 * 0x50;
}
