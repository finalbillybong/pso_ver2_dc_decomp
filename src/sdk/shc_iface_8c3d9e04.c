typedef struct Iface {
    int (*open)(void);
    int unused;
    void (*close)(int);
} Iface;

extern int g_handle_8c5bcc4c;
extern Iface *g_iface_8c5bcc48;
extern short g_value_8c4002da;
extern char str_8c4002b0[];

int iface_open_8c3d9e04(void)
{
    int *p = &g_handle_8c5bcc4c;
    if (*p == 0) {
        *p = g_iface_8c5bcc48->open();
        return *p;
    }
    return 0;
}

void iface_close_8c3d9e2a(void)
{
    g_iface_8c5bcc48->close(g_handle_8c5bcc4c);
    g_handle_8c5bcc4c = 0;
}

short get_value_8c3d9e42(void)
{
    return g_value_8c4002da;
}

char *get_table_8c3d9e48(void)
{
    return str_8c4002b0;
}

void set_iface_8c3d9e4e(Iface *p)
{
    g_iface_8c5bcc48 = p;
}

void clear_handle_8c3d9e54(void)
{
    g_handle_8c5bcc4c = 0;
}
