/* SDK pool group 0x8c346f40 (Hitachi SHC): with interrupts masked, pushes up to
   the slot limit of ready 32-byte slots from the system's slot ring and then
   flushes the buffer. */
typedef struct Slot {
    int state;
    char unknown4[28];
} Slot;

typedef struct Ring {
    int unknown0[2];
    Slot *slots;
    int count;
    int limit;
    int unknown14;
    int index;
    int busy;
} Ring;

typedef struct System {
    int unknown0[2];
    Ring ring;
    char unknown28[0x64];
    int port;
} System;

extern System *g_system_8c3fac48;
extern int read_byte_8c345e50(int, unsigned char *);
extern int queue_push_8c34720c(Slot *);
extern int flush_8c347050(void);
extern void set_values_8c346118(int, int);
int flush_slots_8c346f40(void)
{
    int error = 0;
    unsigned char status;
    int old;
    System *s;
    Ring *r;
    int n;
    int limit;
    int pushed;
    int i;
    Slot *slot;
    old = _builtin_get_imask();
    _builtin_set_imask(15);
    s = g_system_8c3fac48;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto check;
check:
    if (s == 0) {
        error = 0xd000001;
        goto done;
    }
    r = &s->ring;
    n = r->count;
    limit = r->limit;
    if (n == 0) goto done;
    read_byte_8c345e50(s->port, &status);
    if (status != 0 || r->busy == 1) {
        error = 0xb000003;
        goto done;
    }
    r->busy = 1;
    pushed = 0;
    i = 0;
    if (i < n) do {
        slot = &r->slots[r->index++];
        if (r->index == n) r->index = 0;
        if (slot->state == 1) {
            error = queue_push_8c34720c(slot);
            if (error) goto done;
            pushed++;
            if (pushed == 32 || pushed == limit) break;
        }
        i++;
    } while (i < n);
    error = flush_8c347050();
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    if (error) goto done;
done:
    _builtin_set_imask(old);
    if (error) set_values_8c346118((int)flush_slots_8c346f40, error);
    return error;
}
