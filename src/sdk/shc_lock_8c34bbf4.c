/* SDK pool group 0x8c34bbf4 (Hitachi SHC): nesting interrupt lock; the first
   lock masks interrupts and saves the previous level, the last unlock restores it. */
extern int g_depth_8c3faec8;
extern int g_saved_8c3faecc;
void func_8c34bbf4(void)
{
    g_depth_8c3faec8 = 0;
}

void lock_8c34bbfc(void)
{
    if (g_depth_8c3faec8 == 0) {
        int old = _builtin_get_imask();
        _builtin_set_imask(15);
        g_saved_8c3faecc = old;
    }
    g_depth_8c3faec8++;
}

void unlock_8c34bc24(void)
{
    g_depth_8c3faec8--;
    if (g_depth_8c3faec8 == 0) _builtin_set_imask(g_saved_8c3faecc);
}
