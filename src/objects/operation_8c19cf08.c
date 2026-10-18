typedef struct S_g8c4dc4a0 S_g8c4dc4a0;
typedef struct S_vv4 S_vv4;
struct S_g8c4dc4a0 {
    char unknown0[0x10];
    int f10;
};
struct S_vv4 {
    char f00;
    char f01;
};
char operation_8c19cf08(int a0)
{
    S_vv4 *v4;
    char v3;
    char v2;
    v4 = (S_vv4 *)(*(S_g8c4dc4a0 **)0x8c4dc4a0)->f10;
    v2 = (char)-1;
    goto L_test;
L_body:;
    if (v3 == (char)a0) {
        return v4->f01;
    }
    v4++;
L_test:;
    v3 = v4->f00;
    if (v3 != v2) {
        goto L_body;
    }
    return 0;
}
