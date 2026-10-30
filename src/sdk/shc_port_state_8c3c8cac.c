/* SDK pool group 0x8c3c8cac-0x8c3c8dac (Hitachi SHC): port initialisation and
   state transitions (1 = ready, 2 = running). The goto layout reproduces
   SHC's block order and scratch-register rotation. */
typedef struct Port {
    char present;
    unsigned char state;
    char unknown2[2];
    int timeout;
    int unknown8;
    int handle;
    int unknown10;
    int unknown14;
    short count;
    char kind;
    char unknown1b;
    char queue[6];
    char marks[6];
} Port;

extern Port *get_port_8c3c5c76();
extern int attach_port_8c3c89f0(int);
extern int start_engine_8c3c8aa8(void);
extern int start_queue_8c3c8b30(char *);
extern void *get_device_8c3c5c4c(void);
extern int stop_engine_8c3c8b14(void);

int port_available_8c3c8cac(void)
{
    return 1;
}

int port_init_8c3c8cb0(int number)
{
    Port *port;
    if ((port = get_port_8c3c5c76(number)) == 0 || attach_port_8c3c89f0(number) != 0) return -1;
    port->present = 1;
    port->timeout = 1500;
    port->unknown8 = 0;
    port->handle = -1;
    port->unknown10 = 0;
    port->unknown14 = 0;
    port->count = 1;
    port->kind = 6;
    port->marks[0] = -1;
    port->marks[1] = -1;
    port->marks[2] = -1;
    port->marks[3] = -1;
    port->marks[4] = -1;
    port->marks[5] = -1;
    port->state = 1;
    return 0;
}

int port_start_8c3c8d1c(void)
{
    Port *port;
    if ((port = get_port_8c3c5c76()) == 0 || port->state == 2 || start_engine_8c3c8aa8() != 0) goto fail;
    if (start_queue_8c3c8b30(port->queue) == 0) goto ok;
fail:
    return -1;
ok:
    port->state = 2;
    return 0;
}

int port_stop_8c3c8d5e(void)
{
    Port *port;
    if ((port = get_device_8c3c5c4c()) == 0) goto fail;
    if (stop_engine_8c3c8b14() == 0) goto ok;
fail:
    return -1;
ok:
    goto set;
set:
    port->state = 1;
    return 0;
}
