/* SDK pool group 0x8c344c7c-0x8c344cd0 (Hitachi SHC): validates arguments and
   clears the output word, reporting 0xd000001 (no context) or 0x7000103. */
extern void *g_context_8c3fac48;
extern void report_error_8c346118(int, int);

int clear_output_8c344c7c(int handle, int *out)
{
    int error = 0;
    if (!g_context_8c3fac48) {
        error = 0xd000001;
        goto done;
    }
    if (!handle) {
        error = 0x7000103;
        goto done;
    }
    if (!out) {
        error = 0;
        goto done;
    }
    *out = 0;
    goto done;
done:
    if (error) report_error_8c346118((int)clear_output_8c344c7c, error);
    return error;
}
