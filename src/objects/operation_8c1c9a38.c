typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c1c9a38(int a0, int a1)
{
    int v1;
    int v2;
    int v3;
    int v5;
    int v6;
    int v8;
    v3 = (int)0;
    v5 = (int)a1;
    if ((char)a1 >= 0x61) {
        v1 = (int)0;
        v2 = (int)a1;
        if (0x7a >= (char)a1) {
            return a1 + -0x60;
        }
        v3 = (int)v1;
        v5 = (int)v2;
    }
    v8 = (int)v3;
    if ((char)v5 >= 0x41) {
        v6 = (int)v3;
        if (0x5a >= (char)v5) {
            v6 = (int)(v5 + -0x40);
        }
        v8 = (int)v6;
    }
    return v8;
}
