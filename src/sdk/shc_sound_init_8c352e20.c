/* Reference-counted subsystem initialisation (Hitachi SHC). */
typedef struct Driver {
    int unknown0[3];
    void (*start)(int);
} Driver;

extern volatile int d_8c3fb568;
extern int g_init_count_8c3fb56c;
extern Driver *g_driver_8c3fb570;
extern int g_driver_arg_8c3fb574;
extern void init_hardware_8c354594(void);
extern void *memset(void *, int, unsigned long);
extern char g_buffer_a_8c5383b0[], g_buffer_b_8c538830[];
extern unsigned long g_levels_8c539050[0x200];
extern Driver *create_driver_8c35569e(void);
extern void set_print_hook_8c3545cc(int, int);

void sound_nop_8c352e20(void)
{
}

void sound_init_8c352e24(void)
{
    int i;
    int state = d_8c3fb568;
    int *count = &g_init_count_8c3fb56c;
    if (*count == 0) {
        init_hardware_8c354594();
        memset(g_buffer_a_8c5383b0, 0, 0x480);
        memset(g_buffer_b_8c538830, 0, 0x820);
        {
            unsigned long *p = g_levels_8c539050;
            int n = 0x200;
            i = 0;
            do {
                i++;
                *p++ = 0x80808080;
            } while (i < n);
            if (0) *p = 0;
        }
        if (g_driver_8c3fb570 == 0) g_driver_8c3fb570 = create_driver_8c35569e();
        g_driver_8c3fb570->start(g_driver_arg_8c3fb574);
        sound_nop_8c352e20();
        set_print_hook_8c3545cc(0, 0);
    }
    (*count)++;
}
