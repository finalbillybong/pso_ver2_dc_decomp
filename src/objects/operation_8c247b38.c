typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
struct S_vv1 {
    S_vv1_0 *f00;
};
extern int call_8c238458(void *);
int operation_8c247b38(int a0, int a1)
{
    int v2;
    S_vv1 *v1;
    int t1;
    v1 = (S_vv1 *)(a1 + 0x78);
    v2 = (int)0;
    while (0xa > v2) {
        t1 = call_8c238458(v1->f00);
        if (v1->f00 == 0) {
            goto L_8c247b60;
        }
        if (t1 == 0) {
            goto L_8c247b60;
        }
        v2 = (int)(v2 + 1);
        v1 = (S_vv1 *)((char *)v1 + 4);
    }
L_8c247b60:;
    return v2;
}
