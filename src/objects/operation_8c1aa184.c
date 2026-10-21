typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c41bcf0;
extern char g_8c324d84[];
extern void call_8c1003d0(void *);
void operation_8c1aa184(void)
{
    switch (g_8c41bcf0) {
    case 1:
        call_8c1003d0((void *)((g_8c324d84 + 0x69)));
        return;
    case 2:
        call_8c1003d0((void *)((g_8c324d84 + 0x78)));
        return;
    case 3:
        call_8c1003d0((void *)((g_8c324d84 + 0x88)));
        return;
    case 4:
        call_8c1003d0((void *)((g_8c324d84 + 0x96)));
        return;
    case 5:
        call_8c1003d0((void *)((g_8c324d84 + 0x88)));
        return;
    case 6:
        call_8c1003d0((void *)((g_8c324d84 + 0xa1)));
        return;
    case 0:
    default:
        call_8c1003d0((void *)((g_8c324d84 + 0x2b)));
        return;
    }
}
