typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c100630(void);
extern void call_8c346174(void);
extern void update_hierarchy(void *);
void operation_8c01c268(void)
{
    if (*(int *)0x8c4687f8 != 0) {
        call_8c100630();
        call_8c346174();
    }
    update_hierarchy((void *)((void *)0x8c44bf20));
}
