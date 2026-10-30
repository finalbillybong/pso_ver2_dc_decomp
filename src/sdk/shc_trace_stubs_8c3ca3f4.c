/* Pool group 0x8c3ca3f4-0x8c3ca534 (Hitachi SHC): stub entry points that
   log a trace line (level 1, format, source file, line) and forward. */
extern int trace_8c23157a(int, char *, ...);
extern char g_trace_format_8c3f8628[];
extern char g_trace_file_8c3f8638[];
extern int handler_8c3ce660(void *);
extern int handler_8c3ce706(void *);
extern int handler_8c3ce764(void *);
extern int handler_8c3ce7a4(void *);
extern int handler_8c3ce7ca(void *);
extern int handler_8c3ce7f2(void *);
extern int handler_8c3ce81a(void *);

int stub_8c3ca3f4(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 414);
    result = handler_8c3ce660(arg);
    return result;
}

int stub_8c3ca41a(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 425);
    result = handler_8c3ce706(arg);
    return result;
}

int stub_8c3ca440(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 436);
    result = handler_8c3ce764(arg);
    return result;
}

int stub_8c3ca466(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 447);
    result = handler_8c3ce7a4(arg);
    return result;
}

int stub_8c3ca48c(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 458);
    result = handler_8c3ce7ca(arg);
    return result;
}

int stub_8c3ca4b2(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 469);
    result = handler_8c3ce7f2(arg);
    return result;
}

int stub_8c3ca4d8(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 480);
    result = handler_8c3ce81a(arg);
    return result;
}
