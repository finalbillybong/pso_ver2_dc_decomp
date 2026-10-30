/* SDK pool group 0x8c343d64-0x8c34409c (Hitachi SHC): steps the ramped
   voice parameters of every active sequencer track (16 tracks, up to four
   voices each), clamping at the targets and notifying on high-byte
   changes; 0x0d000001 when the subsystem is not ready. */
typedef struct Voice {
    int a;
    int b;
    int unknown08[4];
    int c;
    int unknown1c;
} Voice;

typedef struct Seq {
    char unknown0[8];
    char voices;
    char unknown9[0x83];
    Voice target[4];
    Voice value[4];
    Voice step[4];
    char unknown20c[0x94];
} Seq;

typedef struct Track {
    char unknown0[0x6c];
    int active;
} Track;

typedef struct Bank {
    char unknown0[0x2060];
    Track trk[16];
} Bank;

typedef struct Dev {
    Bank *bank;
    Seq *seq;
} Dev;

extern Dev *g_dev_8c3fac48;
extern int track_prepare_8c3431c8(Track *);
extern void voice_a_8c346c60(Track *, int, int);
extern void voice_b_8c346acc(Track *, int, int);
extern void voice_c_8c346b8c(Track *, int, int);
extern void register_8c346118(int (*owner)(void), int status);

int seq_ramp_8c343d64(void)
{
    int status = 0;
    unsigned int i;
    int j;
    Track *t;
    Seq *s;
    int old;

    if (!g_dev_8c3fac48) {
        status = 0xd000001;
        goto done;
    }
    for (i = 0; i < 16; i++) {
        if (g_dev_8c3fac48->bank->trk[i].active == 1) {
        t = &g_dev_8c3fac48->bank->trk[i];
        s = &g_dev_8c3fac48->seq[i];
        status = track_prepare_8c3431c8(t);
        if (status) goto done;
        for (j = 0; j < s->voices; j++) {
            if (s->step[j].a) {
                old = s->value[j].a;
                s->value[j].a += s->step[j].a;
                if (s->step[j].a < 0) {
                    if (s->value[j].a <= s->target[j].a) {
                        s->step[j].a = 0;
                        s->value[j].a = s->target[j].a;
                    }
                }
                if (s->step[j].a > 0 && s->target[j].a <= s->value[j].a) {
                    s->step[j].a = 0;
                    s->value[j].a = s->target[j].a;
                }
                if ((old & ~0xff) != (s->value[j].a & ~0xff))
                    voice_a_8c346c60(t, j, s->value[j].a / 0x100);
            }
            if (s->step[j].b) {
                old = s->value[j].b;
                s->value[j].b += s->step[j].b;
                if (s->step[j].b < 0 && s->value[j].b <= s->target[j].b) {
                    s->step[j].b = 0;
                    s->value[j].b = s->target[j].b;
                }
                if (s->step[j].b > 0 && s->target[j].b <= s->value[j].b) {
                    s->step[j].b = 0;
                    s->value[j].b = s->target[j].b;
                }
                if ((old & ~0xff) != (s->value[j].b & ~0xff))
                    voice_b_8c346acc(t, j, s->value[j].b / 0x100);
            }
            if (s->step[j].c) {
                old = s->value[j].c;
                s->value[j].c += s->step[j].c;
                if (s->step[j].c < 0 && s->value[j].c <= s->target[j].c) {
                    s->step[j].c = 0;
                    s->value[j].c = s->target[j].c;
                }
                if (s->step[j].c > 0 && s->target[j].c <= s->value[j].c) {
                    s->step[j].c = 0;
                    s->value[j].c = s->target[j].c;
                }
                if ((old & ~0xff) != (s->value[j].c & ~0xff))
                    voice_c_8c346b8c(t, j, s->value[j].c / 0x100);
            }
        }
        }
    }
done:
    if (status) register_8c346118(seq_ramp_8c343d64, status);
    return status;
}
