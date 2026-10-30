/* Issues request 8 with a name byte and a biased, scaled 16-bit value (Hitachi SHC). */
extern void *g_system_8c3fac48;
extern int g_request_code_8c52c2c8;
extern char g_request_name_8c52c2cc[];
extern char g_request_lo_8c52c2ce[];
extern char g_request_hi_8c52c2cf[];
extern int submit_request_8c3472e4(int *);
extern void report_error_8c346118(void *where, int code);

int name_request_8c3469cc(char *name, short value)
{
    int err;
    int v;
    if (g_system_8c3fac48 == 0) {
        err = 0xd000001;
        goto done;
    }
    if (name != 0) goto ok;
    err = 0x7000103;
    goto done;
ok:
    v = value * 4 + 0x8000;
    g_request_code_8c52c2c8 = 7;
    g_request_name_8c52c2cc[0] = *name;
    g_request_lo_8c52c2ce[0] = v;
    g_request_hi_8c52c2cf[0] = v >> 8;
    err = submit_request_8c3472e4(&g_request_code_8c52c2c8);
    if (err) {
    }
done:
    if (err == 0) goto out;
    report_error_8c346118(name_request_8c3469cc, err);
out:
    return err;
}
