/* SDK pool group 0x8c3462d4 (Hitachi SHC): periodic handler task; with
   interrupts masked, flushes pending work and updates the ramps when busy. */
typedef struct System {
    char unknown0[0x18];
    int pending;
} System;

extern System *g_system_8c3fac48;
extern int g_state_8c3fac4c;
extern int flush_slots_8c346f40(void);
extern void ramp_update_8c348628(void);
extern void ramp_update_8c345550(void);
extern void seq_ramp_8c343d64(void);
extern int process_8c347e44(void);
void task_8c3462d4(void)
{
    System *s;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    s = g_system_8c3fac48;
    if (s != 0 && g_state_8c3fac4c == 1) {
        if (s->pending > 0) flush_slots_8c346f40();
        ramp_update_8c348628();
        ramp_update_8c345550();
        seq_ramp_8c343d64();
        process_8c347e44();
    }
    _builtin_set_imask(old);
}
