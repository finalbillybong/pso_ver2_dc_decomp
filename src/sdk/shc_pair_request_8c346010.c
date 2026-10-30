/* Issues requests 0x84 and 0x82 with two non-negative bytes (Hitachi SHC). */
extern void *g_system_8c3fac48;
extern int g_request_code_8c521870;
extern char g_request_arg_8c521874[];
extern int submit_request_8c3472e4(int *);
extern void report_error_8c346118(void *where, int code);

int pair_request_8c346010(char a, char b)
{
    int err;
    if (g_system_8c3fac48 != 0) goto ready;
    err = 0xd000001;
    goto done;
ready:
    if (a < 0 || b < 0) {
        err = 0x3000001;
        goto done;
    }
    g_request_code_8c521870 = 0x84;
    g_request_arg_8c521874[0] = a;
    err = submit_request_8c3472e4(&g_request_code_8c521870);
    if (err != 0) goto done;
    g_request_code_8c521870 = 0x82;
    g_request_arg_8c521874[0] = b;
    err = submit_request_8c3472e4(&g_request_code_8c521870);
done:
    if (err) report_error_8c346118(pair_request_8c346010, err);
    return err;
}
