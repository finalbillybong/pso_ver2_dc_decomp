typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int get_current_area_8c032b10(void);
extern void play_se_8c05fbf8(int, int, int, int);
void operation_8c162b04(int a0)
{
    int t1;
    int t2;
    int t3;
    int t4;
    if (*(int *)0x8c2e2ad8 == 1) {
        t1 = get_current_area_8c032b10();
        if (t1 != 0x10) {
            t2 = get_current_area_8c032b10();
            if (t2 != 0x11) {
                goto L_8c162b38;
            }
        }
        play_se_8c05fbf8(0x40004, (int)(a0 + 0x3c), 0, 0);
        return;
    }
L_8c162b38:;
    if (*(int *)0x8c2e2ad8 == 1) {
        t3 = get_current_area_8c032b10();
        if (t3 != 1) {
            t4 = get_current_area_8c032b10();
            if (t4 != 2) {
                goto L_8c162b66;
            }
        }
        play_se_8c05fbf8(0x4000d, (int)(a0 + 0x3c), 0, 0);
        return;
    }
L_8c162b66:;
    play_se_8c05fbf8(0x40006, (int)(a0 + 0x3c), 0, 0);
}
