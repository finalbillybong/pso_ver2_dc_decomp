/* SDK pool group 0x8c347458-0x8c3474c8 (Hitachi SHC): validates the context
   and a handle whose first word is the tag "MBLK" or "mblk". */
extern int g_context_8c3fac48;
extern void report_error_8c346118(int, int);

int check_handle_8c347458(int *handle)
{
    int error = 0;
    int context = g_context_8c3fac48;
    int *block = handle;
    if (!context || context == -1) {
        error = 0xd000001;
        goto done;
    }
    if (!handle || (int)handle == -1) {
        error = 0x7000103;
        goto done;
    }
    goto check;
check:
    if (*block != 0x4b4c424d && *block != 0x6b6c626d) {
        error = 0x7000102;
        goto done;
    }
done:
    if (error) report_error_8c346118((int)check_handle_8c347458, error);
    return error;
}
