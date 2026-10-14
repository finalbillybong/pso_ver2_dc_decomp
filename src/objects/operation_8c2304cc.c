typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void clear_hierarchy_groups(void *);
extern void call_8c01364c(void *, int);
extern void call_8c380516(void);
void operation_8c2304cc(void)
{
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    call_8c01364c((void *)((void *)0x8c338648), 0x28);
    call_8c380516();
}
