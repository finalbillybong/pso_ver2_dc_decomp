/* Sends request 0x83 for port 0..15 with two biased axis bytes (Hitachi SHC). */
extern void *g_context_8c3fac48;
extern int g_request_code_8c521858;
extern char g_request_port_8c52185c[];
extern char g_request_y_8c52185d[];
extern int submit_request_8c3472e4(int *);
extern void report_error_8c346118(int, int);

int set_pad_8c345f8c(char port, char x, char y)
{
    int error;
    int vx, vy;
    if (g_context_8c3fac48) goto check;
    error = 0xd000001;
    goto done;
check:
    if (port < 0 || port > 15) {
        error = 0x3000001;
        goto done;
    }
    vy = y;
    vx = x;
    g_request_code_8c521858 = 0x83;
    g_request_port_8c52185c[0] = port;
    vy += 0x80;
    vx += 0x80;
    g_request_y_8c52185d[0] = vy;
    ((char *)&g_request_code_8c521858)[6] = vx;
    error = submit_request_8c3472e4(&g_request_code_8c521858);
done:
    if (error) report_error_8c346118((int)set_pad_8c345f8c, error);
    return error;
}
