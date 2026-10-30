/* Issues request 0x16 with a name byte and an offset code (Hitachi SHC). */
extern void *g_system_8c3fac48;
extern int g_request_code_8c52c340;
extern char g_request_name_8c52c344[];
extern char g_request_arg_8c52c345;
extern int submit_request_8c3472e4(int *);
extern void report_error_8c346118(void *where, int code);

int name_request_8c346d20(char *name, char arg)
{
    int err;
    int v;
    if (g_system_8c3fac48 != 0) goto ready;
    err = 0xd000001;
    goto done;
ready:
    if (name == 0) {
        err = 0x7000103;
        goto done;
    }
    v = arg;
    v += 0x80;
    g_request_code_8c52c340 = 0x16;
    g_request_name_8c52c344[0] = *name;
    g_request_arg_8c52c345 = v;
    err = submit_request_8c3472e4(&g_request_code_8c52c340);
    if (err) {
    }
done:
    if (err == 0) goto out;
    report_error_8c346118(name_request_8c346d20, err);
out:
    return err;
}
