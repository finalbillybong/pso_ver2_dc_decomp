/* SDK pool group 0x8c348210 (Hitachi SHC): with interrupts masked, applies a
   transfer to a handle: starts or queues it according to the system mode and,
   for blocking handles, waits until it completes. */
typedef struct Handle {
    int unknown0[2];
    int count;
    int unknown0c[6];
    int wait;
} Handle;

typedef struct System {
    char unknown0[0x64];
    int current;
    char unknown68[0x14];
    int mode;
} System;

extern System *g_system_8c3fac48;
extern int g_pending_8c52c388;
extern int check_handle_8c347458(int);
extern int get_state_8c3479cc(int, int *);
extern int check_and_set_8c34806c(int, int);
extern int start_handle_8c3474c8(int, int);
extern int queue_request_8c347d74(int, int);
extern int process_8c347e44(void);
extern int next_request_8c347c90(int *, int *);
extern int resume_handle_8c347718(int, int);
extern void set_values_8c346118(int, int);
static int step_8c348370(void);

int apply_8c348210(int handle, int arg)
{
    int error;
    Handle *h;
    int old;
    int state;
    int next;
    int next_arg;
    int done_state;
    old = _builtin_get_imask();
    _builtin_set_imask(15);
    h = (Handle *)handle;
    error = check_handle_8c347458(handle);
    if (error) goto done;
    get_state_8c3479cc(handle, &state);
    if (state == 2) {
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto fail;
fail:
        error = 0x6000001;
        goto done;
    }
    g_pending_8c52c388 = 0;
    h->count = 0;
    error = check_and_set_8c34806c(handle, 2);
    if (error) goto done;
    switch (g_system_8c3fac48->mode) {
    case 0:
        error = start_handle_8c3474c8(handle, arg);
        if (error == 0) goto done;
        break;
    case 1:
        error = queue_request_8c347d74(handle, arg);
        if (error) goto done;
        if (g_system_8c3fac48->current != 0) {
            /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
            goto busy;
busy:
            if (h->wait != -1) goto done;
            do {
                process_8c347e44();
            } while (g_system_8c3fac48->current != 0);
        } else {
            next_request_8c347c90(&next, &next_arg);
            error = resume_handle_8c347718(next, next_arg);
            if (error) goto done;
        }
        if (h->wait == -1) {
            do {
                get_state_8c3479cc(handle, &done_state);
                step_8c348370();
            } while (done_state != 1);
        }
        _builtin_set_imask(old);
        old = -1;
        break;
    }
done:
    if (old >= 0) _builtin_set_imask(old);
    if (error) set_values_8c346118((int)apply_8c348210, error);
    return error;
}

static int step_8c348370(void)
{
    return process_8c347e44();
}
