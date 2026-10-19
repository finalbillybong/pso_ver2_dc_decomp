typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int current_effect_mode(void);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c0fda3c(int a0)
{
    int t1;
    t1 = current_effect_mode();
    switch (t1) {
    case 1:
    case 2:
        call_8c05fbf8(0x40013, (int)(a0 + 0x3c), 0, 0);
        return;
    case 3:
    case 4:
    case 5:
        call_8c05fbf8(0x40012, (int)(a0 + 0x3c), 0, 0);
        return;
    case 6:
    case 7:
        call_8c05fbf8(0x4000c, (int)(a0 + 0x3c), 0, 0);
        return;
    case 8:
    case 9:
    case 10:
        call_8c05fbf8(0x40013, (int)(a0 + 0x3c), 0, 0);
        return;
    case 16:
    case 17:
        call_8c05fbf8(0x40008, (int)(a0 + 0x3c), 0, 0);
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
