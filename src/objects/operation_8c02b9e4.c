typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
int operation_8c02b9e4(void)
{
    int v3;
    int v2;
    S_vv1 *v1;
    int v4;
    v1 = (S_vv1 *)(void *)0x8c41ce2c;
    v2 = (int)0;
    v3 = (int)0;
    while (0xc > v3) {
        v4 = (int)v2;
        if (v1->f00 != 0) {
            v4 = (int)(v2 + 1);
        }
        v1 = (S_vv1 *)((char *)v1 + 4);
        v2 = (int)v4;
        v3 = (int)(v3 + 1);
    }
    return v2;
}
