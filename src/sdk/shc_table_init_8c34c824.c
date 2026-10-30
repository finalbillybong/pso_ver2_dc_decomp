/* SDK pool group 0x8c34c824-0x8c34c8f4 (Hitachi SHC): initialises and tears
   down a set of tables and their state words. */
extern void *memset(void *, int, unsigned long);
extern void shutdown_8c34d550(void);
extern char g_table_a_8c52ff90[];
extern char g_table_b_8c530590[];
extern char g_table_c_8c530994[];
extern char g_table_d_8c531994[];
extern int g_state_e_8c5319b4;
extern int g_state_f_8c530990;
extern int g_state_g_8c5319b8;
extern int g_state_h_8c5319bc;
extern int g_state_i_8c5319c0;

void table_init_8c34c824(void)
{
    memset(g_table_a_8c52ff90, 0, 0x600);
    memset(g_table_b_8c530590, 0, 0x400);
    memset(g_table_c_8c530994, 0xff, 0x1000);
    memset(g_table_d_8c531994, 0, 0x20);
    g_state_e_8c5319b4 = 0;
    g_state_f_8c530990 = 0;
    g_state_g_8c5319b8 = 0;
    g_state_h_8c5319bc = 0;
    g_state_i_8c5319c0 = -1;
}

void table_exit_8c34c86e(void)
{
    shutdown_8c34d550();
    g_state_i_8c5319c0 = -1;
    g_state_h_8c5319bc = 0;
    g_state_g_8c5319b8 = 0;
    g_state_f_8c530990 = 0;
    g_state_e_8c5319b4 = 0;
    memset(g_table_d_8c531994, 0, 0x20);
    memset(g_table_c_8c530994, 0xff, 0x1000);
    memset(g_table_b_8c530590, 0, 0x400);
    memset(g_table_a_8c52ff90, 0, 0x600);
}
