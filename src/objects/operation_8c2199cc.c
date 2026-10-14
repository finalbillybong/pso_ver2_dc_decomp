typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c505904 S_g8c505904;
extern int g_8c3363a0;
extern int g_8c4703c0;
extern S_g8c505904 *g_8c505904;
extern int g_8c505910;
extern int g_8c505914;
extern int operation_193530(void *, int);
void operation_8c2199cc(void)
{
    int t1;
    if (g_8c505904 != 0) {
        g_8c505914 = (int)(g_8c4703c0);
        if ((g_8c3363a0 + g_8c4703c0 * 0xa) >= 0 && 0x28 >= (g_8c3363a0 + g_8c4703c0 * 0xa)) {
            t1 = operation_193530(g_8c505904, (int)(g_8c3363a0 + g_8c4703c0 * 0xa));
            g_8c505910 = (int)(t1);
        }
    }
}
