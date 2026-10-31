typedef struct Slot {
    int id;
    char fname[40];
    int stat;
    int rdsct;
} Slot;

typedef struct Obj Obj;
typedef struct ObjOps {
    char pad00[0x24];
    int (*get_size)(Obj *o, int a);
} ObjOps;
struct Obj {
    ObjOps *ops;
};

typedef struct Lsc {
    char used;
    char stat;
    char busy;
    char pause;
    char flag;
    char pad05[3];
    Obj *sj;
    char pad0c[8];
    int flow_limit;
    int flow_max;
    int tail;
    int head;
    int count;
    int stm;
    int v2c;
    int v30;
    int v34;
    Slot slot[16];
} Lsc;

extern Lsc g_channels_8c5366e0[];
extern char str_8c3f4940[];
extern char str_8c3f496c[];
extern char str_8c3f4994[];
extern char str_8c3f49b8[];
extern void lock_8c3523cc(int *state);
extern void unlock_8c3523e4(int *state);
extern void print_8c352414(char *fmt, ...);
extern void *memset(void *p, int c, unsigned int n);
extern void call_8c12b154(void *dst, void *src, int n);
extern void thunk_8c352482(int stm);
extern void thunk_8c35246a(int stm);

void lsc_stop_8c352028(Lsc *l);

Lsc *lsc_find_free_8c351e04(void)
{
    int i;
    Lsc *l;
    l = 0;
    for (i = 0; i < 8; i++) {
        if (g_channels_8c5366e0[i].used == 0) {
            l = &g_channels_8c5366e0[i];
            break;
        }
    }
    return l;
}

Lsc *lsc_create_8c351e2c(Obj *sj)
{
    int state;
    Lsc *l;
    Slot *s;
    int z;
    if (sj == 0) {
        print_8c352414(str_8c3f4940);
        return 0;
    }
    lock_8c3523cc(&state);
    l = lsc_find_free_8c351e04();
    if (l == 0) {
        print_8c352414(str_8c3f496c);
    } else {
        z = 0;
        l->sj = sj;
        l->stat = z;
        l->flow_max = sj->ops->get_size(sj, z);
        l->flow_limit = l->flow_max * 8 / 10;
        for (s = l->slot; s < &l->slot[16]; s++)
            s->stat = z;
        l->used = 1;
    }
    unlock_8c3523e4(&state);
    return l;
}

void lsc_destroy_8c351eb6(Lsc *l)
{
    int state;
    if (l == 0)
        return;
    lock_8c3523cc(&state);
    lsc_stop_8c352028(l);
    l->used = 0;
    memset(l, 0, sizeof(Lsc));
    unlock_8c3523e4(&state);
}

int lsc_entry_fname_8c351ee8(Lsc *l, char *fname)
{
    int prev;
    int id;
    Slot *s;
    if (l == 0) {
        print_8c352414(str_8c3f4994);
        return -1;
    }
    if (fname == 0) {
        print_8c352414(str_8c3f49b8, fname);
        return -1;
    }
    if (l->count >= 16)
        return -1;
    {
        int i = (l->tail + 15) % 16;
        prev = l->slot[i].id;
    }
    if (prev == 0x7fffffff)
        id = 0;
    else
        id = prev + 1;
    s = &l->slot[l->tail];
    s->id = id;
    call_8c12b154(s->fname, fname, 40);
    s->stat = 0;
    s->rdsct = 0;
    l->count++;
    l->tail = (l->tail + 1) % 16;
    if (l->stat == 1)
        l->stat = 2;
    return id;
}

void lsc_start_8c351fde(Lsc *l)
{
    int state;
    if (l == 0) {
        print_8c352414(str_8c3f4994);
        return;
    }
    lock_8c3523cc(&state);
    if (l->stat != 0)
        lsc_stop_8c352028(l);
    if (l->count > 0)
        l->stat = 2;
    else
        l->stat = 1;
    unlock_8c3523e4(&state);
}

void lsc_stop_8c352028(Lsc *l)
{
    int state;
    if (l == 0) {
        print_8c352414(str_8c3f4994);
        return;
    }
    lock_8c3523cc(&state);
    if (l == 0)
        return;
    if (l->stm != 0) {
        if (l->busy == 1) {
            thunk_8c352482(l->stm);
            l->busy = 0;
        }
        thunk_8c35246a(l->stm);
        l->stm = 0;
    }
    l->v2c = 0;
    l->tail = 0;
    l->head = 0;
    l->count = 0;
    l->v34 = 0;
    l->stat = 0;
    unlock_8c3523e4(&state);
}

void lsc_set_flag_8c35208a(Lsc *l, int sw)
{
    if (l == 0) {
        print_8c352414(str_8c3f4994);
        return;
    }
    l->flag = (sw == 1);
}
