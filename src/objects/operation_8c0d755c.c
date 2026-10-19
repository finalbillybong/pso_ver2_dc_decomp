typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c46fdb8;
extern void release_render_mode_four_8c05b944(void *, void *);
void operation_8c0d755c(void)
{
    if (g_8c46fdb8 == 1) {
        release_render_mode_four_8c05b944((void *)((void *)0x8c46fd80), (void *)((void *)0x8c46fdbc));
    }
    g_8c46fdb8 += 1;
}
