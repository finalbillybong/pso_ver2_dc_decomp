void operation_8c238500(char *a0, char *a1, int a2)
{
    int v3;
    int m1;
    char v6;
    if (1 > a2) {
        a2 = 1;
    } else if (a2 > 0x20) {
        a2 = 0x20;
    }
    a2 -= 1;
    v3 = 0;
    m1 = -1;
    while (v3 < a2) {
        v6 = *a1;
        if (v6 == 0) {
            *a0 = 0;
            return;
        }
        if (v3 == 0) {
            *a0 = v6 ^ 0x7f;
        } else {
            *a0 = a0[m1] + (v6 ^ 0x7f);
        }
        v3++;
        a1++;
        a0++;
    }
    *a0 = 0;
}
