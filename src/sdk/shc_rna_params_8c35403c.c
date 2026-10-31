/* CRI MWRNA parameter accessors 0x8c35403c-0x8c354594 (Hitachi SHC). */
typedef struct Snd Snd;
typedef struct SndVtbl {
    char unknown0[0x24];
    void (*set_freq)(Snd *s, int v);
    int (*get_freq)(Snd *s);
    void (*set_nch)(Snd *s, int n);
    int (*get_nch)(Snd *s);
    void (*set_vol)(Snd *s, int v);
    int (*get_vol)(Snd *s);
    void (*set_pan)(Snd *s, int ch, int v);
    int (*get_pan)(Snd *s, int ch);
    void (*set_send)(Snd *s, int kind, int a, int b);
    void (*get_send)(Snd *s, int kind, int *a, int *b);
} SndVtbl;
struct Snd {
    SndVtbl *vtbl;
};

typedef struct Rna {
    char unknown0[8];
    int nch;
    int freq;
    char unknown10[0x18];
    int bytes;
    char unknown2c[0xc];
    Snd *snd;
    char unknown3c[0x24];
    int vol;
    int pan[2];
    int fx_ch;
    int fx_level;
    int send_a;
    int send_b;
    int send3_a;
    int send3_b;
    int send2;
} Rna;

typedef struct Flag {
    char unknown0[4];
    unsigned char on;
} Flag;

extern char str_8c3f4df8[];
extern char str_8c3f4ec8[];
extern void print_8c3545ea(const char *format, ...);
extern void set_print_hook_8c3545cc(void (*hook)(int argument, char *text), int argument);

void rna_set_nch_8c35403c(Rna *rna, int nch)
{
    int n;
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        return;
    }
    n = rna->bytes * rna->nch / 8;
    rna->bytes = n / nch * 8;
    rna->snd->vtbl->set_nch(rna->snd, nch);
    rna->nch = nch;
}

void rna_set_freq_8c354094(Rna *rna, int freq)
{
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        return;
    }
    rna->snd->vtbl->set_freq(rna->snd, freq);
    rna->freq = freq;
}

void rna_set_vol_8c3540ce(Rna *rna, int vol)
{
    int v;
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        return;
    }
    if (vol >= 0) v = 0;
    else if (vol <= -999) v = -999;
    else v = vol;
    rna->snd->vtbl->set_vol(rna->snd, v);
    rna->vol = v;
}

void rna_set_pan_8c354118(Rna *rna, int ch, int pan)
{
    int v;
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        return;
    }
    if (pan < -15) v = -15;
    else if (pan > 15) v = 15;
    else v = pan;
    rna->snd->vtbl->set_pan(rna->snd, ch, v);
    rna->pan[ch] = v;
}

void rna_set_fx_8c35417c(Rna *rna, int ch, int level)
{
    int v;
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        return;
    }
    if (ch < 0 || ch > 16) {
        print_8c3545ea(str_8c3f4ec8);
        return;
    }
    if (level < -45) v = -45;
    else if (level > 0) v = 0;
    else v = level;
    rna->snd->vtbl->set_send(rna->snd, 0, ch, v);
    rna->fx_ch = ch;
    rna->fx_level = v;
}

void rna_set_send1_8c3541e8(Rna *rna, int a, int b)
{
    int out0, out1;
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        return;
    }
    rna->snd->vtbl->set_send(rna->snd, 1, a, b);
    rna->snd->vtbl->get_send(rna->snd, 1, &out0, &out1);
    rna->send_a = out0;
    rna->send_b = out1;
}

void rna_set_send2_8c354248(Rna *rna, int level)
{
    int v;
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        return;
    }
    if (level < -45) v = -45;
    else if (level > 0) v = 0;
    else v = level;
    rna->snd->vtbl->set_send(rna->snd, 2, v, 0);
    rna->send2 = v;
}

int rna_get_nch_8c3542a4(Rna *rna)
{
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        return -1;
    }
    return rna->nch;
}

int rna_get_freq_8c3542c2(Rna *rna)
{
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        return -1;
    }
    return rna->freq;
}

int rna_get_vol_8c3542e0(Rna *rna)
{
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        return -1;
    }
    return rna->vol;
}

int rna_get_pan_8c354300(Rna *rna, int ch)
{
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        return -1;
    }
    return rna->pan[ch];
}

void rna_get_fx_8c354326(Rna *rna, int *ch, int *level)
{
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        *ch = -1;
        *level = -1;
        return;
    }
    *ch = rna->fx_ch;
    *level = rna->fx_level;
}

void rna_get_send1_8c354366(Rna *rna, int *a, int *b)
{
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        *a = -1;
        *b = -1;
        return;
    }
    *a = rna->send_a;
    *b = rna->send_b;
}

int rna_get_send2_8c3543a6(Rna *rna)
{
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        return -1;
    }
    return rna->send2;
}

void rna_set_print_hook_8c3543d2(void (*hook)(int argument, char *text), int argument)
{
    set_print_hook_8c3545cc(hook, argument);
}

int flag_get_8c3543d8(Flag *f)
{
    return f->on;
}

void flag_clear_8c3543de(Flag *f)
{
    f->on = 0;
}

void rna_set_send3_8c3543e4(Rna *rna, int a, int b)
{
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        return;
    }
    rna->send3_a = a;
    rna->send3_b = b;
    rna->snd->vtbl->set_send(rna->snd, 3, a, b);
}

void rna_get_send3_8c354434(Rna *rna, int *a, int *b)
{
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        return;
    }
    *a = rna->send3_a;
    *b = rna->send3_b;
}

void rna_sync_8c35445c(Rna *rna, int level, int *count)
{
    int out24;
    int nch, freq, vol;
    int pan[2];
    int fx_ch, fx_level, a3, b3;
    if (!rna) {
        print_8c3545ea(str_8c3f4df8);
        return;
    }
    rna->snd->vtbl->set_send(rna->snd, 4, level, 0);
    rna->snd->vtbl->get_send(rna->snd, 4, count, &out24);
    if (*count > 0) {
        nch = rna->snd->vtbl->get_nch(rna->snd);
        freq = rna->snd->vtbl->get_freq(rna->snd);
        vol = rna->snd->vtbl->get_vol(rna->snd);
        pan[0] = rna->snd->vtbl->get_pan(rna->snd, 0);
        pan[1] = rna->snd->vtbl->get_pan(rna->snd, 1);
        rna->snd->vtbl->get_send(rna->snd, 0, &fx_ch, &fx_level);
        rna->snd->vtbl->get_send(rna->snd, 3, &a3, &b3);
        rna_set_nch_8c35403c(rna, nch);
        rna_set_freq_8c354094(rna, freq);
        rna->vol = vol;
        rna->pan[0] = pan[0];
        rna->pan[1] = pan[1];
        rna->fx_ch = fx_ch;
        rna->fx_level = fx_level;
        rna->send3_a = a3;
        rna->send3_b = b3;
    }
}
