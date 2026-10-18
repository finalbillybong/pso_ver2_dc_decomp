typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c505900 S_g8c505900;
extern int g_8c3363a0;
extern int g_8c4703c0;
extern S_g8c505900 *g_8c505900;
extern int g_8c505908;
extern int g_8c50590c;
extern int g_8c505914;
extern int g_8c505918;
extern int operation_193530(void *, int);
void operation_8c21994c(void)
{
    int v1;
    int v2;
    int v57;
    int t1;
    int t2;
    v2 = g_8c4703c0;
    g_8c505914 = v2;
    v2 = v2 * 0xa;
    v1 = (int)(g_8c3363a0 + v2);
    if (v1 >= 0 && 0x28 >= v1) {
        if (g_8c505918 == 0) {
            if (g_8c505900 == 0) {
                return;
            }
            t1 = operation_193530(g_8c505900, v1);
            g_8c50590c = (int)(t1);
            return;
        }
        v57 = (int)g_8c505908;
        if (v57 != 0) {
            t2 = operation_193530((void *)v57, v2);
            g_8c50590c = (int)(t2);
        }
    }
}
