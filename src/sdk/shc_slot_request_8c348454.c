/* Issues request 1 for a named slot after validating its parameters (Hitachi SHC). */
extern void *g_system_8c3fac48;
extern int g_request_code_8c52e3c0;
extern char g_request_name_8c52e3c4[], g_request_slot_8c52e3c5[], g_request_index_8c52e3c7[];
extern int lookup_entry_8c345bb4(int key, char kind, void **entry, int *size);
extern int submit_request_8c3472e4(int *);
extern void report_error_8c346118(void *where, int code);

int slot_request_8c348454(char *name, char slot, char page, char index)
{
    int err;
    void *entry;
    int size;
    if (g_system_8c3fac48 != 0) goto have_system;
    err = 0xd000001;
    goto done;
have_system:
    if (name != 0) goto have_name;
    err = 0x7000103;
    goto done;
have_name:
    goto check;
check:
    if (slot < 0 || page < 0 || index < 0 || index > 31) {
        err = 0x3000001;
        goto done;
    }
    goto lookup;
lookup:
    lookup_entry_8c345bb4(0x42534d53, slot, &entry, &size);
    if (entry == 0 || size == 0) {
        err = 0x9000110;
        goto done;
    }
    g_request_code_8c52e3c0 = 1;
    g_request_name_8c52e3c4[0] = *name;
    g_request_slot_8c52e3c5[0] = slot;
    ((char *)&g_request_code_8c52e3c0)[6] = page;
    g_request_index_8c52e3c7[0] = index << 3;
    err = submit_request_8c3472e4(&g_request_code_8c52e3c0);
done:
    if (err) report_error_8c346118(slot_request_8c348454, err);
    return err;
}
