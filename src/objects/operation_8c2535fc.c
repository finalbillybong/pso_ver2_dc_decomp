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
void operation_8c2535fc(int a0, int a1, int a2)
{
    S_vv2 *v2;
    int v3;
    int v4;
    a1 = (int)(unsigned short)a1;
    v2 = (S_vv2 *)a0;
    v3 = (int)0;
    while (5 > v3) {
        v4 = (int)v2->f00;
        if (v4 == a1) {
            v2->f04 = a2;
            return;
        }
        v3 = (int)(v3 + 1);
        v2 = (S_vv2 *)((char *)v2 + 8);
    }
}
