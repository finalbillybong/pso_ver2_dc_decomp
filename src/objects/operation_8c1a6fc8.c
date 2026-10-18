typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c467188;
extern char g_8c31e6f0[];
extern void call_8c03ef04(void *, int, void *);
void operation_8c1a6fc8(int a0)
{
    switch (g_8c467188) {
    case 0:
        call_8c03ef04((void *)((void *)0x8c4dc804), a0, (void *)((void *)g_8c31e6f0));
        break;
    case 1:
        call_8c03ef04((void *)((void *)0x8c4dc804), a0, (void *)((g_8c31e6f0 + 0x7)));
        break;
    case 2:
        call_8c03ef04((void *)((void *)0x8c4dc804), a0, (void *)((g_8c31e6f0 + 0xe)));
        break;
    case 3:
        call_8c03ef04((void *)((void *)0x8c4dc804), a0, (void *)((g_8c31e6f0 + 0x15)));
        break;
    case 4:
        call_8c03ef04((void *)((void *)0x8c4dc804), a0, (void *)((g_8c31e6f0 + 0x1c)));
        break;
    default:
        call_8c03ef04((void *)((void *)0x8c4dc804), a0, (void *)((g_8c31e6f0 + 0x7)));
    }
    call_8c03ef04((void *)((void *)0x8c4dc824), a0, (void *)((g_8c31e6f0 + 0x23)));
}
