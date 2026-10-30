/* Issues request 0x1e with the first byte of a name (Hitachi SHC). */
extern int g_request_code_8c521810;
extern char g_request_name_8c521814[];
extern int submit_request_8c3472e4(int *);
extern void name_accepted_8c3454dc(char *);
extern void report_error_8c346118(void *where, int code);

int name_request_8c345478(char *name)
{
    int err;
    if (name == 0) {
        err = 0x7000103;
        goto done;
    }
    g_request_code_8c521810 = 0x1e;
    g_request_name_8c521814[0] = *name;
    err = submit_request_8c3472e4(&g_request_code_8c521810);
    if (err != 0) goto done;
    name_accepted_8c3454dc(name);
done:
    if (err) report_error_8c346118(name_request_8c345478, err);
    return err;
}
