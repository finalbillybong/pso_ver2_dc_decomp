/* SDK pool group 0x8c349324-0x8c349438 (Hitachi SHC): reads a channel's level
   word and scales it by the record's mode. */
typedef struct Record {
    char unknown0[9];
    char count;
    char unknowna[0x218 - 0xa];
    char slot[4];
    char voice[4];
    int mode;
    char unknown224[0x2a0 - 0x224];
} Record;

typedef struct Voice {
    char unknown0[0x1c];
    int level;
    char unknown20[0x20];
} Voice;

typedef struct Registers {
    char unknown0[0x1200];
    Voice voices[64];
} Registers;

typedef struct Context {
    char unknown0[4];
    Record *records;
    char unknown8[0x88 - 8];
    Registers *registers;
} Context;

extern Context *g_context_8c3fac48;
extern void report_error_8c346118(int, int);
extern int read_word_8c345d2c(int *, int *);
extern int lookup_8c345bb4(int, int, int *, int *);

int channel_level_8c349324(char *handle, char channel, int *level)
{
    int error = 0;
    Context *c;
    Record *r;
    int value;
    int a, b;
    char slot;
    c = g_context_8c3fac48;
    if (!c) {
        error = 0xd000001;
        goto done;
    }
    if (handle) goto check;
    error = 0x7000103;
    goto done;
check:
    if (level) goto get;
    error = 0x7000203;
    goto done;
get:
    {
        char idx = *handle;
        r = &c->records[idx];
    }
    slot = r->slot[channel];
    if (channel >= 0 && r->count > channel) goto read;
    error = 0x3000001;
    goto done;
read:
    read_word_8c345d2c(&c->registers->voices[r->voice[channel]].level, &value);
    lookup_8c345bb4(0x52535053, slot, &a, &b);
    switch (r->mode) {
    case 1:
        value += value;
        break;
    case 0:
        break;
    case 2:
        value /= 2;
        break;
    }
    *level = value;
done:
    if (error) report_error_8c346118((int)channel_level_8c349324, error);
    return error;
}
