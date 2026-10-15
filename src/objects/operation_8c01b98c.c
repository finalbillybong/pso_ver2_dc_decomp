typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c2e3014[];
extern int operation_8c232460(void);
extern void call_8c12b048(void *, void *, ...);
void *operation_8c01b98c(void)
{
    int t1;
    t1 = operation_8c232460();
    call_8c12b048((void *)((void *)0x8c41ca75), (void *)((g_8c2e3014 + 0x7d)), t1);
    return (void *)0x8c41ca75;
}
