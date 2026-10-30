typedef struct System {
    char unknown0[0x88];
    int base;
} System;
typedef struct Entry { char pad[7]; char attr; char rest[56]; } Entry;
typedef struct Flash { char hdr[0x200]; Entry entries[1]; } Flash;

extern System *g_system_8c3fac48;
extern int flash_read_byte_8c345d7c(int offset, char *out);
extern void report_error_8c346118(void *where, int code);

int flash_read_byte_8c344f78(char *name, char *out)
{
    int err = 0;
    char value;
    System *s = g_system_8c3fac48;
    goto LG0;
LG0: ;
    if (s == 0) {
        err = 0xd000001;
    } else if (name == 0) {
        err = 0x7000103;
    } else if (out == 0) {
        err = 0x7000203;
    } else {
        { int off = (int)&((Flash *)s->base)->entries[name[0]].attr; flash_read_byte_8c345d7c(off, &value); }
        *out = value - 0x80;
    }
    if (err) report_error_8c346118(flash_read_byte_8c344f78, err);
    return err;
}
