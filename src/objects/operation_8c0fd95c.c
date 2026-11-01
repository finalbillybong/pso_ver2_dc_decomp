typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int get_current_area_8c032b10(void);
extern void play_se_8c05fbf8(int, int, int, int);
void operation_8c0fd95c(int a0)
{
    int t1;
    t1 = get_current_area_8c032b10();
    switch (t1) {
    case 1:
    case 2:
        play_se_8c05fbf8(0x40012, (int)(a0 + 0x3c), 0, 0);
        return;
    case 3:
    case 4:
    case 5:
        play_se_8c05fbf8(0x40011, (int)(a0 + 0x3c), 0, 0);
        return;
    case 6:
    case 7:
        play_se_8c05fbf8(0x4000b, (int)(a0 + 0x3c), 0, 0);
        return;
    case 8:
    case 9:
    case 10:
        play_se_8c05fbf8(0x40012, (int)(a0 + 0x3c), 0, 0);
        return;
    case 16:
    case 17:
        play_se_8c05fbf8(0x40007, (int)(a0 + 0x3c), 0, 0);
        return;
    case 0:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        break;
    }
}
