typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46efc8 S_L8c46efc8;
struct S_L8c46efc8 {
    char unknown0[0x8];
    int f08;
};
extern float g_8c57555c;
extern float g_8c575560;
extern S_L8c46efc8 g_8c46efc8;
extern char g_8c46efd4[];
extern void call_8c37e990(void *);
extern void call_8c37e4c0(void *);
extern void call_8c380c5a(int, void *);
void operation_8c0a2a4c(void)
{
    (&g_8c46efc8)->f08 = (&g_8c46efc8)->f08 | 0x200;
    *(float *)(g_8c46efd4 + 0x4) = 640.0f;
    *(float *)(g_8c46efd4 + 0x8) = 480.0f;
    *(float *)(g_8c46efd4 + 0xc) = 320.0f;
    *(float *)(g_8c46efd4 + 0x10) = 240.0f;
    *(float *)(g_8c46efd4 + 0x14) = 0.0f;
    *(float *)(g_8c46efd4 + 0x18) = 0.0f;
    *(float *)(g_8c46efd4 + 0x1c) = 20.0f;
    *(float *)(g_8c46efd4 + 0x20) = 15.0f;
    *(float *)(g_8c46efd4 + 0x24) = 1.0f;
    *(float *)(g_8c46efd4 + 0x28) = 0.85f;
    call_8c37e990((void *)((void *)g_8c46efd4));
    g_8c57555c = 1.0f;
    g_8c575560 = 0.85f;
    call_8c37e4c0((void *)((void *)0x8c46ee84));
    call_8c380c5a(2, (void *)((g_8c46efd4 + 0x14)));
}
