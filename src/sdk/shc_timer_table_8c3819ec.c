/* Fixed-size timer/event table with free-slot search (Hitachi SHC). */
typedef struct Timer {
    unsigned int id;
    unsigned int owner;
    int f8;
    int fc;
    int flags;
    int value;
    int params[8];
    char pad38[8];
    short pending;
    short pad42;
} Timer;

typedef struct TimerParams {
    int value;
    int params[8];
} TimerParams;

extern Timer *g_streams_8c3fc180;
extern unsigned int g_stream_count_8c3fc184;
extern unsigned int g_timer_next_8c3fc070;
extern int g_timer_used_8c575624;
extern void timer_notify_8c37ea1e(Timer *);

void timer_free_8c381b4e(Timer *t);

void timers_init_8c3819ec(Timer *buf, unsigned int n)
{
    unsigned int i;
    g_streams_8c3fc180 = buf;
    g_stream_count_8c3fc184 = n;
    for (i = 0; i < g_stream_count_8c3fc184; i++) {
        g_streams_8c3fc180[i].id = -1;
        g_streams_8c3fc180[i].owner = -1;
        g_streams_8c3fc180[i].flags = 0;
        g_streams_8c3fc180[i].pending = 0;
    }
    g_timer_next_8c3fc070 = 0;
    g_timer_used_8c575624 = 0;
}

void timer_add_8c381a30(Timer **out, TimerParams *p, int id, unsigned int flags, int owner)
{
    unsigned int start = g_timer_next_8c3fc070;
    Timer *tbl = g_streams_8c3fc180;
    unsigned int i;
    if (tbl[start].id == -1)
        i = start;
    else
        for (i = 0; i < g_stream_count_8c3fc184; i++) {
            if (tbl[i].id != -1) continue;
            break;
        }
    if (i == g_stream_count_8c3fc184 - 1)
        goto wrap;
    g_timer_next_8c3fc070 = i + 1;
    goto set;
wrap:
    g_timer_next_8c3fc070 = 0;
set:
    *out = &g_streams_8c3fc180[i];
    g_streams_8c3fc180[i].params[0] = p->params[0];
    g_streams_8c3fc180[i].params[1] = p->params[1];
    g_streams_8c3fc180[i].params[2] = p->params[2];
    g_streams_8c3fc180[i].params[3] = p->params[3];
    g_streams_8c3fc180[i].params[4] = p->params[4];
    g_streams_8c3fc180[i].params[5] = p->params[5];
    g_streams_8c3fc180[i].params[6] = p->params[6];
    g_streams_8c3fc180[i].params[7] = p->params[7];
    g_streams_8c3fc180[i].value = p->value;
    g_streams_8c3fc180[i].id = id;
    g_streams_8c3fc180[i].owner = owner;
    g_streams_8c3fc180[i].flags = flags;
    g_streams_8c3fc180[i].flags &= ~8;
    if (flags & 6) {
        g_streams_8c3fc180[i].pending = 1;
        timer_notify_8c37ea1e(&g_streams_8c3fc180[i]);
    } else
        g_streams_8c3fc180[i].pending = 0;
    if (g_timer_used_8c575624 <= i)
        g_timer_used_8c575624++;
}

void timer_free_8c381b4e(Timer *t)
{
    int idx;
    unsigned int i;
    t->id = -1;
    t->owner = -1;
    t->f8 = 0;
    t->fc = 0;
    t->value = 0;
    t->params[0] = 0;
    t->params[1] = 0;
    t->params[2] = 0;
    t->params[3] = 0;
    t->params[4] = 0;
    t->params[5] = 0;
    t->params[6] = 0;
    t->params[7] = 0;
    t->flags = 0;
    t->pending = 0;
    idx = (unsigned int)((char *)t - (char *)g_streams_8c3fc180) / sizeof(Timer);
    if (g_timer_used_8c575624 > 0 && idx == g_timer_used_8c575624 - 1) {
        while (g_timer_used_8c575624 > 0 && g_streams_8c3fc180[g_timer_used_8c575624 - 1].id == -1)
            g_timer_used_8c575624--;
    }
    for (i = 0; i < g_stream_count_8c3fc184; i++)
        if (g_streams_8c3fc180[i].id == -1) break;
    g_timer_next_8c3fc070 = i;
}

int timer_find_8c381be6(Timer *tbl, unsigned int n, int id)
{
    unsigned int i;
    if (tbl == 0) goto fail;
    for (i = 0; i < n; i++)
        if (tbl[i].id == id) return i;
fail:
    return -1;
}

int timer_index_8c381c16(Timer *base, unsigned int n, Timer *t)
{
    unsigned int d;
    unsigned int idx;
    int rem;
    unsigned int size;
    if (t == 0 || base == 0) goto fail;
    size = sizeof(Timer);
    d = (char *)t - (char *)base;
    rem = d % size;
    if (rem != 0) goto fail;
    idx = d / size;
    if (idx >= n) {
fail:
        return -1;
    }
    return idx;
}

int timer_find_pair_8c381c70(Timer *tbl, unsigned int n, int id, int owner)
{
    unsigned int i;
    if (tbl == 0) goto fail;
    for (i = 0; i < n; i++) {
        if (tbl[i].id == id) {
            if (tbl[i].owner == owner) return i;
        }
    }
fail:
    return -1;
}

void timer_set_flags_8c381cb8(int id, unsigned int bits, int value)
{
    unsigned int i;
    for (i = 0; i < g_stream_count_8c3fc184; i++) {
        Timer *t = &g_streams_8c3fc180[i];
        if (t->id == id) {
            t->flags |= bits;
            t->value = value;
            if (bits & 2) {
                t->pending++;
                timer_notify_8c37ea1e(t);
            }
        }
    }
}

void timer_clear_flags_8c381d24(int id, unsigned int bits)
{
    unsigned int i;
    for (i = 0; i < g_stream_count_8c3fc184; i++) {
        Timer *t = &g_streams_8c3fc180[i];
        if (t->id == id) {
            t->flags &= ~bits;
            if (!(t->flags & 2)) {
                t->params[7] = 0;
                t->pending = 0;
            }
            if (!(t->flags & 1))
                t->value = 0;
            if (!(t->flags & 3))
                timer_free_8c381b4e(t);
        }
    }
}

void timer_bump_8c381d9a(int id)
{
    Timer *t = g_streams_8c3fc180;
    unsigned int i;
    for (i = 0; i < g_stream_count_8c3fc184; i++) {
        if (t->id == id) t->pending++;
        t++;
    }
}

int *timer_next_value_8c381dc0(void)
{
    unsigned int start = g_timer_next_8c3fc070;
    Timer *tbl = g_streams_8c3fc180;
    unsigned int i;
    if (tbl[start].id == -1)
        i = start;
    else
        for (i = 0; i < g_stream_count_8c3fc184; i++)
            if (tbl[i].id == -1) break;
    return &tbl[i].value;
}
