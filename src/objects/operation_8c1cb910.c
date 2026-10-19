typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4dbaec;
extern void call_8c05fbf8(int, int, int, int);
extern void clear_global_render_resources(void);
extern void select_mode0_8c1cc49c(void);
void operation_8c1cb910(void)
{
    if (g_8c4dbaec == 0) {
        call_8c05fbf8(0x50016, 0, 0, 0);
        clear_global_render_resources();
        select_mode0_8c1cc49c();
    }
}
