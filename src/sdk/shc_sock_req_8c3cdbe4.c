/* SDK pool group 0x8c3cdbe4-0x8c3cde20 (Hitachi SHC): socket request
   handlers - message dispatch by class bits, resolver configuration,
   close, and connect/listen sequences with error mapping. */
typedef struct Msg {
    short type;
    short unknown2;
    int arg;
} Msg;

typedef struct Conf {
    short type;
    short unknown2;
    int addr;
    int mask;
    int gateway;
} Conf;

typedef struct Req {
    int addr;
    short port;
    short local_port;
    char unknown8;
    char opt_a;
    char opt_b;
    char opt_c;
    short timeout;
    short unknown0e;
    int bufsize;
    int flags;
} Req;

extern int g_ip_8c5b8570;
extern int g_mask_8c5b8574;
extern int g_gateway_8c5b8578;
extern int g_configured_8c5ba420;
extern int chan_set_ctx_8c3c4fa4(int, int);
extern int chan_set_alt_8c3c6772(int, int);
extern int msg_other_8c3cc8f6(int, int);
extern int net_mask_8c3c7e00(int, int);
extern int net_config_8c3c6506(int, int, int, int);
extern int net_flush_8c3c8334(void);
extern int net_close_8c3c6534(int);
extern int sock_new_8c3cbd2c(Req *);
extern int sock_bind_8c3cbe90(int, int, int, int);
extern int sock_close_8c3cc316(int);
extern void sock_opts_8c3cc1fa(int, char, char, char, short, int, int);
extern int sock_connect_8c3cc0ec(int, int, int);
extern int sock_error_8c3c9eaa(int);
extern int sock_listen_8c3cc1b2(int, int, int);

int msg_dispatch_8c3cdbe4(Msg *m)
{
    switch (m->type & 0xc0) {
    case 0x80:
        return chan_set_ctx_8c3c4fa4(m->type & 0x3f, m->arg);
    case 0xc0:
        return chan_set_alt_8c3c6772(m->type & 0x3f, m->arg);
    default:
        return msg_other_8c3cc8f6(m->type, m->arg);
    }
}

int net_setup_8c3cdc22(Conf *c)
{
    int r;

    if (c->type == 0) {
        g_ip_8c5b8570 = c->addr;
        g_mask_8c5b8574 = c->mask;
        g_mask_8c5b8574 = net_mask_8c3c7e00(g_mask_8c5b8574, g_ip_8c5b8570);
        g_gateway_8c5b8578 = c->gateway;
        g_configured_8c5ba420 = 1;
    }
    if (c->type == 0)
        r = net_config_8c3c6506(g_ip_8c5b8570, g_mask_8c5b8574, g_gateway_8c5b8578, c->type);
    else
        r = net_config_8c3c6506(c->addr, c->mask, c->gateway, c->type);
    net_flush_8c3c8334();
    if (r) return 0xfff0;
    return 0;
}

int net_close_8c3cdc94(c)
Conf *c;
{
    if (c->type == 0) g_configured_8c5ba420 = 0;
    return net_close_8c3c6534(c->type);
}

int sock_open_8c3cdcb0(Req *m)
{
    int s;
    int e;

    if ((s = sock_new_8c3cbd2c(m)) < 0) return -2;
    if (sock_bind_8c3cbe90(s, m->local_port, m->addr, m->port) < 0) {
        sock_close_8c3cc316(s);
        return -3;
    }
    m->timeout = 0;
    m->bufsize = 0;
    sock_opts_8c3cc1fa(s, m->opt_a, m->opt_b, m->opt_c, m->timeout, m->bufsize, m->flags);
    if (sock_connect_8c3cc0ec(s, m->addr, m->port) < 0) {
        e = sock_error_8c3c9eaa(s);
        sock_close_8c3cc316(s);
        if (e == 6) return -7;
        return -6;
    }
    return s;
}

int sock_serve_8c3cdd8a(Req *m)
{
    int s;

    if ((s = sock_new_8c3cbd2c(m)) < 0) return -2;
    if (sock_bind_8c3cbe90(s, m->local_port, m->addr, m->port) < 0) {
        sock_close_8c3cc316(s);
        return -3;
    }
    sock_opts_8c3cc1fa(s, m->opt_a, m->opt_b, m->opt_c, m->timeout, m->bufsize, 0);
    if (sock_listen_8c3cc1b2(s, m->addr, m->port) < 0) {
        sock_close_8c3cc316(s);
        return -7;
    }
    return s;
}
