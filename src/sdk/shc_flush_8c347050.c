/* SDK pool group 0x8c347050 (Hitachi SHC): uploads the system's pending
   16-byte buffer entries and, from the completion callback, clears them. */
typedef struct Item {
    unsigned char used;
    char unknown1[15];
} Item;

typedef struct System {
    int unknown0[2];
    Item *buffer;
    int used;
    int unknown10[5];
    int busy;
    int uploads;
    int completions;
    int handle;
    char unknown34[0x58];
    int port;
    char unknown90[4];
    int mode;
} System;

extern System *g_system_8c3fac48;
extern int upload_8c347ebc(int, Item *, int, void (*)(void), Item **);
extern int apply_8c348210(int, int);
extern int write_byte_8c345f3c(int, char);
extern void set_values_8c346118(int, int);
void uploaded_8c3470c4(void);
int flush_8c347050(void)
{
    int error = 0;
    System *s = g_system_8c3fac48;
    if (s->used != 0) {
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto even;
even:
        if (s->used & 1) s->used++;
        error = upload_8c347ebc(g_system_8c3fac48->handle, g_system_8c3fac48->buffer,
                                g_system_8c3fac48->used * 16, uploaded_8c3470c4,
                                &g_system_8c3fac48->buffer);
        if (error) goto done;
        error = apply_8c348210(g_system_8c3fac48->handle, g_system_8c3fac48->mode);
        if (error) goto done;
        g_system_8c3fac48->uploads++;
    }
done:
    if (error) set_values_8c346118((int)flush_8c347050, error);
    return error;
}

void uploaded_8c3470c4(void)
{
    int i;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    g_system_8c3fac48->completions++;
    write_byte_8c345f3c(g_system_8c3fac48->port, 1);
    for (i = 0; i < g_system_8c3fac48->used; i++) g_system_8c3fac48->buffer[i].used = 0;
    g_system_8c3fac48->used = 0;
    g_system_8c3fac48->busy = 0;
    _builtin_set_imask(old);
}
