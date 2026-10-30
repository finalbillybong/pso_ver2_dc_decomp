/* SDK pool group 0x8c35acd4-0x8c35add0 (Hitachi SHC): two empty hooks and
   four getters that copy device records out after a busy check (errors
   0xff020201..3 are reported through a tail call). */
typedef struct Record12 {
    int words[3];
} Record12;

typedef struct Record32 {
    int words[8];
} Record32;

typedef struct Device {
    char unknown0[0x14];
    Record12 status;
    Record32 config;
    Record32 items[3];
    Record32 extra;
} Device;

extern int device_busy_8c35afd4(Device *);
extern int report_8c35aec2(int, int);

void hook_a_8c35acd4(void)
{
}

void hook_b_8c35acd8(void)
{
}

int get_status_8c35acdc(Device *device, Record12 *out)
{
    if (device_busy_8c35afd4(device)) return report_8c35aec2(0, 0xff020201);
    *out = device->status;
    return 0;
}

int get_item_8c35ad0e(Device *device, Record32 *out, int index)
{
    if (device_busy_8c35afd4(device)) return report_8c35aec2(0, 0xff020202);
    *out = device->items[index];
    return 0;
}

int get_config_8c35ad4c(Device *device, Record32 *out)
{
    if (device_busy_8c35afd4(device)) return report_8c35aec2(0, 0xff020202);
    *out = device->config;
    return 0;
}

int get_extra_8c35ad7e(Device *device, Record32 *out)
{
    if (device_busy_8c35afd4(device)) return report_8c35aec2(0, 0xff020203);
    *out = device->extra;
    return 0;
}
