/* Sets channel pan targets with optional ramp time (Hitachi SHC). */
typedef struct Ramp {
    int unknown0[6];
    int value;
    int unknown1C;
} Ramp;

typedef struct Entry {
    char unknown0[9];
    char count;
    char unknownA[0x8c - 0xa];
    Ramp target[4];
    Ramp current[4];
    Ramp step[4];
    char unknown20C[0x2a0 - 0x20c];
} Entry;

typedef struct System {
    int unknown0;
    Entry *entries;
} System;

extern System *g_system_8c3fac48;
extern void report_error_8c346118(void *where, int code);
extern void ramp_step_8c346468(int from, int to, int time, int *step);
extern int apply_pan_8c346b8c(char *id, int slot, int volume);

int set_pan_8c344510(char *id, char slot, short volume, int time)
{
    int err = 0;
    Entry *p;
    int i;
    int idx;
    int v;
    if (g_system_8c3fac48 == 0) {
        err = 0xd000001;
        goto done;
    }
    if (id == 0) {
        err = 0x7000103;
        goto done;
    }
    if (time < 0) goto bad;
    idx = *id;
    p = &g_system_8c3fac48->entries[idx];
    if (slot == -1) goto ok;
    if (slot >= 0 && p->count > slot) goto ok;
bad:
    err = 0x3000001;
    goto done;
ok:
    v = volume << 8;
    i = 0;
    do {
        if (slot == i || slot == -1) {
            p->target[i].value = v;
            if (time == 0) {
                p->current[i].value = p->target[i].value;
                p->step[i].value = 0;
            } else {
                ramp_step_8c346468(p->current[i].value, p->target[i].value, time, &p->step[i].value);
                if (p->step[i].value != 0) p->current[i].value += p->step[i].value;
                else p->current[i].value = p->target[i].value;
            }
            err = apply_pan_8c346b8c(id, i, p->current[i].value / 256);
            if (err) goto done;
        }
        i++;
    } while (i < 4);
done:
    if (err) report_error_8c346118(set_pan_8c344510, err);
    return err;
}
