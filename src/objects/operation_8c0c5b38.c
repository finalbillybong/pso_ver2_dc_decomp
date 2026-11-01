typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void wait_vsync_and_flip_8c380516(void);
extern void clear_hierarchy_groups(void *);
extern void operation_0c62d0(void);
void operation_8c0c5b38(void)
{
    wait_vsync_and_flip_8c380516();
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    operation_0c62d0();
    wait_vsync_and_flip_8c380516();
}
