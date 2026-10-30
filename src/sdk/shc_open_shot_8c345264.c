/* Opens one more "SHOT" slot when the count is below the limit (Hitachi SHC). */
typedef struct System {
    char unknown0[0x35];
    char limit;
    char unknown36[2];
    char count;
} System;

extern System *g_system_8c3fac48;
extern int open_tagged_8c3489f8(char *unit, int tag);
extern void report_error_8c346118(void *where, int code);

int open_shot_8c345264(char *unit)
{
    int err;
    if (g_system_8c3fac48 == 0) {
        err = 0xd000001;
        goto done;
    }
    if (unit != 0) goto ok;
    err = 0x7000103;
    goto done;
ok:
    if (g_system_8c3fac48->count == g_system_8c3fac48->limit) {
        err = 0x5000001;
        goto done;
    }
    err = open_tagged_8c3489f8(unit, 0x544f4853);
    if (err) goto done;
    g_system_8c3fac48->count++;
done:
    if (err) report_error_8c346118(open_shot_8c345264, err);
    return err;
}
