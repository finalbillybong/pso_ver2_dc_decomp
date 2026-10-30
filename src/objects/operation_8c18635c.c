typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x2];
    short f02;
    char unknown4[0x40];
};
extern S_vv1 *g_8c46ec50;
void operation_8c18635c(void)
{
    S_vv1 *v1;
    int v2;
    int n;
    v1 = g_8c46ec50;
    n = 0xba0;
    for (v2 = 0; v2 < n; v2++) {
        v1->f02 = 0;
        v1++;
    }
}
