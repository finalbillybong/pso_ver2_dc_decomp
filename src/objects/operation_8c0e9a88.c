typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void clear_hierarchy_groups(void *);
extern void call_8c380516(void);
void operation_8c0e9a88(void)
{
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    call_8c380516();
}
