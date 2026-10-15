typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4db9e4;
extern int g_8c4e2fa0;
extern void call_8c1dc770(int);
void operation_8c1dc734(void)
{
    int v42;
    g_8c4e2fa0 = 0;
    if (g_8c4db9e4 != 0) {
        v42 = (int)(g_8c4db9e4 + 0x7ec);
        if (v42 != 0) {
            call_8c1dc770(v42);
            g_8c4e2fa0 = (int)(v42);
        }
    }
}
