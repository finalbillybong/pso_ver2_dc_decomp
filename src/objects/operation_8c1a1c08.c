typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int current_effect_mode(void);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c1a1c08(int a0)
{
    int t1;
    t1 = current_effect_mode();
    if (t1 != 5) {
        call_8c05fbf8(4, (int)(a0 + 0x3c), 0, 0);
        return;
    }
    call_8c05fbf8(2, (int)(a0 + 0x3c), 0, 0);
}
