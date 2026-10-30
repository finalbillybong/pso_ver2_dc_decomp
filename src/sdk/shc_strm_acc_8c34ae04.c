typedef struct {
    int v00;
    int state;
    int dev;
    char b0c;
    char bits;
    char chans;
    char bf;
    int v10;
    int v14;
    int v18;
    short h1c;
    short h1e;
    int v20;
    short h24;
    short h26;
    int v28;
    int v2c;
    int v30;
    int v34;
    int v38;
    int v3c;
    char pad40[0x50 - 0x40];
    int rate;
    int bps;
    char pad58[0x84 - 0x58];
    int v84;
    int v88;
    int v8c;
    int v90;
    int v94;
    int v98;
    int v9c;
    int va0;
    int va4;
    short ha8;
    short haa;
} Strm;

void strm_set88_8c34ae04(Strm *s, int a, int b)
{
    s->v88 = a;
    s->v8c = b;
}

void strm_set90_8c34ae0e(Strm *s, int a, int b)
{
    s->v90 = a;
    s->v94 = b;
}

int strm_v3c_8c34ae18(Strm *s)
{
    return s->v3c;
}

short strm_ha8_8c34ae1c(Strm *s)
{
    return s->ha8;
}

int strm_v14_8c34ae22(Strm *s)
{
    return s->v14;
}

char strm_chans_8c34ae26(Strm *s)
{
    return s->chans;
}

char strm_bits_8c34ae2a(Strm *s)
{
    return s->bits;
}

int strm_align_8c34ae2e(Strm *s)
{
    if (s->ha8 == 0) {
        return 16;
    }
    if (s->ha8 == 2) {
        if (s->haa == 2) {
            return 4;
        }
        if (s->haa == 1) {
            return 8;
        }
        return 16;
    }
    if (s->ha8 == 1 && s->haa == 2) {
        return 4;
    }
    return 16;
}

int strm_v10_8c34ae6a(Strm *s)
{
    return s->v10;
}

char strm_bf_8c34ae6e(Strm *s)
{
    return s->bf;
}

int strm_v18_8c34ae72(Strm *s)
{
    return s->v18;
}

short strm_h1c_8c34ae76(Strm *s)
{
    return s->h1c;
}

int strm_v20_8c34ae7a(Strm *s)
{
    return s->v20;
}

short strm_h24_8c34ae7e(Strm *s)
{
    return s->h24;
}

int strm_v28_8c34ae84(Strm *s)
{
    return s->v28;
}

int strm_v2c_8c34ae88(Strm *s)
{
    return s->v2c;
}

int strm_v30_8c34ae8c(Strm *s)
{
    return s->v30;
}

int strm_v34_8c34ae90(Strm *s)
{
    return s->v34;
}

int strm_state_8c34ae94(Strm *s)
{
    return s->state;
}

void strm_set_rate_8c34ae98(Strm *s, int rate, int div)
{
    if (s->ha8 == 0) {
        s->rate = rate;
        s->bps = div / s->bf;
    } else {
        s->rate = rate;
        s->bps = div / (s->bits / 8 * s->chans);
    }
    s->v84 = 0;
    s->va0 = 0;
    s->va4 = 0;
}

void strm_arm_8c34aeea(Strm *s)
{
    if (s->state == 0) {
        s->state = 1;
    }
}

extern void func_8c351cec(int);
extern void func_8c351d02(int);

void strm_stop_8c34aef8(Strm *s)
{
    func_8c351cec(s->dev);
    s->state = 0;
}

void strm_close_8c34af12(Strm *s)
{
    if (s->state == 3) {
        func_8c351d02(s->dev);
        s->v9c = 0;
        s->state = 0;
    }
}
