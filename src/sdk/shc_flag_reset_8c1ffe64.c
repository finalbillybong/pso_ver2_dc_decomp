typedef struct Task {
    unsigned char count;
    unsigned char pad;
    unsigned char flags;
} Task;

extern int list_clear_8c20133c(Task *t);

int clear_task_8c1ffe64(Task *t)
{
    t->flags &= 0x3f;
    list_clear_8c20133c(t);
    return 0;
}

int mark_task_8c1ffe76(Task *t)
{
    t->flags &= 0xbf;
    t->flags |= 0x80;
    if (t->count < 1)
        t->count = 1;
    return 0;
}
