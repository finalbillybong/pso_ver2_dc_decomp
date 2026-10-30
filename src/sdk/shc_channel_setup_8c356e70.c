/* Re-initialises the channels of a manager (Hitachi SHC). */
typedef struct Channel {
    char unknown0[0x28];
} Channel;

typedef struct Manager {
    char unknown0[0x20];
    int count;
    char unknown24[0x34 - 0x24];
    int format;
    int rate;
    char unknown3c[0x3a4 - 0x3c];
    Channel channels[1];
} Manager;

extern int debug_print_8c35570c(const char *, ...);
extern char g_msg_setup_8c3f5568[];
extern char g_msg_release_8c3f5594[];
extern void reset_format_8c3b99c0(int);
extern int channel_setup_8c3b99ec(Channel *, int, int, int);
extern int channel_release_8c3ba068(Channel *);

static void release_channels_8c356efe(Channel *c, int n);

void channels_setup_8c356e70(Manager *m, int mode, int format)
{
    int i, n, rate, flags, cur;
    Channel *c, *base;
    release_channels_8c356efe(m->channels, m->count);
    n = m->count;
    base = m->channels;
    cur = m->format;
    rate = m->rate;
    if (mode == 2) flags = 0x700;
    else if (format != cur) {
        flags = 0xb03;
        reset_format_8c3b99c0(format);
    } else flags = 0x903;
    for (i = 0, c = base; i < n; i++, c++) {
        int r = channel_setup_8c3b99ec(c, cur, rate, flags);
        if (r) {
            debug_print_8c35570c(g_msg_setup_8c3f5568);
            break;
        }
    }
}

static void release_channels_8c356efe(Channel *c, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        int r = channel_release_8c3ba068(&c[i]);
        if (r) {
            debug_print_8c35570c(g_msg_release_8c3f5594);
            break;
        }
    }
}
