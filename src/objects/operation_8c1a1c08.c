typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int get_current_area_8c032b10(void);
extern void play_se_8c05fbf8(int, int, int, int);
void operation_8c1a1c08(int a0)
{
    int t1;
    t1 = get_current_area_8c032b10();
    if (t1 != 5) {
        play_se_8c05fbf8(4, (int)(a0 + 0x3c), 0, 0);
        return;
    }
    play_se_8c05fbf8(2, (int)(a0 + 0x3c), 0, 0);
}
