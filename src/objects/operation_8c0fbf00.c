typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c470644;
extern char g_8c470648[];
extern void submit_render_buffers(void *, void *);
void operation_8c0fbf00(void)
{
    if (g_8c470644 == 7) {
        submit_render_buffers((void *)((void *)0x8c30a624), (void *)((void *)g_8c470648));
    }
    if (g_8c470644 >= 4 && 8 > g_8c470644) {
        submit_render_buffers((void *)((void *)0x8c30a630), (void *)((g_8c470644 + -4) * 0xc + g_8c470648 + 0xc));
    }
    g_8c470644 += 1;
}
