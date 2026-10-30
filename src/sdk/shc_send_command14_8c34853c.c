/* Issues request 0xe with a unit byte, then notifies on success (Hitachi SHC). */
extern void *g_system_8c3fac48;
extern int g_command_8c52e3d8;
extern char g_command_index_8c52e3dc[];
extern int submit_request_8c3472e4(int *);
extern void after_command_8c3485b4(char *unit);
extern void report_error_8c346118(void *where, int code);

int send_command_8c34853c(char *unit)
{
    int err;
    if (g_system_8c3fac48 == 0) {
        err = 0xd000001;
        goto done;
    }
    if (unit != 0) goto ok;
    err = 0x7000103;
    goto done;
ok:
    g_command_8c52e3d8 = 0xe;
    g_command_index_8c52e3dc[0] = *unit;
    err = submit_request_8c3472e4(&g_command_8c52e3d8);
    if (err != 0) goto done;
    after_command_8c3485b4(unit);
    goto done;
done:
    if (err == 0) goto out;
    report_error_8c346118(send_command_8c34853c, err);
out:
    return err;
}
