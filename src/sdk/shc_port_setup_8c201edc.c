/* Library pool group 0x8c201edc-0x8c202060 (Hitachi SHC): port callback
   setters, a mode switch, port block initialisation and the wait loop. The
   literal pool sits inside the last function, after its first branch. */
typedef struct Config {
    int words[9];
} Config;

typedef struct PortBlock {
    short id;
    short unknown2;
    Config first;
    char unknown28[0x24];
    short id2;
    short unknown4e;
    Config second;
    Config third;
} PortBlock;

typedef struct Session {
    char unknown0[0xc];
    void *owner;
    char unknown10[0x1c];
    char *name;
    PortBlock *block;
} Session;

typedef struct Port {
    unsigned char state;
    char unknown1[3];
    short flags;
    short unknown6;
    short retry;
    short unknowna;
    unsigned char *request;
    short mode;
    short width;
    char enabled;
    char unknown15[3];
    int callback_b;
    int callback_a;
    char unknown20[0x4c];
    Session session;
} Port;

extern char g_driver_name_8c2e1150[];
extern PortBlock g_port_block_8c5033a8;
extern Config g_default_config_8c32c590;
extern short g_default_id_8c32c5b4;
extern void attach_8c201394(Session *session);
extern void step_8c2041cc(void);
extern void step_8c1fbece(void);
extern void step_8c1fbec6(void);
extern int poll_8c1feece(void);
extern void step_8c1fbeb6(void);

int set_callback_a_8c201edc(Port *port, int callback)
{
    if (callback == -1) {
        port->callback_a = 0;
        port->flags &= ~0x800;
    } else {
        port->callback_a = callback;
        port->flags |= 0x800;
    }
    return 0;
}

int set_callback_b_8c201efc(Port *port, int callback)
{
    if (callback == -1) {
        port->callback_b = 0;
        port->flags &= ~0x200;
    } else {
        port->callback_b = callback;
        port->flags |= 0x200;
    }
    return 0;
}

int set_callback_a2_8c201f1c(Port *port, int callback)
{
    if (callback == -1) {
        port->callback_a = 0;
        port->flags &= ~0x800;
    } else {
        port->callback_a = callback;
        port->flags |= 0x800;
    }
    return 0;
}

int set_default_mode_8c201f3c(short off, Port *port)
{
    if (off == 0) {
        port->mode = 0x2d;
        port->width = 0x10;
        port->enabled = 1;
        port->flags |= 4;
    } else if (off) {
        port->flags &= ~4;
    }
    return 0;
}

void setup_port_8c201f6a(Port *port)
{
    Session *session = &port->session;
    PortBlock *block;
    session->owner = port;
    session->name = g_driver_name_8c2e1150;
    block = &g_port_block_8c5033a8;
    session->block = block;
    block->first = g_default_config_8c32c590;
    block->id = g_default_id_8c32c5b4;
    block->second = g_default_config_8c32c590;
    block->third = g_default_config_8c32c590;
    block->id2 = g_default_id_8c32c5b4;
    attach_8c201394(session);
}

int wait_ready_8c201fb8(Port *port)
{
    unsigned char *request = port->request;
    port->retry = 0;
    while (port->state != 5) {
        if (poll_8c1feece() || port->retry || *request == 4) {
            port->retry = 0;
            return -1;
        }
        step_8c1fbec6();
        step_8c1fbece();
        step_8c2041cc();
        step_8c1fbeb6();
    }
    port->retry = 0;
    /* No return statement here: the reference returns whatever r0 holds (0 from the store). */
}
