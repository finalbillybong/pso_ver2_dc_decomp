/* SDK pool group 0x8c365e24-0x8c365f5c (Hitachi SHC): a device operation
   table: stubs, two start-up sequences and two unsupported-operation
   reports (0xff000701). */
typedef struct Unit {
    char unknown0[0x530];
    int handle;
    char unknown534[0x1f80 - 0x534];
} Unit;

typedef struct Device {
    char unknown0[0x2774];
    char area[0x4000];
} Device;

extern int get_slot_8c364c24(Device *device, int state);
extern int get_state_8c365de2(Device *device, int kind);
extern int close_port_8c3602fa(Device *device, int handle);
extern void set_state_8c365dd2(Device *device, int kind, int on);
extern int busy_8c365970(Device *device);
extern int get_state_8c365dc2(Device *device, int kind);
extern int open_port_8c3602da(Device *device, int handle);
extern void set_state_8c365db2(Device *device, int kind, int on);
extern int send_code_8c360c8c(Device *device, unsigned int error);

int op_none_8c365e24(void)
{
    return 0;
}

int op_none_8c365e28(void)
{
    return 0;
}

int op_poll_8c365e2c(Device *device);
void op_start_a_8c365e60(Device *device);
int op_ready_8c365ea2(Device *device);
void op_start_b_8c365ebc(Device *device);
int op_true_8c365efe(Device *device);
int op_none_8c365f02(Device *device);

int op_poll_8c365e2c(Device *device)
{
    int result;
    if (!get_slot_8c364c24(device, 5)) return 0;
    op_start_a_8c365e60(device);
    result = op_none_8c365f02(device);
    op_start_b_8c365ebc(device);
    return result;
}

void op_start_a_8c365e60(Device *device)
{
    if (get_state_8c365de2(device, 6) == 1) return;
    {
        char *unit = device->area + 0x1f80;
        int handle = ((Unit *)unit)->handle;
        if (close_port_8c3602fa(device, handle) != 1) return;
    }
    if (!op_ready_8c365ea2(device)) return;
    set_state_8c365dd2(device, 6, 1);
}

int op_ready_8c365ea2(Device *device)
{
    if (!busy_8c365970(device)) return 0;
    return 1;
}

void op_start_b_8c365ebc(Device *device)
{
    if (get_state_8c365dc2(device, 6) == 1) return;
    {
        char *unit = device->area + 0x1f80;
        int handle = ((Unit *)unit)->handle;
        if (open_port_8c3602da(device, handle) != 1) return;
    }
    if (!op_true_8c365efe(device)) return;
    set_state_8c365db2(device, 6, 1);
}

int op_true_8c365efe(Device *device)
{
    return 1;
}

int op_none_8c365f02(Device *device)
{
    return 0;
}

int op_none_8c365f06(void)
{
    return 0;
}

int op_none_8c365f0a(void)
{
    return 0;
}

int op_none_8c365f0e(void)
{
    return 0;
}

int op_none_8c365f12(void)
{
    return 0;
}

int op_none_8c365f16(void)
{
    return 0;
}

int op_none_8c365f1a(void)
{
    return 0;
}

int op_unsupported_8c365f1e(Device *device)
{
    return send_code_8c360c8c(device, 0xff000701);
}

int op_unsupported_8c365f26(Device *device)
{
    return send_code_8c360c8c(device, 0xff000701);
}
