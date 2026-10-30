/* SDK pool group 0x8c3457b0-0x8c345864 (Hitachi SHC): sets a channel level
   (8.8 fixed point), optionally ramped by mode, and applies it. */
typedef struct Channel {
    char unknown0[0x1c];
    int target;
    char unknown20[0x3c - 0x20];
    int level;
    char unknown40[0x5c - 0x40];
    int step;
} Channel;

extern void *g_context_8c3fac48;
extern void report_error_8c346118(int, int);
extern void compute_step_8c346468(int, int, int, int *);
extern int apply_level_8c346d98(Channel *, int);

int set_level_8c3457b0(Channel *channel, short level, int mode)
{
    int error;
    Channel *p = channel;
    if (!g_context_8c3fac48) {
        error = 0xd000001;
        goto done;
    }
    if (!channel) {
        error = 0x7000103;
        goto done;
    }
    p->target = level << 8;
    if (!mode) {
        goto direct;
direct:
        p->level = p->target;
        p->step = 0;
    } else {
        if (mode >= 0) goto ramp;
        error = 0x3000001;
        goto done;
ramp:
        compute_step_8c346468(p->level, p->target, mode, &p->step);
        if (p->step) p->level += p->step;
        else p->level = p->target;
    }
    error = apply_level_8c346d98(channel, p->level / 256);
    if (error) goto done;
done:
    if (error) report_error_8c346118((int)set_level_8c3457b0, error);
    return error;
}
