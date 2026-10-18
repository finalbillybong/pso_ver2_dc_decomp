typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char f00;
};
S_vv1 *operation_8c217d0c(int a0, int a1)
{
    S_vv1 *v1;
    S_vv1 *v2;
    int v3;
    char v4;
    v1 = (S_vv1 *)a0;
    v2 = (S_vv1 *)a1;
    v3 = 0;
    while (0x10 > v3) {
        v4 = v1->f00;
        if (v4 == 0) {
            break;
        }
        v1++;
        if (v4 == 0x2c) {
            break;
        }
        v2->f00 = v4;
        v3++;
        v2++;
    }
    if (v1->f00 == 0x2c) {
        v1++;
    }
    v2->f00 = 0;
    return v1;
}
