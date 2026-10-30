/* Pool group 0x8c1fd920-0x8c1fdc6c (Hitachi SHC): frame receive, link
   configuration and status snapshot helpers. */
typedef struct {
    char *data;
    unsigned short size;
} Frame;

typedef struct {
    int mode_a;
    int mode_b;
    int mode_c;
    int enabled;
    int mode_d;
    int mode_e;
    short reserved;
} LinkConfig;

typedef struct {
    char pad0[8];
    int f08;
    int f0c;
} Words;

typedef struct {
    Words words;
    char pad10[8];
    int f18;
    int f1c;
    char pad20[0x44];
    int f64;
    int f68;
} Source;

typedef struct {
    unsigned char state;
    char pad1[0x2f];
    Source *source;
} Link;

typedef struct {
    char pad0[0x6c];
    Link link;
    char pada0[0x3c];
    int dc;
    int e0;
    short e4[4];
    short ec;
    short ee;
    int f0;
    int f4;
    short f8[4];
    short s100;
    short s102;
    short s104;
    short s106;
    short s108;
} Device;

typedef struct {
    char a[4];
    char b[4];
    char c[4];
    char d[4];
    char e[4];
    char f[4];
    int dc;
    int e0;
    int e4[4];
    int ec;
    short ee;
    int f0;
    int f4;
    short f8[4];
    short s100;
    short s102;
    short s104;
    short s106;
    short s108;
} Status;

extern int trace_8c23157a(int, char *, ...);
extern char g_trace_format_8c2e0e00[];
extern char g_trace_file_8c2e0e10[];
extern Frame g_frame_8c4fa82c;
extern char g_frame_buffer_8c4fa8c4[];
extern int g_link_state_8c32c530;
extern int g_configured_8c32c544;
extern Device g_device_8c4fa588;
extern void lock_8c1fbeb6();
extern void unlock_8c1fbec6();
extern void *memcpy(void *, const void *, unsigned long);
extern void deliver_8c1fe4ec();
extern int configure_8c1fdd66();
extern int send_8c1fdeba();
extern int read_byte_8c1fde30();
extern int close_8c1fdf02();

int receive_frame_8c1fd920(data, size)
char *data;
short size;
{
    Frame *frame = &g_frame_8c4fa82c;
    lock_8c1fbeb6();
    if (g_link_state_8c32c530 == 4) {
        frame->data = g_frame_buffer_8c4fa8c4;
        memcpy(g_frame_buffer_8c4fa8c4, data + 14, size - 14);
        frame->size = size - 14;
        deliver_8c1fe4ec(frame);
    }
    unlock_8c1fbec6();
    return 0;
}

int configure_link_8c1fd968(a, b, c, d, e)
short a;
short b;
short c;
short d;
short e;
{
    LinkConfig config;
    trace_8c23157a(1, g_trace_format_8c2e0e00, g_trace_file_8c2e0e10, 1297);
    config.mode_a = a == 0 ? 0 : a == 1;
    config.mode_b = b == 0 ? 2 : b == 1 ? 1 : b == 2 ? 0 : 2;
    config.mode_c = c == 0 ? 0 : c == 1 ? 2 : 0;
    config.enabled = 1;
    config.mode_d = d == 0 ? 0 : d == 1 ? 1 : d == 2 ? 2 : d == 3 ? 3 : d == 4 ? 4 : d == 5 ? 5 : d == 6 ? 6 : 2;
    config.mode_e = e == 2 ? 0 : e == 3 ? 1 : 1;
    config.reserved = 0;
    if (configure_8c1fdd66(&config)) {
        return -1;
    }
    g_configured_8c32c544 = 1;
    return 0;
}

int send_8c1fda92(data, size)
char *data;
short size;
{
    if (send_8c1fdeba(size, data)) {
        return -1;
    }
    return 0;
}

int read_bytes_8c1fdab8(data, count)
char *data;
short count;
{
    char c;
    unsigned short status;
    while (count) {
        if (read_byte_8c1fde30(1, &c, &status) != 0 && status != 1) {
            return -1;
        }
        *data++ = c;
        count--;
    }
    return 0;
}

int close_8c1fdb00(void)
{
    if (close_8c1fdf02()) {
        return -1;
    }
    return 0;
}

int get_status_8c1fdb1a(Status *out)
{
    Device *dev = &g_device_8c4fa588;
    Link *link = &dev->link;
    Source *src = link->source;
    Words *words;
    int v08, v0c, v18, v1c, v64, v68;
    short i;
    if (link->state != 5) {
        return -16;
    }
    words = &src->words;
    v08 = words->f08;
    v0c = words->f0c;
    v18 = src->f18;
    v1c = src->f1c;
    v64 = src->f64;
    v68 = src->f68;
    for (i = 3; i >= 0; i--) {
        out->a[i] = v08;
        v08 >>= 8;
    }
    for (i = 3; i >= 0; i--) {
        out->b[i] = v0c;
        v0c >>= 8;
    }
    for (i = 3; i >= 0; i--) {
        out->c[i] = v18;
        v18 >>= 8;
        out->d[i] = v1c;
        v1c >>= 8;
        out->e[i] = v64;
        v64 >>= 8;
        out->f[i] = v68;
        v68 >>= 8;
    }
    out->dc = dev->dc;
    out->e0 = dev->e0;
    for (i = 0; i < 4; i++) {
        out->e4[i] = dev->e4[i];
    }
    out->ec = dev->ec;
    out->ee = dev->ee;
    out->f0 = dev->f0;
    out->f4 = dev->f4;
    for (i = 0; i < 4; i++) {
        out->f8[i] = dev->f8[i];
    }
    out->s100 = dev->s100;
    out->s102 = dev->s102;
    out->s104 = dev->s104;
    out->s106 = dev->s106;
    out->s108 = dev->s108;
    return 0;
}
