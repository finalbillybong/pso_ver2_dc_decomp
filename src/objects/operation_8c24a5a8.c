typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    Vector3 f00;
};
extern Vector3 g_8c33b248;
extern int g_8c510f44;
extern char g_8c510ee4[];
extern void release_render_mode_four_8c05b944(void *, void *);
void operation_8c24a5a8(void)
{
    Frame frame;
    int v1;
    v1 = (int)0;
    while (8 > v1) {
        if ((int)g_8c510f44 == *(int *)((char *)0x8c2e1ef8 + (v1 << 2))) {
            {
                Vector3 *p_ = (Vector3 *)&g_8c33b248;
                *(Vector3 *)&(&frame)->f00 = *p_;
            }
            release_render_mode_four_8c05b944((void *)(&frame), (void *)(v1 * 0xc + g_8c510ee4));
        }
        v1 = (int)(v1 + 1);
    }
    g_8c510f44 += 1;
}
