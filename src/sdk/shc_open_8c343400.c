/* SDK pool group 0x8c343400 (Hitachi SHC): with interrupts masked, opens a
   device with COUNT channels whose numbers follow as variadic arguments:
   validates them, claims free slots in the system map and resets the device
   channel state. */
typedef struct Unit {
    char *id;
} Unit;

typedef struct Device {
    char unknown0[8];
    char channels;
    char unknown9[0x20f];
    char numbers[4];
    char slots[4];
    int open;
    int unknown224;
    int enabled[4];
    int state[4];
    int count[4];
    int started;
    int unknown25c;
    int pending;
    int active;
    int step;
    int mode;
    int cursor0[4];
    int cursor[4];
    int objects[4];
} Device;

typedef struct System {
    int unknown0;
    Device *devices;
    char unknown8[0x2e];
    signed char total;
    char unknown37[2];
    signed char used;
    signed char owner[16];
} System;

extern System *g_system_8c3fac48;
extern int open_tagged_8c3489f8(Unit *, int);
extern int target_8c344694(char *, char);
extern int target_8c343bd0(char *, int);
extern int set_channels_8c34409c(char *, char, char, char, char, char, char, short, char);
extern void set_values_8c346118(int, int);

int open_8c343400(Unit *u, char count, ...)
{
    int error;
    int old;
    char numbers[4];
    char *p;
    char *ap;
    int i;
    int n;
    char idx;
    Device *d;
    System *s;
    unsigned int j;
    old = _builtin_get_imask();
    _builtin_set_imask(15);
    s = g_system_8c3fac48;
    if (s == 0) {
        error = 0xd000001;
        goto done;
    }
    if ((n = count) < 1 || n > 4) goto bad;
    if (s->total - s->used < n) {
        error = 0x5000001;
        goto done;
    }
    for (i = n; i < 4; i++) numbers[i] = -1;
    ap = ((int)((char *)&count + 1) & 3) ? (char *)&count + 4 : (char *)&count + 1;
    for (i = 0; i < count; i++) {
        numbers[i] = *(int *)((ap = ((int)(ap + 4) & 3) ? ap + 8 : ap + 4), (((int)(ap - 4) & 3) ? ap - 8 : ap - 4));
        if (numbers[i] < 0 || numbers[i] >= 0x10) {
bad:
            error = 0x3000001;
            goto done;
        }
    }
    error = open_tagged_8c3489f8(u, 0x4d545350);
    if (error) goto done;
    idx = *u->id;
    d = &g_system_8c3fac48->devices[idx];
    n = 0;
    for (i = 0; i < 0x10; i++) {
        if (g_system_8c3fac48->owner[i] < 0) {
            g_system_8c3fac48->owner[i] = idx;
            d->slots[n] = i;
            n++;
            g_system_8c3fac48->used++;
            if (n == count) break;
        }
    }
    d->channels = count;
    target_8c344694(u->id, count);
    target_8c343bd0(u->id, -1);
    d->open = 1;
    d->started = 1;
    d->pending = 0;
    d->active = 0;
    for (d->step = -1, d->mode = 0, j = 0; j < 4; j++) {
        d->cursor0[j] = -1;
        d->cursor[j] = -1;
        d->objects[j] = -1;
    }
    set_channels_8c34409c(u->id, -1, 0, 0x40, 0, 0, 0, -1, 0);
    d->pending = 0;
    d->active = 0;
    d->step = 0;
    d->mode = 0;
    for (i = 0; i < count; i++) {
        d->objects[i] = 0;
        d->cursor0[i] = 0;
        d->cursor[i] = 0;
    }
    for (i = 0; i < count; i++) {
        d->numbers[i] = numbers[i];
        d->enabled[i] = 1;
        d->state[i] = 0;
        d->count[i] = 0;
    }
done:
    _builtin_set_imask(old);
    if (error) set_values_8c346118((int)open_8c343400, error);
    return error;
}
