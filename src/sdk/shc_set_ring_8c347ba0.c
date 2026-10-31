/* SDK pool group 0x8c347ba0 (Hitachi SHC): with interrupts masked, installs the
   pending-request ring of the system object and fills it with the default entry. */
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
extern Pending g_default_pending_8c3fac78;
extern Pending **g_ring_slot_8c52e3b8;
extern Pending *g_ring_8c52e3b0;
extern int g_ring_capacity_8c52e3b4;
extern void *memset(void *, int, unsigned long);
extern void set_values_8c346118(int, int);
int set_ring_8c347ba0(Pending *ring, int capacity)
{
    int error = 0;
    int i;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    if (g_system_8c3fac48 == 0) {
        error = 0xd000001;
        goto done;
    }
    g_system_8c3fac48->ring = ring;
    g_system_8c3fac48->capacity = capacity;
    g_system_8c3fac48->tail = 0;
    g_system_8c3fac48->head = 0;
    g_system_8c3fac48->count = 0;
    g_ring_slot_8c52e3b8 = &g_system_8c3fac48->ring;
    g_ring_8c52e3b0 = ring;
    g_ring_capacity_8c52e3b4 = capacity;
    memset(g_system_8c3fac48->ring, 0xff, capacity * sizeof(Pending));
    for (i = 0; i < capacity; i++) g_system_8c3fac48->ring[i] = g_default_pending_8c3fac78;
done:
    _builtin_set_imask(old);
    if (error) set_values_8c346118((int)set_ring_8c347ba0, error);
    return error;
}
