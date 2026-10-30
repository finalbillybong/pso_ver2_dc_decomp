/* Program start-up: stack fill, section initialisation, main and shutdown hooks (Hitachi SHC). */
extern int *g_bss_begin_8c2846d0;
extern int *g_bss_end_8c2846dc;
extern char *g_data_begin_8c2846c0;
extern char *g_data_end_8c2846cc;
extern char *g_data_rom_8c2846b8;
extern char *g_bss2_begin_8c3f3010;
extern char *g_bss2_end_8c3f301c;
extern char *g_data2_begin_8c3f3000;
extern char *g_data2_end_8c3f300c;
extern char *g_data2_rom_8c3f2ff8;
extern int g_hook_arg_8c3f2fe8;
extern void main_8c01bbec(void);
extern void hook_init_8c367f02(int);
extern void hook_exit_8c367f5a(int);

void init_sections_8c340888(void);
void startup_hook_8c340878(void);
void shutdown_hook_8c340880(void);

void startup_8c340848(void)
{
    volatile int marker = 0x8c3f68b0;
    int *p;
    p = (int *)0x8c00c000;
    do {
        *p++ = 0x41474553;
    } while (p < (int *)0x8c00f400);
    init_sections_8c340888();
    startup_hook_8c340878();
    goto run;
run:
    main_8c01bbec();
    shutdown_hook_8c340880();
}

void startup_hook_8c340878(void)
{
    hook_init_8c367f02(g_hook_arg_8c3f2fe8);
}

void shutdown_hook_8c340880(void)
{
    hook_exit_8c367f5a(g_hook_arg_8c3f2fe8);
}

void init_sections_8c340888(void)
{
    int *w;
    char *d, *s;
    char *d2, *s2;
    for (w = g_bss_begin_8c2846d0; w < g_bss_end_8c2846dc; w++) *w = 0;
    for (d = g_data_begin_8c2846c0, s = g_data_rom_8c2846b8; d < g_data_end_8c2846cc; d++) *d = *s++;
    for (d = g_bss2_begin_8c3f3010; d < g_bss2_end_8c3f301c; d++) *d = 0;
    for (d2 = g_data2_begin_8c3f3000, s2 = g_data2_rom_8c3f2ff8; d2 < g_data2_end_8c3f300c; d2++, s2++) *d2 = *s2;
}
