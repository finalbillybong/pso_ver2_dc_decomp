/* SDK pool group 0x8c346174 (Hitachi SHC): with interrupts masked, runs the
   allocate and process steps when the system object is busy. */
typedef struct System {
    int unknown0;
} System;

extern System *g_system_8c3fac48;
extern int g_state_8c3fac4c;
extern int allocate_8c347288(void);
extern int process_8c347e44(void);
int call_8c346174(void)
{
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    if (g_system_8c3fac48 != 0 && g_state_8c3fac4c == 1) {
        allocate_8c347288();
        process_8c347e44();
    }
    _builtin_set_imask(old);
    return 0;
}