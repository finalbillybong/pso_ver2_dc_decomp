/* SDK pool group 0x8c347d74 (Hitachi SHC): with interrupts masked, validates a
   handle and appends (handle, arg) to the system's pending ring. */
typedef struct Pending {
    int handle;
    int arg;
} Pending;

typedef struct System {
    char unknown0[0x68];
    Pending *ring;
    int capacity;
    int tail;
    int unknown74;
    int count;
} System;

extern System *g_system_8c3fac48;
extern int check_handle_8c347458(int);
extern void set_values_8c346118(int, int);
int queue_request_8c347d74(int handle, int arg)
{
    int error;
    System *s;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    error = check_handle_8c347458(handle);
    if (error) goto done;
    s = g_system_8c3fac48;
    if (s->capacity <= s->count) {
        error = 0x6000101;
        goto done;
    }
    s->ring[s->tail].handle = handle;
    g_system_8c3fac48->ring[g_system_8c3fac48->tail].arg = arg;
    g_system_8c3fac48->tail++;
    if (g_system_8c3fac48->tail == g_system_8c3fac48->capacity) g_system_8c3fac48->tail = 0;
    g_system_8c3fac48->count++;
done:
    _builtin_set_imask(old);
    if (error) set_values_8c346118((int)queue_request_8c347d74, error);
    return error;
}
