/* SDK pool group 0x8c364cbc-0x8c364d10 (Hitachi SHC): reads one 0x540-byte
   entry's value after validating the context. */
typedef struct Entry {
    int unknown0[2];
    int value;
    char unknownc[0x540 - 12];
} Entry;

typedef struct Context {
    char unknown0[0x2774];
    Entry entries[4];
} Context;

extern int validate_8c360d92(Context *context);
extern int report_8c360c8c(int code, unsigned int error);

static void get_value_8c364cec(Context *context, int index, int *value);

int entry_value_8c364cbc(Context *context, int index, int *value)
{
    if (validate_8c360d92(context)) return report_8c360c8c(0, 0xff000117);
    get_value_8c364cec(context, index, value);
    return 0;
}

static void get_value_8c364cec(Context *context, int index, int *value)
{
    *value = context->entries[index].value;
}
