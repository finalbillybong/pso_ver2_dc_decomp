typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c339ca0[];
extern void call_8c2384b0(void *, int, int);
void operation_8c247fa8(int a0, int a1)
{
    call_8c2384b0((void *)((g_8c339ca0 + 0x54)), a0, 0xc);
    *(int *)(g_8c339ca0 + 0x1c) = a1 | -0x1000000;
}
