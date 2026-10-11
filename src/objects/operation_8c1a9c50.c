typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int current_effect_mode(void);
int operation_8c1a9c50(void)
{
    int t1;
    t1 = current_effect_mode();
    if (t1 != 0xf) {
        return 0;
    }
    if (*(int *)0x8c44be08 >= 0xa) {
        if (0xe >= *(int *)0x8c44be08) {
            return 1;
        }
    }
    return 0;
}
