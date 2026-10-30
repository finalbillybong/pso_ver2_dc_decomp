/* Dispatches drawing through two function tables chosen by flags (Hitachi SHC). */
typedef void (*SetupFn)(float, int);
typedef void (*DrawFn)(int, int);

extern void prepare_8c37a3ec(void);
extern SetupFn g_setup_table_8c3fc2b0[];
extern DrawFn g_draw_table_8c3fc2b8[];
extern int g_handle_8c57644c;
extern void use_handle_8c37b070(int);
extern void finish_8c37a44a(void);

void draw_dispatch_8c38e2d0(int a, int b, float scale, unsigned int flags)
{
    int neg, index;
    prepare_8c37a3ec();
    neg = (flags & 0x80000000) > 0;
    g_setup_table_8c3fc2b0[neg](scale, (flags & 0x40) > 0);
    index = neg * 3 + (flags & 0xf);
    g_draw_table_8c3fc2b8[index](a, b);
    use_handle_8c37b070(g_handle_8c57644c);
    finish_8c37a44a();
}
