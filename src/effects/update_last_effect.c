#define active_at ((int (*)(void))0x8c05bbf8)
#define update_at ((void (*)(void *, int, int))0x8c3457b0)

void update_last_effect(int value) {
    if (active_at()) {
        int *last_pointer = (int *)0x8c2fc704;
        int enabled = *(int *)0x8c4687f8;
        int last = *last_pointer;
        if (enabled && last >= 0 && last < 54)
            update_at(*(void **)((char *)0x8c467a78 + (last << 2)), value, 0);
    }
}
