/* SDK pool group 0x8c344d58 (Hitachi SHC): reads a 16-bit value of one channel
   from the device area of the current object. */
typedef struct Chan {
    char unknown0[0x40];
} Chan;

typedef struct Block {
    char unknown0[0x200];
    Chan chans[16];
} Block;

typedef struct Object {
    char unknown0[0x88];
    Block *base;
} Object;

extern Object *g_current_8c3fac48;
extern int read_short_8c345db8(int, unsigned short *);
extern void report_error_8c346118(int (*)(char *, int *), int);

int read_word_8c344d58(char *channel, int *out)
{
    unsigned short value;
    int address;
    int error = 0;
    if (g_current_8c3fac48 == 0) error = 0xd000001;
    else if (channel == 0) error = 0x7000103;
    else if (channel == (char *)-1) error = 0x7000102;
    else if (out == 0) error = 0x7000203;
    else if (out == (int *)-1) error = 0x7000202;
    else {
        goto read;
read:
        address = (int)&g_current_8c3fac48->base->chans[*channel];
        read_short_8c345db8(address + 2, &value);
        *out = value;
    }
    if (error) report_error_8c346118(read_word_8c344d58, error);
    return error;
}
