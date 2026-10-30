/* Pool group 0x8c1fc288-0x8c1fc324 (Hitachi SHC): readiness checks with
   debug trace lines. */
extern int trace_8c23157a(int, char *, ...);
extern char g_trace_format_8c2e0de0[];
extern char g_trace_file_8c2e0df0[];
extern short func_8c2042a6(void);
extern short func_8c1feca2(int);

int check_ready_trace_8c1fc288(void)
{
    trace_8c23157a(1, g_trace_format_8c2e0de0, g_trace_file_8c2e0df0, 52);
    if (func_8c2042a6() != 0) goto fail;
    trace_8c23157a(1, g_trace_format_8c2e0de0, g_trace_file_8c2e0df0, 58);
    if (func_8c1feca2(0) != 0) {
fail:
        return 1;
    }
    trace_8c23157a(1, g_trace_format_8c2e0de0, g_trace_file_8c2e0df0, 62);
    return 0;
}

int check_ready_8c1fc2e6(void)
{
    if (func_8c2042a6() != 0) goto fail;
    if (func_8c1feca2(0) != 0) {
fail:
        return 1;
    }
    return 0;
}
