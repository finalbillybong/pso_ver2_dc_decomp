typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c247e8c(int a0)
{
    int v1;
    int v2;
    int v3;
    v1 = (int)a0;
    v2 = (int)0;
    while (v1 != 0) {
        v3 = (int)v2;
        if (((v1 & 1)) != 0) {
            v3 = (int)(v2 + 1);
        }
        v1 = (int)((unsigned int)v1 >> 1);
        v2 = (int)v3;
    }
    return v2;
}
