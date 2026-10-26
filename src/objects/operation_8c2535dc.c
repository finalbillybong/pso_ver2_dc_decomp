typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    int f00;
    int f04;
};
int operation_8c2535dc(int a0, int a1)
{
    S_vv2 *v2;
    int v3;
    int v4;
    int v5;
    a1 = (int)(unsigned short)a1;
    v2 = (S_vv2 *)a0;
    v3 = (int)0;
    while (5 > v3) {
        v4 = (int)v2->f00;
        if (v4 == a1) {
            v5 = (int)v2->f04;
            return (int)(v5);
        }
        v3 = (int)(v3 + 1);
        v2 = (S_vv2 *)((char *)v2 + 8);
    }
    return 0;
}
