/* Issues request 0x1f when the system is initialised (Hitachi SHC). */
typedef struct Request {
    int code;
} Request;

extern int g_initialised_8c3fac48;
extern Request g_request_8c521840;
extern int submit_request_8c3472e4(Request *);
extern void report_error_8c346118(void *where, int code);

int init_request_8c345994(void)
{
    int err;
    if (g_initialised_8c3fac48 == 0) {
        err = 0xd000001;
        goto done;
    }
    g_request_8c521840.code = 0x1f;
    err = submit_request_8c3472e4(&g_request_8c521840);
done:
    if (err) report_error_8c346118(init_request_8c345994, err);
    return err;
}
