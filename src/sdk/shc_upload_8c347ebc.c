/* SDK pool group 0x8c347ebc (Hitachi SHC): with interrupts masked, validates a
   handle and applies both configuration steps; reports errors. */
extern int check_handle_8c347458(int);
extern int configure_8c347fb4(int, int, int, int, int);
extern int configure_8c348158(int, int, int, int, int);
extern void set_values_8c346118(int, int);
int upload_8c347ebc(int handle, int a, int b, int c, int d)
{
    int error;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    error = check_handle_8c347458(handle);
    if (error) goto done;
    error = configure_8c347fb4(handle, a, b, c, d);
    if (error) goto done;
    error = configure_8c348158(handle, a, b, c, d);
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    if (error) goto done;
done:
    _builtin_set_imask(old);
    if (error) set_values_8c346118((int)upload_8c347ebc, error);
    return error;
}