/* SDK pool group 0x8c346214-0x8c3462d4 (Hitachi SHC): issues request 0x8d with
   three checked split values and records them in the context. */
typedef struct Context {
    char unknown0[0x34];
    char a;
    char b;
    char c;
} Context;

extern Context *g_context_8c3fac48;
extern int g_request_code_8c5218a0;
extern char g_request_a_8c5218a4[];
extern char g_request_b_8c5218a5[];
extern int submit_request_8c3472e4(int *);
extern void report_error_8c346118(int, int);

int set_split_8c346214(int a, int b, int c)
{
    int error;
    if (g_context_8c3fac48) goto check;
    error = 0xd000001;
    goto done;
check:
    if (a < 0 || a > 64 || b < 0 || b > 64 || c < 0 || c > 16 || a + b + c > 64) {
        error = 0x3000001;
        goto done;
    }
    g_request_code_8c5218a0 = 0x8d;
    g_request_a_8c5218a4[0] = a;
    g_request_b_8c5218a5[0] = b;
    ((char *)&g_request_code_8c5218a0)[6] = c;
    error = submit_request_8c3472e4(&g_request_code_8c5218a0);
    if (error) goto done;
    g_context_8c3fac48->a = a;
    g_context_8c3fac48->b = b;
    g_context_8c3fac48->c = c;
done:
    if (error) report_error_8c346118((int)set_split_8c346214, error);
    return error;
}
