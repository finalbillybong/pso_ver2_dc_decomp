typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c467914;
extern int g_8c467918;
extern int g_8c46791c;
extern int g_8c467920;
extern void release_render_mode_four_8c05b944(void *, void *);
void operation_8c05956c(void)
{
    int v1;
    int v7;
    if ((int)g_8c467914 == *(int *)((char *)0x8c284b90 + (g_8c467920 << 2))) {
        g_8c467920 += 1;
        v1 = (int)g_8c46791c;
        g_8c46791c = v1 + 0xc;
        release_render_mode_four_8c05b944((void *)((void *)0x8c467924), (void *)v1);
    }
    switch (g_8c467914) {
    case 36:
    case 45:
        v7 = (int)g_8c467918;
        g_8c467918 = v7 + 0xc;
        release_render_mode_four_8c05b944((void *)((void *)0x8c467924), (void *)v7);
    }
    g_8c467914 += 1;
}
