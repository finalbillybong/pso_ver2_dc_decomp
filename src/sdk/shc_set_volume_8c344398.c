/* Sets per-channel levels of a sound object, optionally ramped (Hitachi SHC). */
typedef struct Level {
    int unknown0;
    int value;
    char unknown8[0x18];
} Level;

typedef struct Voice {
    char unknown0[9];
    char channels;
    char unknowna[0x82];
    Level target[4];
    Level current[4];
    Level step[4];
    char unknown20c[0x94];
} Voice;

typedef struct System {
    char unknown0[4];
    Voice *voices;
} System;

typedef struct Sound {
    signed char voice;
} Sound;

extern System *g_system_8c3fac48;
extern void ramp_8c346468(int from, int to, int time, int *step);
extern int apply_level_8c346acc(Sound *o, int channel, int level);
extern void report_error_8c346118(void *where, int code);

int set_volume_8c344398(Sound *o, char channel, char level, int time)
{
    int zero = 0;
    int err = zero;
    System *s = g_system_8c3fac48;
    Voice *v;
    int c;
    int i;
    int off;
    volatile int value;

    if (s == 0) {
        err = 0xd000001;
        goto done;
    }
    if (o == 0) {
        err = 0x7000103;
        goto done;
    }
    { int n = o->voice; v = &s->voices[n]; }
    c = channel;
    if (channel != -1) {
        if (channel < 0 || v->channels <= channel) goto bad;
    }
    value = level << 8;
    i = zero;
    do {
        if (c == i || c == -1) {
            v->target[i].value = value;
            if (time == 0) {
                v->current[i].value = v->target[i].value;
                v->step[i].value = zero;
            } else {
                if (time < 0) {
bad:
                    err = 0x3000001;
                    goto done;
                }
                ramp_8c346468(v->current[i].value, v->target[i].value, time, &v->step[i].value);
                if (v->step[i].value != 0) v->current[i].value += v->step[i].value;
                else v->current[i].value = v->target[i].value;
            }
            err = apply_level_8c346acc(o, i, v->current[i].value / 256);
            if (err) goto done;
        }
        i++;
    } while (i < 4);
done:
    if (err) report_error_8c346118(set_volume_8c344398, err);
    return err;
}
