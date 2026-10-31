/* SDK pool group 0x8c347e44 (Hitachi SHC): when called with interrupts already
   masked, restarts the system's channel if it is idle and work is pending. */
typedef struct System {
    char unknown0[0x60];
    int channel;
    int pending;
} System;

extern System *g_system_8c3fac48;
extern int slot_flag_8c36da98(int, int *);
extern int kick_8c36da0c(int);
int process_8c347e44(void)
{
    int busy;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    if (old == 15) {
        slot_flag_8c36da98(g_system_8c3fac48->channel, &busy);
        if (busy == 0 && g_system_8c3fac48->pending != 0) kick_8c36da0c(g_system_8c3fac48->channel);
    }
    _builtin_set_imask(old);
    return 0;
}