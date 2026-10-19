typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c5049e0;
extern int g_8c5049e4;
extern int g_8c5049e8;
extern int g_8c5049ec;
extern int g_8c5049f0;
extern int g_8c5049f4;
extern int g_8c5049f8;
extern void call_8c12b880(void *, int, int);
void operation_8c207b04(void)
{
    g_8c5049e8 = 0;
    g_8c5049ec = 0;
    g_8c5049f0 = 0;
    call_8c12b880((void *)((void *)0x8c504968), 0, 0x3c);
    call_8c12b880((void *)((void *)0x8c5049a4), 0, 0x3c);
    g_8c5049e0 = 0;
    g_8c5049e4 = 0;
    g_8c5049f4 = 0;
    g_8c5049f8 = 0;
}
