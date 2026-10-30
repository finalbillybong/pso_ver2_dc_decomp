/* Sets per-channel parameters for one device entry (Hitachi SHC). */
typedef struct Channel {
    int a;
    int b;
    int c;
    int unknownC;
    int d;
    int e;
    int unknown18[2];
} Channel;

typedef struct Entry {
    char unknown0[9];
    char count;
    char unknownA[2];
    Channel ch[4];
    char unknown8C[0x20c - 0x8c];
    short level[4];
    char flag[4];
    char unknown218[0x2a0 - 0x218];
} Entry;

typedef struct System {
    int unknown0;
    Entry *entries;
} System;

extern System *g_system_8c3fac48;
extern void report_error_8c346118(void *where, int code);

int set_channels_8c34409c(char *id, char slot, char a, char b, char c, char d, char e, short level, char flag)
{
    int err = 0;
    Entry *p;
    int i;
    int idx;
    short lv;
    if (g_system_8c3fac48 == 0) {
        err = 0xd000001;
        goto done;
    }
    if (id == 0) {
        err = 0x7000103;
        goto done;
    }
    goto l1;
l1:
    idx = *id;
    p = &g_system_8c3fac48->entries[idx];
    if (slot == -1) goto ok;
    if (slot >= 0 && p->count > slot) goto ok;
    err = 0x3000001;
    goto done;
ok:
    lv = level >> 2;
    i = 0;
    while (i < 4) {
        if (slot == i || slot == -1) {
            p->ch[i].b = b;
            p->ch[i].a = a;
            p->ch[i].c = c;
            p->ch[i].d = d;
            p->ch[i].e = e;
            if (level == -1) p->level[i] = -1;
            else p->level[i] = lv;
            p->flag[i] = flag;
        }
        i++;
    }
done:
    if (err) report_error_8c346118(set_channels_8c34409c, err);
    return err;
}
