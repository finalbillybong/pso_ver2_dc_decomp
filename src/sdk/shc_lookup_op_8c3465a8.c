/* Looks up an entry, then applies an operation to it (Hitachi SHC). */
extern int lookup_entry_8c345bb4(int key, char kind, void **entry, int *size);
extern int apply_8c348210(int target, void *entry);
extern void report_error_8c346118(void *where, int code);

int lookup_apply_8c3465a8(int target, int key, char kind)
{
    void *entry;
    int size;
    int err = lookup_entry_8c345bb4(key, kind, &entry, &size);
    if (err != 0) goto done;
    if (entry == 0 || size <= 0) {
        err = 0x9000110;
        goto done;
    }
    err = apply_8c348210(target, entry);
    if (err) {
    }
done:
    if (err == 0) goto out;
    report_error_8c346118(lookup_apply_8c3465a8, err);
out:
    return err;
}
