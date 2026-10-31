/* SDK pool group 0x8c347158 (Hitachi SHC): with interrupts masked, installs a
   0x200-byte work buffer in the system object, clears it and opens the queue. */
typedef struct System {
    int unknown0[2];
    unsigned char *buffer;
    int used;
    int unknown10[8];
    int queue[1];
} System;

extern System *g_system_8c3fac48;
extern unsigned char *g_buffer_8c52c398;
extern void *memset(void *, int, unsigned long);
extern int open_queue_8c34756c(int *);
extern void set_values_8c346118(int, int);
int set_buffer_8c347158(unsigned char *buffer)
{
    int error;
    unsigned int i;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    if (g_system_8c3fac48 == 0) {
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto fail;
fail:
        error = 0xd000001;
        goto done;
    }
    g_buffer_8c52c398 = buffer;
    g_system_8c3fac48->buffer = buffer;
    g_system_8c3fac48->used = 0;
    memset(g_system_8c3fac48->buffer, 0xff, 0x200);
    for (i = 0; i < 0x200; i += 16) ((unsigned char *)((int)g_system_8c3fac48->buffer + i))[0] = 0;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    if ((error = open_queue_8c34756c(g_system_8c3fac48->queue)) != 0) goto done;
done:
    _builtin_set_imask(old);
    if (error) set_values_8c346118((int)set_buffer_8c347158, error);
    return error;
}
