/* SDK pool group 0x8c345bb4-0x8c345d2c (Hitachi SHC): looks up the address and
   size registered for a bank type and index. */
typedef struct Entry {
    int address;
    int size;
} Entry;

typedef struct Context {
    char unknown0[0xa4];
    Entry sequence[16];
    Entry program[16];
    Entry oneshot[16];
    Entry psr[16];
    Entry fx_program;
    char unknown2ac[0x324 - 0x2ac];
    Entry fx_output;
    Entry fx_wave;
    Entry multi[16];
} Context;

extern Context *g_context_8c3fac48;
extern void report_error_8c346118(int, int);

int bank_lookup_8c345bb4(int type, char index, int *address, int *size)
{
    int error = 0;
    Context *c;
    Entry *e;
    int i;
    if (!(c = g_context_8c3fac48)) {
        error = 0xd000001;
        goto done;
    }
    if (!address) {
        error = 0x7000203;
        goto done;
    }
    if (!size) {
        error = 0x3000001;
        goto done;
    }
    i = index;
    if (i < 0) goto bad;
    switch (type) {
    case 0x42534d53:
        if (i >= 16) goto bad;
        e = &c->sequence[index];
        break;
    case 0x42504d53:
        if (i >= 16) goto bad;
        e = &c->program[index];
        break;
    case 0x42444d53:
        if (i >= 16) goto bad;
        e = &c->multi[index];
        break;
    case 0x42534f53:
        if (i >= 16) goto bad;
        e = &c->oneshot[index];
        break;
    case 0x52535053:
        if (i >= 16) goto bad;
        e = &c->psr[index];
        break;
    case 0x42504653:
        if (i) goto bad;
        e = &c->fx_program;
        break;
    case 0x424f4653:
        if (i) goto bad;
        e = &c->fx_output;
        break;
    case 0x57504653:
        if (!i) goto wave;
    bad:
        error = 0x9000004;
        goto done;
    wave:
        e = &c->fx_wave;
        break;
    case 0x56524453:
    case 0x544c4d53:
    default:
        error = 0x9000001;
        e = 0;
        break;
    }
    if (!e) goto none;
    *address = e->address;
    *size = e->size;
    goto done;
none:
    if (address) *address = 0;
    if (size) *size = -1;
done:
    if (error) report_error_8c346118((int)bank_lookup_8c345bb4, error);
    return error;
}
