/* SDK pool group 0x8c346688-0x8c34678c (Hitachi SHC): reads the firmware
   header bytes and words into the context and sets default split values. */
typedef struct Context {
    char unknown0[0x34];
    char a;
    char b;
    char c;
    char unknown37[0x80 - 0x37];
    int header;
    int w84, w88, w8c, w90, w94, w98;
    int base;
    unsigned char v0, v1, v2, v3;
} Context;

extern Context *g_context_8c3fac48;
extern void report_error_8c346118(int, int);
extern int read_byte_8c345e50(int, unsigned char *);
extern int read_word_8c345d2c(int, int *);

int load_header_8c346688(void)
{
    int error = 0;
    int header;
    if (!g_context_8c3fac48) {
        error = 0xd000001;
        goto done;
    }
    header = g_context_8c3fac48->base + 0x20;
    g_context_8c3fac48->header = header;
    read_byte_8c345e50(header, &g_context_8c3fac48->v0);
    read_byte_8c345e50(header + 1, &g_context_8c3fac48->v1);
    read_byte_8c345e50(header + 2, &g_context_8c3fac48->v2);
    g_context_8c3fac48->v3 = 0;
    read_word_8c345d2c(header + 0xa0, &g_context_8c3fac48->w84);
    read_word_8c345d2c(header + 0xa4, &g_context_8c3fac48->w88);
    read_word_8c345d2c(header + 0xa8, &g_context_8c3fac48->w8c);
    read_word_8c345d2c(header + 0xac, &g_context_8c3fac48->w90);
    read_word_8c345d2c(header + 0xb0, &g_context_8c3fac48->w94);
    read_word_8c345d2c(header + 0xb4, &g_context_8c3fac48->w98);
    g_context_8c3fac48->a = 0x30;
    g_context_8c3fac48->b = 8;
    g_context_8c3fac48->c = 8;
done:
    if (error) report_error_8c346118((int)load_header_8c346688, error);
    return error;
}
