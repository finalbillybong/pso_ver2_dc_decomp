typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c462ce4;
extern int g_8c462cf0;
extern char g_8c2ef0e4[];
extern void call_8c12b154(void *, int, int);
extern void call_8c03ef80(void *, ...);
int operation_8c03ed10(int a0)
{
    if (g_8c462cf0 != 0) {
        g_8c462cf0 = 0;
        call_8c12b154((void *)((void *)0x8c462cf4), a0, 0x20);
        return (int)(g_8c462ce4);
    }
    call_8c03ef80((void *)((g_8c2ef0e4 + 0x37c)), a0);
    return 0;
}
