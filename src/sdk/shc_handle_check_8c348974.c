/* Handle validation with error reporting (Hitachi SHC). */
typedef struct Handle {
    char unknown0[0x6c];
    int open;
} Handle;

extern void report_error_8c346118(void *where, int code);

int handle_check_8c348974(Handle *h)
{
    int err = 0;
    Handle *p = h;
    if (h == 0) err = 0x7000103;
    else if (h == (Handle *)-1 || p->open != 1) err = 0x7000102;
    if (err == 0) goto done;
    report_error_8c346118(handle_check_8c348974, err);
done:
    return err;
}
