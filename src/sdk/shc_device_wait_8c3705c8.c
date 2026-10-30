/* Device reset waits, debug print and context table accessors (Hitachi SHC). */
typedef char *va_list;
#define va_start(ap, param) (void)((ap) = (int)((char *)&(param) + sizeof(param)) % 4u ? (char *)&(param) + sizeof(param) + (4u - (sizeof(param) % 4u)) : (char *)&(param) + sizeof(param))

typedef struct Device {
    int unknown0;
    int mode;
    char unknown8[8];
    int c;
    int b;
    int status;
    char unknown1C[0x80 - 0x1c];
    int f80;
    char unknown84[8];
    int f8c;
} Device;

typedef struct Entry8 {
    int w[2];
} Entry8;

typedef struct Entry2C {
    int w[11];
} Entry2C;

typedef struct Entry78 {
    int w[30];
} Entry78;

typedef struct Context {
    int unknown0;
    Entry8 a[4];
    int pad24;
    Entry2C b[24];
    int pad448;
    Entry78 c[26];
    char unknown107C[0x10c8 - 0x107c];
    int debug;
    char unknown10CC[0x10f4 - 0x10cc];
    volatile Device *dev;
} Context;

extern Context *g_context_8c562834;
extern char g_debug_buffer_8c561638[];
extern void (*g_debug_hook_8c3fbe08)(char *s);
extern unsigned int tick_count_8c36e6f6(void);
extern int tick_elapsed_8c36e700(unsigned int from, unsigned int to);
extern int vsprintf(char *s, const char *fmt, va_list ap);

int device_reset_wait_8c3705c8(void)
{
    unsigned int start = tick_count_8c36e6f6();
    while (g_context_8c562834->dev->status & 1) {
        if (tick_elapsed_8c36e700(start, tick_count_8c36e6f6()) > 100000) break;
    }
    g_context_8c562834->dev->status = 0;
    g_context_8c562834->dev->b = 0;
    g_context_8c562834->dev->c = 0;
    g_context_8c562834->dev->f8c = 0x6155404f;
    g_context_8c562834->dev->f80 = 0xc3500000;
    g_context_8c562834->dev->mode = 0x0cff0000;
    start = tick_count_8c36e6f6();
    while (g_context_8c562834->dev->status & 1) {
        if (tick_elapsed_8c36e700(start, tick_count_8c36e6f6()) > 17000) break;
    }
    return 0;
}

void debug_print_8c37066c(char *fmt, ...)
{
    va_list ap;
    if (g_context_8c562834->debug) {
        va_start(ap, fmt);
        vsprintf(g_debug_buffer_8c561638, fmt, ap);
        if (g_debug_hook_8c3fbe08) g_debug_hook_8c3fbe08(g_debug_buffer_8c561638);
    }
}

Entry2C *context_b_8c3706b4(int i)
{
    return &g_context_8c562834->b[i];
}

Entry78 *context_c_8c3706c4(int i)
{
    return &g_context_8c562834->c[i];
}

Entry8 *context_a_8c3706d6(int i)
{
    return &g_context_8c562834->a[i];
}
