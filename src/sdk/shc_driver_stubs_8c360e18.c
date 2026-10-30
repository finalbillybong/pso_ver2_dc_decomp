/* SDK pool group 0x8c360e18-0x8c360eb8 (Hitachi SHC): a driver interface table:
   stubs returning 0 and wrappers that pass the device's channel handle,
   copying their arguments through small local records as observed. */
typedef struct Channel {
    char unknown0[0x534];
    int handle;
} Channel;

typedef struct Device {
    char unknown0[0x2774];
    Channel channel;
} Device;

typedef struct Args1 {
    int handle;
} Args1;

typedef struct Args2 {
    int value;
    int handle;
} Args2;

typedef struct Args3 {
    int value;
    int extra;
    int handle;
} Args3;

extern int start_8c3602ca(Device *, int, int);
extern int set_value_8c35fad4(Device *, int, int);
extern int set_pair_8c35fb7e(Device *, int, int, int);
extern int send_code_8c360c8c(void *, int);

int stub_a_8c360e18(void)
{
    return 0;
}

int stub_b_8c360e1c(void)
{
    return 0;
}

int start_8c360e20(Device *device)
{
    Args1 args;
    Channel *channel = &device->channel;
    args.handle = channel->handle;
    start_8c3602ca(device, args.handle, 1);
    return 0;
}

int stub_c_8c360e3e(void)
{
    return 0;
}

int stub_d_8c360e42(void)
{
    return 0;
}

int stub_e_8c360e46(void)
{
    return 0;
}

int stub_f_8c360e4a(void)
{
    return 0;
}

int stub_g_8c360e4e(void)
{
    return 0;
}

int stub_h_8c360e52(void)
{
    return 0;
}

int set_value_8c360e56(Device *device, int value)
{
    int handle;
    Channel *channel = &device->channel;
    handle = channel->handle;
    return set_value_8c35fad4(device, handle, value);
}

int set_pair_8c360e6e(Device *device, int value, int extra)
{
    int handle;
    Channel *channel = &device->channel;
    handle = channel->handle;
    return set_pair_8c35fb7e(device, handle, value, extra);
}

int send_reset_8c360e8a(void *device)
{
    return send_code_8c360c8c(device, 0xff000501);
}

int send_reset_8c360e92(void *device)
{
    return send_code_8c360c8c(device, 0xff000501);
}

int stub_i_8c360e9a(void)
{
    return 0;
}
