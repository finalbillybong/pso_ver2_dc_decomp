/* SDK pool group 0x8c35f5d8-0x8c35f700 (Hitachi SHC): small device event
   handlers.  The port block lives at device->audio + 0x24c0; writing it as one
   member-array expression gives the reference literal-pool order. */
typedef struct Port {
    char unknown0[0x530];
    int id;
} Port;

typedef struct Device {
    char unknown0[0x2774];
    char audio[0x3000];
} Device;

extern int check_mode_8c364c24(Device *, int);
extern int get_state_8c365dc2(Device *, int);
extern int open_port_8c3602da(Device *, int);
extern void set_state_8c365db2(Device *, int, int);
extern int get_state_8c365de2(Device *, int);
extern int close_port_8c3602fa(Device *, int);
extern void set_state_8c365dd2(Device *, int, int);
extern int request_8c365d70(Device *, int, int, int, int);

static int port_restart_8c35f604(Device *device);
static void port_open_8c35f618(Device *device);
static void port_close_8c35f652(Device *device);

int port_none_8c35f5d8(void)
{
    return 0;
}

int port_none_8c35f5dc(void)
{
    return 0;
}

int port_event_8c35f5e0(Device *device)
{
    int result;
    if (check_mode_8c364c24(device, 6) == 0) return 0;
    result = port_restart_8c35f604(device);
    return result;
}

static int port_restart_8c35f604(Device *device)
{
    port_open_8c35f618(device);
    port_close_8c35f652(device);
    return 0;
}

static void port_open_8c35f618(Device *device)
{
    char *port;
    int id;
    if (get_state_8c365dc2(device, 7) == 1) return;
    port = device->audio + 0x24c0;
    id = *(int *)(port + 0x530);
    if (open_port_8c3602da(device, id) == 1)
        set_state_8c365db2(device, 7, 1);
}

static void port_close_8c35f652(Device *device)
{
    char *port;
    int id;
    if (get_state_8c365de2(device, 7) == 1) return;
    port = device->audio + 0x24c0;
    id = *(int *)(port + 0x530);
    if (close_port_8c3602fa(device, id) == 1)
        set_state_8c365dd2(device, 7, 1);
}

int port_check_8c35f68c(Device *device)
{
    if (check_mode_8c364c24(device, 6)) {
    }
    return 0;
}

int port_none_8c35f69c(void)
{
    return 0;
}

int port_request_8c35f6a0(Device *device)
{
    int result;
    if (check_mode_8c364c24(device, 6) == 0) goto done;
    if ((result = request_8c365d70(device, 3, 5, 0, 0)) != 0) return result;
done:
    return 0;
}
