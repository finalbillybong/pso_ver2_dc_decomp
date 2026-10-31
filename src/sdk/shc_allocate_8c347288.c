/* SDK pool group 0x8c347288 (Hitachi SHC): with interrupts masked, flushes the
   pending entries of the system object when it is busy. */
typedef struct System {
    char unknown0[0x18];
    int pending;
} System;

extern System *g_system_8c3fac48;
extern int g_state_8c3fac4c;
extern void flush_slots_8c346f40(void);
int allocate_8c347288(void)
{
    System *s;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    s = g_system_8c3fac48;
    if (s != 0 && g_state_8c3fac4c == 1) {
        if (s->pending > 0) flush_slots_8c346f40();
    }
    _builtin_set_imask(old);
    return 0;
}
