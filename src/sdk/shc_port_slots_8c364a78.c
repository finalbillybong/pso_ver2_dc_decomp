/* Per-port slot table accessors with a global default table (Hitachi SHC). */
typedef struct Block {
    int words[16];
} Block;

typedef struct Port {
    char pad0[0x40];
    int active;
    char pad44[0x8e0 - 0x44];
    Block in;
    Block out;
    char pad960[0x974 - 0x960];
    int slots[1];
} Port;

typedef struct Ports {
    char pad0[0x1b4];
    int count;
    Port *port;
} Ports;

extern Ports g_ports_8c549978;
typedef struct Slot { int value; } Slot;
extern Slot g_default_slots_8c5499b8[];
extern int poll_ports_8c363dac(void);
extern int port_invalid_8c360d92(Port *);
extern int report_error_8c360c8c(int, int);
extern int port_mode_8c365df2(Port *, int);

static void set_all_slots_8c364afc(int index, int value);
static void set_slot_8c364b3c(Port *p, int index, int value);
static int slot_writable_8c364b88();
int get_slot_8c364c24(Port *p, int index);

void ports_poll_8c364a78(void)
{
    int r = poll_ports_8c363dac();
}

int port_active_8c364a86(Port *p)
{
    if (port_invalid_8c360d92(p))
        return report_error_8c360c8c(0, 0xff000111);
    return p->active;
}

int port_set_slot_8c364aae(Port *p, int index, int value)
{
    if (p == 0) {
        set_all_slots_8c364afc(index, value);
        g_default_slots_8c5499b8[index].value = value;
    } else if (port_invalid_8c360d92(p)) {
        return report_error_8c360c8c(0, 0xff000112);
    } else {
        set_slot_8c364b3c(p, index, value);
    }
    return 0;
}

static void set_all_slots_8c364afc(int index, int value)
{
    int count = g_ports_8c549978.count;
    Port *p = g_ports_8c549978.port;
    int i;
    for (i = 0; i < count; i++) {
        if (p->active > 0)
            set_slot_8c364b3c(p, index, value);
    }
}

static void set_slot_8c364b3c(Port *p, int index, int value)
{
    if (slot_writable_8c364b88(p, index))
        p->slots[index] = value;
}

static int slot_writable_8c364b88(p, index, value)
    Port *p;
    int index;
    int value;
{
    if (index == 6 && value == 1 && port_mode_8c365df2(p, 3) == 0)
        return 0;
    if (index == 5 && value == 1 && port_mode_8c365df2(p, 2) == 0)
        return 0;
    return 1;
}

int port_get_slot_8c364bd4(Port *p, int index, int *out)
{
    if (p == 0) {
        *out = g_default_slots_8c5499b8[index].value;
    } else {
        if (port_invalid_8c360d92(p))
            return report_error_8c360c8c(0, 0xff000113);
        *out = get_slot_8c364c24(p, index);
    }
    return 0;
}

int get_slot_8c364c24(Port *p, int index)
{
    return p->slots[index];
}

int port_get_in_8c364c30(Port *p, Block *b)
{
    if (port_invalid_8c360d92(p))
        return report_error_8c360c8c(0, 0xff000114);
    *b = p->in;
    return 0;
}

int port_get_out_8c364c64(Port *p, Block *b)
{
    if (port_invalid_8c360d92(p))
        return report_error_8c360c8c(0, 0xff000114);
    *b = p->out;
    return 0;
}
