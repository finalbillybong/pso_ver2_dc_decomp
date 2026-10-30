/* SDK pool group 0x8c356f68-0x8c35707c (Hitachi SHC): channel transfer helpers
   that temporarily install the context's transfer window. */
typedef union Word {
    int i;
    void *p;
} Word;

typedef struct Channel {
    char unknown0[0xc];
    Word window_a;
    Word window_b;
    char unknown14[0x28 - 0x14];
} Channel;

typedef struct Context {
    char unknown0[0x2c];
    Word window_a;
    Word window_b;
    char unknown34[0x3a4 - 0x34];
    Channel channels[8];
} Context;

extern int start_transfer_8c3b9e72(Channel *, int, int, int, int, int);
extern int start_transfer_8c3b9c3a(Channel *, int, int, int);
extern void log_error_8c35570c(char *, ...);
extern char s_failed_a_8c3f55bc[];
extern char s_failed_b_8c3f55e4[];

void chan_write_8c356f68(Context *c, int ch, volatile int address)
{
    Channel *p = &c->channels[ch];
    Word saved_a, saved_b;
    int error;
    saved_a = p->window_a;
    saved_b = p->window_b;
    p->window_a = c->window_a;
    p->window_b = c->window_b;
    error = start_transfer_8c3b9e72(p, address | 0xa0000000, 1, 1, 6, 1);
    p->window_a = saved_a;
    p->window_b = saved_b;
    if (error) log_error_8c35570c(s_failed_a_8c3f55bc);
}

void chan_read_8c356fcc(Context *c, int ch, volatile int address)
{
    Channel *p = &c->channels[ch];
    Word saved_b, saved_a;
    int error;
    saved_a = p->window_a;
    saved_b = p->window_b;
    p->window_a = c->window_a;
    p->window_b = c->window_b;
    error = start_transfer_8c3b9c3a(p, address | 0xa0000000, 0, 0);
    if (error) log_error_8c35570c(s_failed_b_8c3f55e4);
    p->window_a = saved_a;
    p->window_b = saved_b;
}

void chan_start_8c357026(Context *c, int ch, volatile int address)
{
    Channel *p = &c->channels[ch];
    int error;
    error = start_transfer_8c3b9c3a(p, address | 0xa0000000, 0, 0);
    if (error) log_error_8c35570c(s_failed_a_8c3f55bc);
}
