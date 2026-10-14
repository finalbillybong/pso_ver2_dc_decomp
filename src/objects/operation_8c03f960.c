typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c2ef854[];
extern void call_8c37eb1c(void *, int, int, float);
extern void call_8c380ab8(int, int);
void operation_8c03f960(void)
{
    call_8c37eb1c((void *)((void *)g_8c2ef854), 0, 0, -150.0f);
    call_8c37eb1c((void *)((g_8c2ef854 + 0x20)), 1, 0, -150.0f);
    call_8c37eb1c((void *)((g_8c2ef854 + 0x40)), 2, 0, -150.0f);
    call_8c37eb1c((void *)((g_8c2ef854 + 0x60)), 3, 0, -150.0f);
    call_8c37eb1c((void *)((g_8c2ef854 + 0x80)), 4, 0, -150.0f);
    call_8c37eb1c((void *)((g_8c2ef854 + 0xa0)), 5, 0, -150.0f);
    call_8c37eb1c((void *)((g_8c2ef854 + 0xc0)), 6, 0, -150.0f);
    call_8c37eb1c((void *)((g_8c2ef854 + 0xe0)), 7, 0, -150.0f);
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
    call_8c37eb1c((void *)((g_8c2ef854 + 0x100)), 8, 0x20, -10.0f);
    call_8c37eb1c((void *)((g_8c2ef854 + 0x120)), 9, 0x20, -10.0f);
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
}
