typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c185378(int);
int operation_8c184ba4(int a0, int a1, int a2)
{
    int v4;
    int v3;
    int v1;
    int t1;
    v3 = (int)0;
    v1 = (int)-1;
    while (4 > v3) {
        v4 = (int)(v3 << 2);
        t1 = call_8c185378((int)(a0 + v4 + 0x78));
        if ((short)t1 == v1) {
            *(short *)((char *)((char *)a0 + 0x78) + (v4)) = a1;
            *(short *)((char *)((char *)a0 + 0x7a) + (v4)) = a2;
            return 1;
        }
        v3 = (int)(v3 + 1);
    }
    return 0;
}
