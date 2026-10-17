typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c05bc18(int a0)
{
    int v2;
    int v5;
    int v3;
    v3 = (int)0xe;
    if (*(int *)0x8c2e2ad8 != 0 && *(int *)0x8c4703c0 == 3) {
        v2 = (int)1;
    } else {
        v2 = (int)0;
    }
    if (v2 != 0) {
        v3 = (int)0x1d;
    }
    if (!(a0 >= 0)) {
        v5 = (int)0;
    } else {
        v5 = (int)a0;
        if (a0 >= v3) {
            v5 = (int)(v3 + -1);
        }
    }
    return (int)(v5);
}
