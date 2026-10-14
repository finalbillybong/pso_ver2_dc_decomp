typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4e2e60;
extern int g_8c4e2e64;
extern int current_effect_mode(void);
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
void operation_8c1cddf0(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    t1 = current_effect_mode();
    if (t1 != 3) {
        if (t1 == 4) {
            goto L_8c1cde52;
        }
        if (t1 == 5) {
            goto L_8c1cde9a;
        }
    } else {
        t2 = call_8c011ecc(0x440);
        if (t2 != 0) {
            call_8c03d610(t2, 1, (void *)((void *)0x8c32931c), 0, 0, 0);
        }
        g_8c4e2e60 = (int)(t2);
        t3 = call_8c011ecc(0x440);
        if (t3 != 0) {
            call_8c03d610(t3, 1, (void *)((void *)0x8c3293a0), 0, 0, 0);
        }
        g_8c4e2e64 = (int)(t3);
        return;
L_8c1cde52:;
        t4 = call_8c011ecc(0x440);
        if (t4 != 0) {
            call_8c03d610(t4, 1, (void *)((void *)0x8c32934c), 0, 0, 0);
        }
        g_8c4e2e60 = (int)(t4);
        t5 = call_8c011ecc(0x440);
        if (t5 != 0) {
            call_8c03d610(t5, 1, (void *)((void *)0x8c3293d0), 0, 0, 0);
        }
        g_8c4e2e64 = (int)(t5);
        return;
L_8c1cde9a:;
        t6 = call_8c011ecc(0x440);
        if (t6 != 0) {
            call_8c03d610(t6, 1, (void *)((void *)0x8c329370), 0, 0, 0);
        }
        g_8c4e2e60 = (int)(t6);
        t7 = call_8c011ecc(0x440);
        if (t7 != 0) {
            call_8c03d610(t7, 1, (void *)((void *)0x8c329400), 0, 0, 0);
        }
        g_8c4e2e64 = (int)(t7);
        return;
    }
    g_8c4e2e60 = 0;
    g_8c4e2e64 = 0;
}
