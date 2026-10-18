typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char f00;
};
S_vv1 *operation_8c217cf0(int a0, int a1, int a2)
{
    S_vv1 *v1;
    int v2;
    v1 = (S_vv1 *)a0;
    v2 = (int)(a1 + 1);
    while (a2 > v2) {
        if (v1->f00 == 0) {
            break;
        }
        if ((v1++)->f00 == 0x2c) {
            v2 = (int)(v2 + 1);
        }
    }
    return v1;
}
