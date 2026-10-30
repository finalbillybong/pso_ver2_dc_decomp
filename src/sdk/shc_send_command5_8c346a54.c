/* Sends command 0x15 with a unit index and a level re-biased by 0x80 (Hitachi SHC). */
extern void *g_system_8c3fac48;
extern int g_command_8c52c2e0;
extern char g_command_index_8c52c2e4[];
extern char g_command_level_8c52c2e5[];
extern int submit_request_8c3472e4(int *);
extern void report_error_8c346118(void *where, int code);

int send_command_8c346a54(char *unit, char level)
{
    int err;
    int v;
    if (g_system_8c3fac48 == 0) {
        err = 0xd000001;
        goto done;
    }
    if (unit != 0) goto ok;
    err = 0x7000103;
    goto done;
ok:
    v = level;
    v += 0x80;
    g_command_8c52c2e0 = 5;
    g_command_index_8c52c2e4[0] = *unit;
    g_command_level_8c52c2e5[0] = v;
    err = submit_request_8c3472e4(&g_command_8c52c2e0);
    if (err) {
    }
done:
    if (err == 0) goto out;
    report_error_8c346118(send_command_8c346a54, err);
out:
    return err;
}
