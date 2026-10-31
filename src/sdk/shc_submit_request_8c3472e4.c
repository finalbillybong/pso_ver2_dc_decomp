/* SDK pool group 0x8c3472e4 (Hitachi SHC): with interrupts masked, appends a
   20-byte request to the system's 0x100-entry ring with a timestamp. */
typedef struct Request {
    int words[5];
} Request;

typedef struct Slot {
    int used;
    int time;
    Request request;
    int unknown1c;
} Slot;

typedef struct Ring {
    int unknown0[2];
    Slot *slots;
    int capacity;
    int count;
    int head;
} Ring;

typedef struct System {
    int unknown0[2];
    Ring ring;
} System;

extern System *g_system_8c3fac48;
extern int tmu0_count_8c36e6f6(void);
extern void set_values_8c346118(int, int);
int submit_request_8c3472e4(Request *request)
{
    int zero = 0;
    int error = zero;
    System *s;
    Ring *r;
    Slot *slot;
    int cap;
    int n;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    s = g_system_8c3fac48;
    if (s == 0) {
        error = 0xd000001;
        goto done;
    }
    if (0) { s++; }
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto ring;
ring:
    r = &s->ring;
    cap = r->capacity;
    n = r->count;
    if (n == 0x100) {
        error = 0xa000001;
        goto done;
    }
    slot = &r->slots[r->head++];
    if (r->head == cap) r->head = zero;
    slot->used = 1;
    slot->request = *request;
    slot->time = tmu0_count_8c36e6f6();
    r->count++;
done:
    _builtin_set_imask(old);
    if (error) set_values_8c346118((int)submit_request_8c3472e4, error);
    return error;
}
