/* SDK pool group 0x8c344cd0 (Hitachi SHC): reads a signed level byte of one
   channel from the device area of the current object; error 0x0d000001 when
   there is no object, 0x07000103 / 0x07000203 for null arguments. */
typedef struct Channel {
    char unknown0[0xc];
    char level;
    char unknownd[0x33];
} Channel;

typedef struct Block {
    char unknown0[0x200];
    Channel chans[16];
} Block;

typedef struct Object {
    char unknown0[0x88];
    Block *base;
} Object;

extern Object *g_current_8c3fac48;
extern int read_byte_8c345d7c(int, unsigned char *);
extern void report_error_8c346118(int (*)(char *, char *), int);

int read_level_8c344cd0(char *channel, char *level)
{
    unsigned char value;
    int address;
    int error = 0;
    if (g_current_8c3fac48 == 0) error = 0xd000001;
    else if (channel == 0) error = 0x7000103;
    else if (level == 0) error = 0x7000203;
    else {
        goto a;
a:
        goto b;
b:
        address = (int)&g_current_8c3fac48->base->chans[*channel].level;
        read_byte_8c345d7c(address, &value);
        *level = value - 0x80;
    }
    if (error) report_error_8c346118(read_level_8c344cd0, error);
    return error;
}
