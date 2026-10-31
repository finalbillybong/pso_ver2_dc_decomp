/* SDK pool group 0x8c379d84 (Hitachi SHC): G2 port status registers
   (read/write through the bus copy helpers) and registration of per-port
   callbacks polled by a handler task. */
typedef struct Port {
    void (*fn)(int);
    int arg;
} Port;

extern Port g_ports_8c56d3d4[32];
extern int g_port_count_8c56d3d0;
extern void *g_port_task_8c56d4d4;
extern int copy_8c36e010(char *, char *, int, int, int, int);
extern int transfer_8c36e384(char *, char *, int, int, int, int);
extern void *create_handler_8c36bbc4(int, void (*)(void), int, int);
int add_port_8c379e50(short port, void (*fn)(int), int unused, int arg);
extern void poll_ports_8c379ee8(void);

int read_status_8c379d84(int port)
{
    int v;
    copy_8c36e010((char *)(0xa1000010 + port * 0x400), (char *)&v, 4, 1, 0, 0);
    return v;
}

int read_mode_8c379db0(int port)
{
    int v;
    copy_8c36e010((char *)(0xa1000014 + port * 0x400), (char *)&v, 4, 1, 0, 0);
    return v;
}

void write_mode_8c379ddc(int port, int value)
{
    transfer_8c36e384((char *)&value, (char *)(0xa1000014 + port * 0x400), 4, 1, 0, 0);
}

void clear_ports_8c379e08(void)
{
    volatile unsigned short old;
    Port *p;
    old = _builtin_get_imask();
    _builtin_set_imask(15);
    p = &g_ports_8c56d3d4[1];
    do {
        p->fn = 0;
        p->arg = 0;
        p++;
    } while (p < &g_ports_8c56d3d4[32]);
    _builtin_set_imask(old);
}

int set_port_8c379e4c(short port, void (*fn)(int), int unused, int arg)
{
    return add_port_8c379e50(port, fn, unused, arg);
}

int add_port_8c379e50(short port, void (*fn)(int), int unused, int arg)
{
    unsigned short old;
    int r;
    old = _builtin_get_imask();
    _builtin_set_imask(15);
    g_ports_8c56d3d4[port].fn = fn;
    g_ports_8c56d3d4[port].arg = arg;
    if (g_port_count_8c56d3d0 == 0)
        g_port_task_8c56d4d4 = create_handler_8c36bbc4(0xb60, poll_ports_8c379ee8, 0x10, 0);
    write_mode_8c379ddc(r = port, 1);
    g_port_count_8c56d3d0++;
    _builtin_set_imask(old);
    return r;
}

