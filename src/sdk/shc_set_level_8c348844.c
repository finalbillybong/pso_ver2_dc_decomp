/* SDK pool group 0x8c348844-0x8c3488f8 (Hitachi SHC): sets a handle's target
   level, optionally ramping over a duration, then applies the current level. */
typedef struct Handle {
    char unknown0[4];
    int target;
    char unknown8[0x24 - 8];
    int current;
    char unknown28[0x44 - 0x28];
    int step;
} Handle;

extern void *g_context_8c3fac48;
extern void report_error_8c346118(int, int);
extern void compute_step_8c346468(int, int, int, int *);
extern int apply_level_8c346a54(Handle *, int);

int set_level_8c348844(Handle *handle, char level, int duration)
{
    int error;
    Handle *h = handle;
    if (!g_context_8c3fac48) {
        error = 0xd000001;
        goto done;
    }
    if (handle) goto set;
    error = 0x7000103;
    goto done;
set:
    h->target = level << 8;
    if (duration == 0) {
        h->current = h->target;
        h->step = 0;
    } else {
        if (duration < 0) {
            error = 0x3000001;
            goto done;
        }
        goto ramp;
ramp:
        compute_step_8c346468(h->current, h->target, duration, &h->step);
        if (h->step) h->current += h->step;
        else h->current = h->target;
    }
    error = apply_level_8c346a54(handle, h->current / 256);
    if (error) goto done;
done:
    if (error) report_error_8c346118((int)set_level_8c348844, error);
    return error;
}
