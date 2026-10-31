/* Slot table (80 records of 0x1c bytes): initialise and release (Hitachi SHC). */
typedef struct Slot {
    int id;
    int handle;
    int list;
    int extra;
    int unknown10;
    char flag14;
    char flag15;
    char flag16;
    char flag17;
    char flag18;
    char flag19;
    char unknown1a[2];
} Slot;

extern Slot g_slots_8c4effa0[80];
extern void release_ids_8c1f56aa(int);
extern void release_chain_c_8c1f56ec(int);
extern void release_chain_10_8c1f5704(int);

static void slot_init_8c1f9108(Slot *s);
static void slot_reset_8c1f9164(Slot *s, int keep);

void slots_init_8c1f90e4(void)
{
    Slot *s;
    for (s = g_slots_8c4effa0; s < g_slots_8c4effa0 + 80; s++) slot_init_8c1f9108(s);
}

static void slot_init_8c1f9108(Slot *s)
{
    s->id = -1;
    s->handle = 0;
    s->list = 0;
    s->extra = 0;
    s->unknown10 = 0;
    s->flag14 = 0;
    s->flag15 = 0;
    s->flag16 = 0;
    s->flag17 = -1;
    s->flag18 = -1;
    s->flag19 = -1;
}

void slots_reset_8c1f9130(int first, int last, int keep)
{
    Slot *end = &g_slots_8c4effa0[last];
    Slot *s;
    if (0) first++;
    for (s = &g_slots_8c4effa0[first]; s < end; s++) slot_reset_8c1f9164(s, keep);
}

static void slot_reset_8c1f9164(Slot *s, int keep)
{
    if (!keep) {
        s->id = -1;
        s->flag18 = -1;
        if (s->handle != -1) release_ids_8c1f56aa(s->handle);
        s->handle = 0;
        s->flag17 = -1;
        s->flag19 = -1;
        s->flag16 = 0;
    }
    if (s->list && s->list != -1) release_chain_c_8c1f56ec(s->list);
    s->list = 0;
    if (s->extra) release_chain_10_8c1f5704(s->extra);
    s->extra = 0;
    s->unknown10 = 0;
    s->flag14 = 0;
    s->flag15 = 0;
}
