typedef struct Slot {
    int id;
    char fname[40];
    int stat;
    int rdsct;
} Slot;

typedef struct Lsc {
    char used;
    char stat;
    char busy;
    char pause;
    char pad04[0x10];
    int flow_limit;
    int flow_max;
    int pad1c;
    int head;
    int count;
    int sj;
    char pad2c[0xc];
    Slot slot[16];
} Lsc;

typedef void (*LscCb)(int a, int b);

extern Lsc g_channels_8c5366e0[];
extern LscCb g_lsc_cb_8c3fb468;
extern int g_lsc_cb_a_8c3fb46c;
extern int g_lsc_cb_b_8c3fb470;
extern char str_8c3f4994[];
extern char str_8c3f49dc[];
extern char str_8c3f49fc[];
extern char str_8c3f4a20[];
extern void lock_8c3523cc(int *state);
extern void unlock_8c3523e4(int *state);
extern void print_8c352414(char *fmt, ...);
extern void lsc_exec_8c352866(Lsc *l);

void lsc_exec_all_8c3520d4(void)
{
    int state;
    int i;
    lock_8c3523cc(&state);
    for (i = 0; i < 8; i++) {
        if (g_channels_8c5366e0[i].used == 1)
            lsc_exec_8c352866(&g_channels_8c5366e0[i]);
    }
    unlock_8c3523e4(&state);
}

int lsc_get_stat_8c352120(Lsc *l)
{
    if (l == 0) {
        print_8c352414(str_8c3f4994);
        return -1;
    }
    return l->stat;
}

int lsc_get_num_stm_8c35213e(Lsc *l)
{
    if (l == 0) {
        print_8c352414(str_8c3f4994);
        return -1;
    }
    return l->count;
}

int lsc_get_stm_id_8c35215c(Lsc *l, int no)
{
    if (l == 0) {
        print_8c352414(str_8c3f4994);
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto LG4;
LG4:
        return -1;
    }
    if (no < 0 || no >= l->count) {
        print_8c352414(str_8c3f49dc, no);
        return -1;
    }
    {
        int i = (l->head + no) % 16;
        return l->slot[i].id;
    }
}

char *lsc_get_stm_fname_8c3521ba(Lsc *l, int id)
{
    int i;
    if (l == 0) {
        print_8c352414(str_8c3f4994);
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto LG5;
LG5:
        return 0;
    }
    i = 0;
    if (i < 16) {
        do {
            if (l->slot[i].id == id)
                break;
            i++;
        } while (i < 16);
    }
    if (i == 16) {
        print_8c352414(str_8c3f49fc, id);
        return 0;
    }
    return l->slot[i].fname;
}

int lsc_get_stm_stat_8c352238(Lsc *l, int id)
{
    int i;
    if (l == 0) {
        print_8c352414(str_8c3f4994);
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto LX2238;
LX2238:
        return -1;
    }
    i = 0;
    if (i < 16) {
        do {
            if (l->slot[i].id == id)
                break;
            i++;
        } while (i < 16);
    }
    if (i == 16) {
        print_8c352414(str_8c3f49fc, id);
        return -1;
    }
    return l->slot[i].stat;
}

int lsc_get_stm_rdsct_8c352296(Lsc *l, int id)
{
    int i;
    if (l == 0) {
        print_8c352414(str_8c3f4994);
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto LX2296;
LX2296:
        return 0;
    }
    i = 0;
    if (i < 16) {
        do {
            if (l->slot[i].id == id)
                break;
            i++;
        } while (i < 16);
    }
    if (i == 16) {
        print_8c352414(str_8c3f49fc, id);
        return 0;
    }
    return l->slot[i].rdsct;
}

void lsc_set_flow_limit_8c3522f4(Lsc *l, int min)
{
    if (l == 0) {
        print_8c352414(str_8c3f4994);
        return;
    }
    if (min < 0 || min > l->flow_max) {
        print_8c352414(str_8c3f4a20, min);
        return;
    }
    l->flow_limit = min;
}

int lsc_get_flow_limit_8c352332(Lsc *l)
{
    if (l == 0) {
        print_8c352414(str_8c3f4994);
        return -1;
    }
    return l->flow_limit;
}

void lsc_set_cb_8c352350(LscCb fn, int a, int b)
{
    if (fn == 0) {
        g_lsc_cb_8c3fb468 = 0;
        g_lsc_cb_a_8c3fb46c = 0;
        g_lsc_cb_b_8c3fb470 = 0;
        return;
    }
    g_lsc_cb_8c3fb468 = fn;
    g_lsc_cb_a_8c3fb46c = a;
    g_lsc_cb_b_8c3fb470 = b;
}

void lsc_call_cb_8c352372(void)
{
    LscCb fn;
    fn = g_lsc_cb_8c3fb468;
    if (fn)
        fn(g_lsc_cb_a_8c3fb46c, g_lsc_cb_b_8c3fb470);
}

void lsc_pause_8c35238e(Lsc *l, int sw)
{
    if (l == 0) {
        print_8c352414(str_8c3f4994);
        return;
    }
    l->pause = sw;
}
