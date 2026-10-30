/* SDK pool group 0x8c348dfc-0x8c348f24 (Hitachi SHC): validates an 'SMLT' bank
   header and loads/registers each of its entries. */
typedef struct Entry {
    int a;
    int b;
    int c;
    int d;
    int offset;
    int size;
    char unknown18[8];
} Entry;

typedef struct Header {
    int magic;
    unsigned char version;
    char unknown5[3];
    int count;
    char unknownc[0x20 - 0xc];
    Entry entries[1];
} Header;

typedef struct Bank {
    char unknown0[0xc];
    Header *header;
} Bank;

typedef struct Context {
    char unknown0[0x42c];
    int device;
} Context;

extern Context *g_context_8c3fac48;
extern void report_error_8c346118(int, int);
extern int load_entry_8c3459e0(int, int, int, int);
extern int upload_8c347ebc(int, char *, int, int, int);
extern int register_entry_8c3465a8(int, int, int);

int load_bank_8c348dfc(Bank *bank)
{
    int error = 0;
    Header *header;
    Entry *e;
    int n, i;
    (void)&header;
    if (!g_context_8c3fac48) {
        error = 0xd000001;
        goto done;
    }
    if (bank) goto check;
    error = 0x7000103;
    goto done;
check:
    header = bank->header;
    if (header == 0 || header == (Header *)-1) {
        error = 0x7000203;
        goto done;
    }
    if (header->magic != 0x544c4d53) {
        error = 0x9000101;
        goto done;
    }
    n = header->count;
    e = header->entries;
    if (header->version != 2) {
        error = 0x9000102;
        goto done;
    }
    for (i = 0; i < n; i++, e++) {
        if (e->d >= 0) {
            error = load_entry_8c3459e0(e->a, e->b, e->c, e->d);
            if (error) goto done;
        }
        if (e->size > 0) {
            {
                char *p = (char *)header + e->offset;
                int size = e->size;
                error = upload_8c347ebc(g_context_8c3fac48->device, p, size, -1, 0);
            }
            if (error) goto done;
            error = register_entry_8c3465a8(g_context_8c3fac48->device, e->a, e->b);
            if (error) goto done;
        }
    }
done:
    header = bank->header;
    if (error) report_error_8c346118((int)load_bank_8c348dfc, error);
    return error;
}
