extern void *g_context_8c3fac48;
extern int g_request_kind_8c521888;
extern unsigned char g_request_flag_8c52188c[];
extern void report_error_8c346118(int, int);
extern int send_request_8c3472e4(int *);

int set_mode_8c34609c(int mode)
{
    int error;
    if (!g_context_8c3fac48) {
        error = 0xd000001;
        goto done;
    }
    g_request_kind_8c521888 = 0x8a;
    switch (mode) {
    case 0:
        g_request_flag_8c52188c[0] = 0xff;
        break;
    case 1:
        g_request_flag_8c52188c[0] = 0;
        break;
    default:
        error = 0x3000001;
        goto done;
    }
    error = send_request_8c3472e4(&g_request_kind_8c521888);
done:
    if (error) report_error_8c346118((int)set_mode_8c34609c, error);
    return error;
}
