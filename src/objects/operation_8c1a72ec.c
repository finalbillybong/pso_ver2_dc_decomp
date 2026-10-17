typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c1a72ec(int a0)
{
    int v1;
    if (!(a0 >= 0)) {
        v1 = (int)0;
    } else {
        v1 = (int)a0;
        if (a0 > 0xc7) {
            v1 = (int)0xc7;
        }
    }
    return (int)(v1);
}
