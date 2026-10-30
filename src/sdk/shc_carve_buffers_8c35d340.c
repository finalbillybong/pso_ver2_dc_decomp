/* Carves fixed-size buffers downwards from a top-of-area pointer and seeds each from a template (Hitachi SHC). */
extern void copy_bytes_8c359abc(char *dst, char *src, int size);
extern char *g_buf_8c54893c;
extern char *g_buf_8c548938;
extern char *g_buf_8c548934;
extern char *g_buf_8c548930;
extern char *g_buf_8c54892c;
extern char *g_buf_8c548928;
extern char *g_buf_8c548924;
extern char *g_buf_8c54891c;
extern char *g_buf_8c548920;
extern char *g_buf_8c548910;
extern char *g_buf_8c548914;
extern char *g_buf_8c548908;
extern char *g_buf_8c54890c;
extern char g_tmpl_8c549540[];
extern char g_tmpl_8c3f63a0[];
extern char g_tmpl_8c3f6380[];
extern char g_tmpl_8c3f6360[];
extern char g_tmpl_8c3f6340[];
extern char g_tmpl_8c3f6320[];
extern char g_tmpl_8c3f6300[];
extern char g_tmpl_8c549440[];
extern char g_tmpl_8c5494c0[];
extern char g_tmpl_8c548f00[];
extern char g_tmpl_8c549000[];
extern char g_tmpl_8c548e40[];
extern char g_tmpl_8c548e80[];

static char *carve_main_8c35d35a(char *top);
static char *carve_pair_8c35d3fa(char *top);
static char *carve_quad_8c35d438(char *top);
static char *carve_tail_8c35d4d8(char *top);

char *carve_buffers_8c35d340(char *base)
{
    char *t = base + 0x5b0;
    char *p = carve_main_8c35d35a(t);
    char *q = carve_pair_8c35d3fa(p);
    char *r = carve_quad_8c35d438(q);
    char *u = carve_tail_8c35d4d8(r);
    return u;
}

static char *carve_main_8c35d35a(char *top)
{
    char *p = top;
    &p;
    p -= 0x200;
    g_buf_8c54893c = p;
    copy_bytes_8c359abc(g_buf_8c54893c, g_tmpl_8c549540, 0x80);
    p -= 0x10;
    g_buf_8c548938 = p;
    copy_bytes_8c359abc(g_buf_8c548938, g_tmpl_8c3f63a0, 4);
    p -= 0x20;
    g_buf_8c548934 = p;
    copy_bytes_8c359abc(g_buf_8c548934, g_tmpl_8c3f6380, 8);
    p -= 0x20;
    g_buf_8c548930 = p;
    copy_bytes_8c359abc(g_buf_8c548930, g_tmpl_8c3f6360, 8);
    p -= 0x20;
    g_buf_8c54892c = p;
    copy_bytes_8c359abc(g_buf_8c54892c, g_tmpl_8c3f6340, 8);
    p -= 0x20;
    g_buf_8c548928 = p;
    copy_bytes_8c359abc(g_buf_8c548928, g_tmpl_8c3f6320, 8);
    p -= 0x20;
    g_buf_8c548924 = p;
    copy_bytes_8c359abc(g_buf_8c548924, g_tmpl_8c3f6300, 8);
    return p;
}

static char *carve_pair_8c35d3fa(char *top)
{
    char *p = top;
    &p;
    p -= 0x80;
    g_buf_8c54891c = p;
    copy_bytes_8c359abc(g_buf_8c54891c, g_tmpl_8c549440, 0x20);
    p -= 0x80;
    g_buf_8c548920 = p;
    copy_bytes_8c359abc(g_buf_8c548920, g_tmpl_8c5494c0, 0x20);
    return p;
}

static char *carve_quad_8c35d438(char *top)
{
    char *p = top;
    &p;
    p -= 0x100;
    g_buf_8c548910 = p;
    copy_bytes_8c359abc(g_buf_8c548910, g_tmpl_8c548f00, 0x40);
    p -= 0x40;
    g_buf_8c548914 = p;
    copy_bytes_8c359abc(g_buf_8c548914, g_tmpl_8c549000, 0x10);
    return p;
}

static char *carve_tail_8c35d4d8(char *top)
{
    char *p = top;
    &p;
    goto start;
start:
    p -= 0x40;
    g_buf_8c548908 = p;
    copy_bytes_8c359abc(g_buf_8c548908, g_tmpl_8c548e40, 0x10);
    p -= 0x80;
    g_buf_8c54890c = p;
    copy_bytes_8c359abc(g_buf_8c54890c, g_tmpl_8c548e80, 0x20);
    return p;
}
