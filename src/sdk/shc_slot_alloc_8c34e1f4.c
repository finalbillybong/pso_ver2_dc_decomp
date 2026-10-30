/* SDK pool group 0x8c34e1f4-0x8c34e334 (Hitachi SHC): an eight-entry slot pool:
   clearing, per-slot reset and allocation with a created handle. */
typedef struct Slot {
    char used;
    char state;
    char count;
    char flags;
    void *handle;
    int owner;
    int items[8];
    int unknown2c;
    int unknown30;
    int unknown34;
    int limit;
    int last;
    int unknown40;
    int unknown44;
    int unknown48;
    int unknown4c;
    int unknown50;
    int unknown54;
    char unknown58[0x98 - 0x58];
    int unknown98;
} Slot;

extern Slot g_slots_8c533e90[8];
extern void *memset(void *, int, unsigned int);
extern void prepare_8c34aae8(void);
extern int desc_width_8c359212(int);
extern unsigned int desc_height_8c359216(int);
extern unsigned int desc_depth_8c35921a(int);
extern void *create_handle_8c34ab2c(int, int, int, int);
extern void set_callback_8c34ae04(void *, void (*)(void), Slot *);
extern void slot_callback_8c34e49c(void);

void slots_init_8c34e1f4(void)
{
    prepare_8c34aae8();
    memset(g_slots_8c533e90, 0, sizeof g_slots_8c533e90);
}

void slots_clear_8c34e208(void)
{
    memset(g_slots_8c533e90, 0, sizeof g_slots_8c533e90);
}

void slot_reset_8c34e212(Slot *slot)
{
    slot->unknown98 = 0;
    slot->unknown2c = 0;
    slot->unknown30 = 0;
    slot->unknown34 = 0;
    slot->limit = 0x7fffffff;
    slot->last = -1;
    slot->unknown40 = 0;
    slot->unknown44 = 0;
    slot->flags = 0;
}

Slot *slot_alloc_8c34e234(int owner, int count, int *items)
{
    Slot *slot;
    int desc = items[0];
    int i, half, width;
    for (i = 0; i < 8; i++)
        if (!g_slots_8c533e90[i].used) break;
    if (i == 8) return 0;
    slot = &g_slots_8c533e90[i];
    width = desc_width_8c359212(desc);
    half = desc_height_8c359216(desc) >> 1;
    slot->handle = create_handle_8c34ab2c(count, width, half, half + (desc_depth_8c35921a(desc) >> 1));
    set_callback_8c34ae04(slot->handle, slot_callback_8c34e49c, slot);
    if (!slot->handle) return 0;
    slot->owner = owner;
    slot->count = count;
    for (i = 0; i < count; i++) slot->items[i] = items[i];
    slot->state = 0;
    slot_reset_8c34e212(slot);
    slot->unknown48 = 0;
    slot->unknown4c = 0;
    slot->unknown50 = 0;
    slot->unknown54 = 0;
    slot->used = 1;
    return slot;
}
