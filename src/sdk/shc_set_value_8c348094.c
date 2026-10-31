/* SDK pool group 0x8c348094 (Hitachi SHC): with interrupts masked, waits until
   the system object is idle and stores a value in it. */
typedef struct System {
    char unknown0[0x64];
    int busy;
    char unknown68[0x14];
    int value;
} System;

extern System *g_system_8c3fac48;
extern int call_8c346174(void);
int set_value_8c348094(int value)
{
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    if (g_system_8c3fac48 != 0) {
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto wait;
wait:
        while (g_system_8c3fac48->busy != 0) call_8c346174();
        g_system_8c3fac48->value = value;
    }
    _builtin_set_imask(old);
    return 0;
}
