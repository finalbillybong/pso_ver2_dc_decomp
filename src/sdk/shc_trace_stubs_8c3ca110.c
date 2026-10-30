/* Pool group 0x8c3ca110-0x8c3ca280 (Hitachi SHC): stub entry points that
   log a trace line (level 1, format, source file, line) and forward. */
typedef struct {
    int x;
    short y;
    short z;
} Point;

extern int trace_8c23157a(int, char *, ...);
extern char g_trace_format_8c3f8628[];
extern char g_trace_file_8c3f8638[];
extern int handler_8c3cdd8a(void *);
extern int handler_8c3cde20(void *, int *, int *, int *);
extern int handler_8c3cdfae(void *);
extern int handler_8c3cdfe6(void *);
extern int handler_8c3ce00a(void *);
extern int handler_8c3ce016(void *, Point *, short *, short *);
extern int handler_8c3ce086(void *, short *, short *, short *, short *);

int stub_8c3ca110(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 224);
    result = handler_8c3cdd8a(arg);
    return result;
}

int stub_get_8c3ca136(void *arg, Point *out)
{
    int result;
    int x;
    int y;
    int z;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 241);
    result = handler_8c3cde20(arg, &x, &y, &z);
    if (out) {
        Point *o = out;
        o->x = x;
        o->y = y;
        o->z = z;
    }
    return result;
}

int stub_8c3ca180(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 260);
    result = handler_8c3cdfae(arg);
    return result;
}

int stub_8c3ca1a6(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 271);
    result = handler_8c3cdfe6(arg);
    return result;
}

int stub_8c3ca1cc(void *arg)
{
    int result;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 282);
    result = handler_8c3ce00a(arg);
    return result;
}

int stub_point_8c3ca1f2(void *arg, Point *point)
{
    int result;
    Point *p;
    trace_8c23157a(1, g_trace_format_8c3f8628, g_trace_file_8c3f8638, 295);
    p = point;
    result = handler_8c3ce016(arg, p, &p->y, &p->z);
    return result;
}

int stub_quad_8c3ca228(void *arg, short *q)
{
    int result;
    result = handler_8c3ce086(arg, q, q + 1, q + 2, q + 3);
    return result;
}
