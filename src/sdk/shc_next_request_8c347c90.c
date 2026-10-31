/* SDK pool group 0x8c347c90 (Hitachi SHC): with interrupts masked, pops the
   oldest (handle, arg) pair from the system's pending ring. */
typedef struct Pending {
    int handle;
    int arg;
} Pending;

typedef struct System {
    char unknown0[0x68];
    Pending *ring;
    int capacity;
    int tail;
    int head;
    int count;
} System;

extern System *g_system_8c3fac48;
extern void set_values_8c346118(int, int);
int next_request_8c347c90(int *handle, int *arg)
{
    int error = 0;
    System *s;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    s = g_system_8c3fac48;
    if (s == 0) {
        error = 0xd000001;
        goto done;
    }
    *handle = s->ring[s->head].handle;
    *arg = g_system_8c3fac48->ring[g_system_8c3fac48->head].arg;
    g_system_8c3fac48->ring[g_system_8c3fac48->head].handle = 0;
    g_system_8c3fac48->ring[g_system_8c3fac48->head].arg = 0;
    g_system_8c3fac48->head++;
    if (g_system_8c3fac48->head == g_system_8c3fac48->capacity) g_system_8c3fac48->head = 0;
    g_system_8c3fac48->count--;
done:
    _builtin_set_imask(old);
    if (error) set_values_8c346118((int)next_request_8c347c90, error);
    return error;
}
