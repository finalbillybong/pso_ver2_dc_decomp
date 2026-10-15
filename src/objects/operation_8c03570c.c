typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c338b90;
extern int g_8c461c00;
extern int g_8c5108b4;
extern char g_8c461c04[];
extern void call_8c12b880(void *, int, int);
extern int call_8c37a1a4(int);
extern void call_8c035d94(void);
extern void call_8c12b154(void *, void *, int);
void operation_8c03570c(void)
{
    int t1;
    call_8c12b880((void *)((void *)g_8c461c04), 0, 0x124);
    call_8c12b880((void *)((g_8c461c04 + 0x124)), 0, 0x124);
    call_8c12b880((void *)((g_8c461c04 + 0x248)), 0, 0x124);
    *(int *)(g_8c461c04 + 0x120) = 0;
    *(int *)(g_8c461c04 + 0x244) = 0;
    *(int *)(g_8c461c04 + 0x368) = 0;
    g_8c461c00 = 0;
    t1 = call_8c37a1a4(4);
    if (t1 == 0) {
        g_8c461c00 = 1;
        g_8c338b90 = 2;
    }
    call_8c035d94();
    call_8c12b880((void *)((void *)0x8c4621e9), 0, 0x11);
    call_8c12b154((void *)((void *)0x8c4621e9), (void *)((g_8c461c04 + 0x265)), 0x10);
    call_8c12b880((void *)((void *)0x8c4621d8), 0, 0x11);
    call_8c12b154((void *)((void *)0x8c4621d8), (void *)((g_8c461c04 + 0x1d)), 0x10);
    g_8c5108b4 = 0x40;
}
