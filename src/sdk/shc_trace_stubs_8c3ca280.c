/* Pool group 0x8c3ca280-0x8c3ca3f4 (Hitachi SHC): stub entry points that
   log a trace line (level 1, format, source file, line) and forward. */
extern int trace_8c23157a(int, char *, ...);
extern char g_trace_format_8c3f8628[];
extern char g_trace_file_8c3f8638[];
extern int handler_8c3ce124(void *);
extern int handler_8c3ce374(void *, int *);
extern int handler_8c3ce47a(void *);
extern int handler_8c3ce290(void *);
extern int handler_8c3ce474(void *, int *);
extern int handler_8c3ce4ec(void *);
extern int handler_8c3ce576(void *);
extern int handler_8c3ce618(void *);

int stub_8c3ca280(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 324);
    result = handler_8c3ce124(arg);
    return result;
}

int stub_8c3ca2a6(void *arg)
{
    int result;
    int value;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 336);
    result = handler_8c3ce374(arg, &value);
    return result;
}

int stub_8c3ca2d0(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 347);
    result = handler_8c3ce47a(arg);
    return result;
}

int stub_8c3ca2f6(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 358);
    result = handler_8c3ce290(arg);
    return result;
}

int stub_8c3ca31c(void *arg)
{
    int result;
    int value;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 370);
    result = handler_8c3ce474(arg, &value);
    return result;
}

int stub_8c3ca346(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 381);
    result = handler_8c3ce4ec(arg);
    return result;
}

int stub_8c3ca36c(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 392);
    result = handler_8c3ce576(arg);
    return result;
}

int stub_8c3ca392(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 403);
    result = handler_8c3ce618(arg);
    return result;
}
