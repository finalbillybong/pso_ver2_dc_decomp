/* Pool group 0x8c3c9fb4-0x8c3ca110 (Hitachi SHC): stub entry points that
   log a trace line (level 1, format, source file, line) and forward. */
extern void trace_8c23157a(int, char *, ...);
extern char g_trace_format_8c3f8628[];
extern char g_trace_file_8c3f8638[];
extern int g_value_a_8c4002a4;
extern int g_value_b_8c5a2cfc;
extern int handler_8c3cdbe4(void);
extern int handler_8c3cdc22(void *);
extern int handler_8c3cdc94(void *);
extern int handler_8c3ce48c(void *);
extern int handler_8c3ce4b8(void *);
extern int handler_8c3cdcb0(void *);

int stub_get_a_8c3c9fb4(void *unused, int *out)
{
    int *dst;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 111);
    dst = out;
    *dst = g_value_a_8c4002a4;
    return 0;
}

int stub_none_8c3c9fdc(void)
{
    return 0;
}

int stub_call_8c3c9fe0(void)
{
    /* A result local keeps the call out of tail position, as in the
       reference (jsr, then rts). */
    int result = handler_8c3cdbe4();
    return result;
}

int stub_none_8c3c9fee(void)
{
    return 0;
}

int stub_get_b_8c3c9ff2(void *unused, int *out)
{
    int *dst;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 156);
    dst = out;
    *dst = g_value_b_8c5a2cfc;
    return 0;
}

int stub_a_8c3ca01a(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 169);
    result = handler_8c3cdc22(arg);
    return result;
}

int stub_b_8c3ca040(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 180);
    result = handler_8c3cdc94(arg);
    return result;
}

int stub_c_8c3ca066(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 191);
    result = handler_8c3ce48c(arg);
    return result;
}

int stub_d_8c3ca08c(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 202);
    result = handler_8c3ce4b8(arg);
    return result;
}

int stub_e_8c3ca0b2(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 213);
    result = handler_8c3cdcb0(arg);
    return result;
}
