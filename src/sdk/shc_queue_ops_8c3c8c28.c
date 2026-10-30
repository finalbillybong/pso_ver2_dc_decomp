extern int queue_8c5b85d0;
extern int func_8c3ca8c0(int *);
extern int func_8c3ca90a(int *);
extern int func_8c3c8e4c(int, int);
extern int ctx_8c5a3048;
extern void (*hook_8c5a306c)(int);

int queue_reserve_8c3c8c28(int unused, int len)
{
    if (func_8c3ca8c0(&queue_8c5b85d0) == 0 || len > 0x5ea) {
        return 0;
    }
    return func_8c3ca90a(&queue_8c5b85d0) + 12;
}

int queue_send_8c3c8c5a(int unused, int buf)
{
    if (func_8c3c8e4c(buf, ctx_8c5a3048)) {
    }
    return 0;
}

int queue_hook_8c3c8c74(void)
{
    hook_8c5a306c(0);
    return 0;
}
