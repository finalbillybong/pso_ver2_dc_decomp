/* SDK pool group 0x8c3474c8 (Hitachi SHC): with interrupts masked, validates a
   handle, makes it the system's current handle and starts its transfer. */
typedef struct Handle {
    int unknown0[2];
    int status;
    int unknownc[4];
    int buffer;
    int length;
} Handle;

typedef struct System {
    char unknown0[0x58];
    int starts;
    int unknown5c[2];
    Handle *current;
} System;

extern System *g_system_8c3fac48;
extern int check_handle_8c347458(Handle *);
extern void done_8c3478b8(Handle *);
extern int start_transfer_8c348d5c(int, int, int, void (*)(Handle *), Handle *);
extern void set_values_8c346118(int, int);
int start_handle_8c3474c8(Handle *handle, int arg)
{
    int error;
    Handle *h;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    error = check_handle_8c347458(handle);
    if (0) { handle++; handle++; handle++; }
    if (error) goto done;
    h = handle;
    h->status = 0;
    g_system_8c3fac48->current = h;
    g_system_8c3fac48->starts++;
    g_system_8c3fac48->current = h;
    error = start_transfer_8c348d5c(h->buffer, arg, h->length, done_8c3478b8, h);
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    if (error) goto done;
done:
    if (error) set_values_8c346118((int)start_handle_8c3474c8, error);
    _builtin_set_imask(old);
    return error;
}