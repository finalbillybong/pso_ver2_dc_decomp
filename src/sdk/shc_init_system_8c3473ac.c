/* SDK pool group 0x8c3473ac (Hitachi SHC): with interrupts masked, initialises
   the system unless it already exists and creates its handler task. */
typedef struct System {
    char unknown0[0x434];
    void *handler;
} System;

extern System *g_system_8c3fac48;
extern char *d_8c3f3658;
extern int init_pool_8c346358(int, int, int);
extern void task_8c3462d4(void);
extern void *create_handler_8c36bbc4(int, void (*)(void), int, int);
extern unsigned long strlen(const char *);
extern void set_values_8c346118(int, int);
int init_system_8c3473ac(void)
{
    int error;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    if (g_system_8c3fac48 != 0) {
        error = 0xd000002;
        goto done;
    }
    error = init_pool_8c346358(0x40, 0x40, 0x100);
    g_system_8c3fac48->handler = create_handler_8c36bbc4(0x900, task_8c3462d4, 0x60, 0);
    strlen(d_8c3f3658);
done:
    _builtin_set_imask(old);
    if (error) set_values_8c346118((int)init_system_8c3473ac, error);
    return error;
}
