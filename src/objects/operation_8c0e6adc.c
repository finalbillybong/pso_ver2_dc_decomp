typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern float object_random_fraction(void *);
extern void call_8c05fbf8(int, int, int, int);
extern void update_last_effect(int);
void operation_8c0e6adc(int a0)
{
    float t1;
    t1 = object_random_fraction((void *)a0);
    if (0.5f > t1) {
        call_8c05fbf8(0x3003b, (int)(a0 + 0x3c), 0, 0);
    } else {
        call_8c05fbf8(0x3003c, (int)(a0 + 0x3c), 0, 0);
    }
    update_last_effect(-0x100);
}
