/* SDK pool group 0x8c34308c-0x8c3431c8 (Hitachi SHC): reports whether a
   channel's level has reached a target, bounded by the record's mode. */
typedef struct Record {
    char unknown0[0x218];
    char slot[8];
    int mode;
    char unknown224[4];
    int looped[4];
    int offset[4];
    char unknown248[0x2a0 - 0x248];
} Record;

typedef struct Context {
    char unknown0[4];
    Record *records;
} Context;

extern Context *g_context_8c3fac48;
extern void report_error_8c346118(int, int);
extern int lookup_8c345bb4(int, int, int *, int *);
extern int channel_level_8c349324(char *, char, int *);

int channel_ready_8c34308c(char *handle, char channel, int target, int *ready)
{
    int error = 0;
    Record *r;
    int limit;
    int size;
    int level;
    int unused;
    int t;
    int v;
    if (!g_context_8c3fac48) {
        error = 0xd000001;
        goto done;
    }
    if (handle) goto check;
    error = 0x7000103;
    goto done;
check:
    if (ready) goto get;
    error = 0x7000203;
    goto done;
get:
    *ready = 0;
    {
        char idx = *handle;
        r = &g_context_8c3fac48->records[idx];
    }
    lookup_8c345bb4(0x52535053, r->slot[channel], &unused, &size);
    switch (r->mode) {
    case 2:
        limit = 0x7000;
        break;
    case 0:
        limit = 0xf000;
        break;
    case 1:
        limit = 0x1f000;
        break;
    }
    if (limit < size) size = limit;
    if (r->looped[channel] == 1) {
        if (size < target) {
            error = 0x3000001;
            goto done;
        }
        v = size;
    } else {
        channel_level_8c349324(handle, channel, &level);
        t = r->offset[channel];
        v = (t <= level ? level : size) - t;
    }
    goto set;
set:
    *ready = target <= v ? 1 : 0;
done:
    if (error) report_error_8c346118((int)channel_ready_8c34308c, error);
    return error;
}
