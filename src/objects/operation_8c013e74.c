typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c418280[];
extern int current_effect_mode(void);
extern void call_8c3a8b38(float, float, float);
extern void call_8c3a8b7e(float, float, float);
extern void call_8c3a9cb4(float, float, float);
extern void call_8c3a9cfa(float, float, float);
extern void call_8c3a9cec(float, float);
void operation_8c013e74(void)
{
    int t1;
    t1 = current_effect_mode();
    if (t1 == 0xf) {
        call_8c3a8b38(*(float *)(g_8c418280 + 0xc), *(float *)(g_8c418280 + 0x10), *(float *)(g_8c418280 + 0x14));
        call_8c3a8b7e(*(float *)(g_8c418280 + 0x28), *(float *)(g_8c418280 + 0x2c), *(float *)(g_8c418280 + 0x30));
    } else {
        call_8c3a9cb4(*(float *)(g_8c418280 + 0xc), *(float *)(g_8c418280 + 0x10), *(float *)(g_8c418280 + 0x14));
        call_8c3a9cfa(*(float *)(g_8c418280 + 0x28), *(float *)(g_8c418280 + 0x2c), *(float *)(g_8c418280 + 0x30));
    }
    call_8c3a9cec(*(float *)(g_8c418280 + 0x1c), *(float *)(g_8c418280 + 0x20));
}
