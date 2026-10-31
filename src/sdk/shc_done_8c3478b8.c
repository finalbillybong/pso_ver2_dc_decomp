/* SDK pool group 0x8c3478b8 (Hitachi SHC): transfer-completion callback; with
   interrupts masked, timestamps and dispatches the handle, then starts the next
   queued transfer. */
typedef struct Handle {
    int unknown0;
    int done;
    int unknown8[10];
    int time;
} Handle;

typedef struct System {
    char unknown0[0x5c];
    int completed;
    int unknown60;
    Handle *current;
    char unknown68[0x14];
    int mode;
} System;

extern System *g_system_8c3fac48;
extern int tmu0_count_8c36e6f6(void);
extern int tmu0_to_us_8c36e706(int);
extern int dispatch_8c347980(Handle *);
extern int get_context_value_8c347b60(int *);
extern int next_request_8c347c90(int *, int *);
extern int start_handle_8c3474c8(int, int);
extern int resume_handle_8c347718(int, int);
void done_8c3478b8(Handle *object)
{
    Handle *h;
    int handle;
    int arg;
    int pending;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto start;
start:
    h = object;
    if (h->done != 1) {
        h->time = tmu0_to_us_8c36e706(tmu0_count_8c36e6f6());
        h->done = 1;
        dispatch_8c347980(h);
        g_system_8c3fac48->current = 0;
        g_system_8c3fac48->completed++;
        get_context_value_8c347b60(&pending);
        if (pending > 0) {
            next_request_8c347c90(&handle, &arg);
            switch (g_system_8c3fac48->mode) {
            case 0:
                start_handle_8c3474c8(handle, arg);
                break;
            case 1:
                resume_handle_8c347718(handle, arg);
                break;
            }
        }
    }
    _builtin_set_imask(old);
}
