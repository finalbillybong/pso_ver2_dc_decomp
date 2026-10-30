/* Marks a validated handle closed, reporting errors (Hitachi SHC). */
typedef struct Handle {
    char unknown0[0x6c];
    int open;
} Handle;

extern int handle_check_8c348974(Handle *h);
extern void report_error_8c346118(void *where, int code);

int handle_close_8c3489bc(Handle *h)
{
    int err = handle_check_8c348974(h);
    if (err != 0) goto done;
    h->open = 0;
done:
    if (err) report_error_8c346118(handle_close_8c3489bc, err);
    return err;
}
