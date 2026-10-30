/* SDK pool group 0x8c35f41c-0x8c35f53c (Hitachi SHC): stream control for the
   device's stream record at 0x2774 + 0xfc0 + 8: reset, start/stop, seek by a
   converted offset, and four calls that send code 0xff000c03. */
typedef struct Stream {
    int handle;
    char unknown4[0x24];
    int rate;
    int mode;
    int position;
} Stream;

typedef struct Device {
    char unknown0[0x48];
    int state;
    char unknown4c[0x2774 - 0x4c];
    char audio[0x2000];
} Device;

extern int seek_8c350bc8(int, int);
extern void stop_8c350abc(int);
extern void convert_rate_8c36564c(Device *, int *, int *);
extern int scale_8c35e570(int, int, int);
extern int send_code_8c360c8c(Device *, int);

void stream_enable_8c35f4ac(Device *device, int enable);
void stream_offset_8c35f4d6(Device *device, int *out, int rate);
static void stop_handle_8c35f4d0(int handle);

int stream_control_8c35f41c(Device *device, int operation)
{
    char *area = device->audio + 0xfc0;
    Stream *stream;
    int handle;
    int offset;
    int rate;
    int position;
    int moved;
    stream = (Stream *)(area + 8);
    handle = stream->handle;
    switch (operation) {
    case 0:
        stream->position = 0;
        stream_enable_8c35f4ac(device, 0);
        break;
    case 1:
        stream_enable_8c35f4ac(device, 1);
        break;
    case 2:
        rate = stream->rate;
        stream_offset_8c35f4d6(device, &offset, rate);
        position = offset + stream->position;
        moved = seek_8c350bc8(handle, position);
        stream->position = position - moved;
        break;
    }
    return 0;
}

void stream_set_mode_8c35f484(Device *device, int mode)
{
    char *area = device->audio + 0xfc0;
    Stream *stream;
    int handle;
    stream = (Stream *)(area + 8);
    handle = stream->handle;
    stream->mode = mode;
    if (mode == 0 && device->state == 1) return;
    stop_handle_8c35f4d0(handle);
}

void stream_enable_8c35f4ac(Device *device, int enable)
{
    char *area = device->audio + 0xfc0;
    Stream *stream;
    int handle;
    stream = (Stream *)(area + 8);
    handle = stream->handle;
    if (enable == 0 && stream->mode == 1) return;
    stop_handle_8c35f4d0(handle);
}

/* Reached by bra from the two callers above (tail call to a file-static). */
static void stop_handle_8c35f4d0(int handle)
{
    stop_8c350abc(handle);
}

void stream_offset_8c35f4d6(Device *device, int *out, int rate)
{
    int numerator, denominator;
    convert_rate_8c36564c(device, &numerator, &denominator);
    *out = scale_8c35e570(rate, numerator, denominator);
}

int send_c03_a_8c35f500(Device *device)
{
    return send_code_8c360c8c(device, 0xff000c03);
}

int send_c03_b_8c35f508(Device *device)
{
    return send_code_8c360c8c(device, 0xff000c03);
}

int send_c03_c_8c35f510(Device *device)
{
    return send_code_8c360c8c(device, 0xff000c03);
}

int send_c03_d_8c35f518(Device *device)
{
    return send_code_8c360c8c(device, 0xff000c03);
}
