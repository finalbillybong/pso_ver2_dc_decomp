typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c09e920(int, int, int);
int operation_8c09e994(int a0)
{
    int v1;
    int t1;
    t1 = 0;
    v1 = (int)0;
    while (0x12 > v1) {
        t1 = call_8c09e920(v1, a0, 1);
        if (t1 != 0) {
            break;
        }
        v1 = (int)(v1 + 1);
    }
    return t1;
}
