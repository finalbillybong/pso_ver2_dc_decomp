typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    unsigned char f00;
};
int operation_8c1acc80(int a0, int a1)
{
    int v1;
    int v2;
    int v4;
    S_vv3 *v3;
    if (a1 == 0) {
        v1 = (int)(a0 + 4);
        v2 = (int)v1;
    } else {
        v2 = (int)(a0 + 0x14);
    }
    v3 = (S_vv3 *)v2;
    v4 = (int)0;
    while (4 > v4) {
        if ((v3->f00) != 0) {
            return 0;
        }
        v3 = (S_vv3 *)((char *)v3 + 4);
        v4 = (int)(v4 + 1);
    }
    return 1;
}
