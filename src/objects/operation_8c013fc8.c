typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int current_effect_mode(void);
extern void call_8c0142d8(int);
void operation_8c013fc8(void)
{
    int v3;
    int t1;
    if (*(int *)0x8c4189e4 != 0) {
        t1 = current_effect_mode();
        if (*(int *)0x8c44be20 != 0 || *(int *)0x8c4703c0 == 3) {
            v3 = (int)(t1 + 0x12);
        } else {
            v3 = (int)t1;
        }
        call_8c0142d8(*(int *)0x8c4189e4 + v3 * 0x44);
        return;
    }
    call_8c0142d8((int)(void *)0x8c2e2e84);
}
