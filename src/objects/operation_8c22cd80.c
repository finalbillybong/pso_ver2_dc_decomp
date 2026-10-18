typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c506340;
extern int g_8c506344;
extern int g_8c506348;
extern void call_8c12b880(void *, int, int);
void operation_8c22cd80(void)
{
    g_8c506340 = 0;
    g_8c506344 = 0;
    g_8c506348 = 0;
    call_8c12b880((void *)((void *)0x8c506350), 0, 0x3c);
    call_8c12b880((void *)((void *)0x8c50638c), 0, 0x3c);
    call_8c12b880((void *)((void *)0x8c5063c8), 0, 0x3c);
    *(int *)0x8c5064f8 = 0;
    *(int *)0x8c5064fc = 0;
    *(int *)0x8c506500 = 0;
}
