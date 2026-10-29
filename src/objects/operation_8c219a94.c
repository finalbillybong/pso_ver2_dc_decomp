typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41825c S_L8c41825c;
typedef struct S_g8c505900 S_g8c505900;
struct S_L8c41825c {
    char unknown0[0x4];
    int f04;
};
extern int g_8c3363a0;
extern int g_8c4703c0;
extern S_g8c505900 *g_8c505900;
extern int g_8c505904;
extern int g_8c505908;
extern int g_8c50590c;
extern int g_8c505910;
extern int g_8c505914;
extern int g_8c505918;
extern int g_8c510ba0;
extern S_L8c41825c g_8c41825c;
extern int operation_193530(void *, int);
void operation_8c219a94(void)
{
    int v1;
    int v5;
    int v7;
    int v11;
    void *p;
    v1 = g_8c4703c0;
    v5 = 0;
    if (g_8c505914 != v1 || g_8c3363a0 != g_8c41825c.f04) {
        v5 = 1;
    }
    v7 = g_8c510ba0 != 0;
    if (v7 != g_8c505918) {
        g_8c505918 = v7;
        v5 = 1;
    }
    if (v5 == 1) {
        g_8c3363a0 = g_8c41825c.f04;
        g_8c505914 = v1;
        v11 = g_8c3363a0 + v1 * 10;
        if (v11 >= 0 && 0x28 >= v11) {
            if (g_8c505918 == 0) {
                p = (void *)g_8c505900;
                if (p != 0) {
                    g_8c50590c = operation_193530(p, v11);
                }
            } else {
                p = (void *)g_8c505908;
                if (p != 0) {
                    g_8c50590c = operation_193530(p, v1 * 10);
                }
            }
        }
        p = (void *)g_8c505904;
        if (p != 0) {
            g_8c505914 = g_8c4703c0;
            v11 = g_8c3363a0 + g_8c4703c0 * 10;
            if (v11 >= 0 && 0x28 >= v11) {
                g_8c505910 = operation_193530(p, v11);
            }
        }
    }
}
