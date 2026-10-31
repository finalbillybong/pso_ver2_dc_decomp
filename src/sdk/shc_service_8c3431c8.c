/* SDK pool group 0x8c3431c8 (Hitachi SHC): with interrupts masked, services a
   device: when its first object has advanced past the cursor it re-queues every
   ready channel, otherwise it resets the cursors or stops the device. */
typedef struct Object {
    int unknown0[3];
    int base;
    int position;
} Object;

typedef struct Device {
    char unknown0[9];
    char channels;
    char unknowna[0x24e];
    int start;
    int length;
    int pending;
    int active;
    int step;
    int mode;
    char unknown270[0x10];
    int cursor[4];
    Object *objects[4];
} Device;

typedef struct System {
    int unknown0;
    Device *devices;
} System;

extern System *g_system_8c3fac48;
extern int check_handle_8c347458(Object *);
extern int channel_ready_8c34308c(char *, char, int, int *);
extern int get_state_8c3479cc(Object *, int *);
extern int configure_8c347fb4(Object *, int, int, int, int);
extern int requeue_8c3449fc(char *, int, Object *);
extern int target_8c344890(char *);
extern int create_8c343938(char *, int, int);
extern void set_values_8c346118(int, int);

int service_8c3431c8(char *id)
{
    int error = 0;
    int old;
    Device *d;
    char idx;
    int i;
    int ready;
    int state;
    int position;
    int start;
    old = _builtin_get_imask();
    _builtin_set_imask(15);
    if (g_system_8c3fac48 == 0) {
        error = 0xd000001;
        goto done;
    }
    if (id == 0) {
        error = 0x7000103;
        goto done;
    }
    idx = *id;
    d = &g_system_8c3fac48->devices[idx];
    if (d->active != 1) goto done;
    if (check_handle_8c347458(d->objects[0]) != 0) goto done;
    position = d->objects[0]->position;
    &position;
    if (position <= d->cursor[0]) {
        if (d->mode == 1) {
            for (i = 0; i < d->channels; i++) d->cursor[i] = 0;
        } else {
            /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
            goto stop;
stop:
            target_8c344890(id);
        }
        goto done;
    }
    for (i = 0; i < d->channels; i++) {
        Object *o = d->objects[i];
        channel_ready_8c34308c(id, i, d->step, &ready);
        if (ready == 1) {
            /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
            goto ready;
ready:
            get_state_8c3479cc(o, &state);
            if (state == 2) {
            } else {
                start = o->base;
                &start;
                configure_8c347fb4(o, start + d->cursor[i], d->step, -1, 0);
                requeue_8c3449fc(id, i, o);
                d->cursor[i] += d->step;
            }
        }
    }
    if (d->pending == 1) {
        error = create_8c343938(id, d->start, d->length);
        if (error == 0) d->pending = 0;
    }
done:
    _builtin_set_imask(old);
    if (error) set_values_8c346118((int)service_8c3431c8, error);
    return error;
}
