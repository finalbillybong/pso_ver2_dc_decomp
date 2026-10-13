typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c46f9f4;
extern int g_8c46f9f8;
extern float g_8c46f9fc;
extern int g_8c575570;
extern void call_8c37e2e4(int, float, float, float);
extern void call_8c391c94(void);
extern void call_8c1086fc(void);
void operation_8c0caf84(void)
{
    if (g_8c46f9f4 != 0x16) {
        if (g_8c46f9f4 == 0x19) {
            goto L_8c0cafc4;
        }
        if (g_8c46f9f4 == 0x35) {
            goto L_8c0cafd0;
        }
        if (g_8c46f9f4 == 0x36) {
            goto L_8c0cafd0;
        }
    } else {
        g_8c46f9f8 = (int)(g_8c575570);
        g_8c575570 &= -0x8001;
        call_8c37e2e4(0, g_8c46f9fc, g_8c46f9fc, g_8c46f9fc);
        call_8c391c94();
        goto L_8c0cafd0;
L_8c0cafc4:;
        g_8c575570 = (int)(g_8c46f9f8);
        call_8c1086fc();
    }
L_8c0cafd0:;
    g_8c46f9f4 += 1;
}
