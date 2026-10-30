/* SDK pool group 0x8c344c04-0x8c344c7c (Hitachi SHC): closes a handle in three
   steps and drops the context reference count on success. */
typedef struct Context {
    char unknown0[0x38];
    char references;
} Context;

extern Context *g_context_8c3fac48;
extern void report_error_8c346118(int, int);
extern void close_step_a_8c345918(int);
extern void close_step_b_8c345478(int);
extern int close_step_c_8c3489bc(int);

int close_handle_8c344c04(int handle)
{
    int error;
    if (!g_context_8c3fac48) {
        error = 0xd000001;
        goto done;
    }
    if (handle) goto close;
    error = 0x7000103;
    goto done;
close:
    close_step_a_8c345918(handle);
    close_step_b_8c345478(handle);
    error = close_step_c_8c3489bc(handle);
    if (error) goto done;
    g_context_8c3fac48->references--;
done:
    if (error) report_error_8c346118((int)close_handle_8c344c04, error);
    return error;
}
