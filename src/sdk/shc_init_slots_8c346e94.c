/* SDK pool group 0x8c346e94-0x8c346f40 (Hitachi SHC): installs a slot buffer
   in the context, clears it and fills every 32-byte slot with the default. */
typedef struct Block32 {
    int words[8];
} Block32;

typedef struct Context {
    int unknown0[4];
    Block32 *slots;
    unsigned int count;
    int unknown18;
    int unknown1c;
    int unknown20;
    int unknown24;
} Context;

extern Context *g_context_8c3fac48;
extern Block32 g_default_slot_8c3fac50;
extern Block32 *g_slots_8c52c390;
extern void *memset(void *, int, unsigned int);
extern void report_error_8c346118(int, int);

int init_slots_8c346e94(Block32 *slots, unsigned int count)
{
    int error = 0;
    unsigned int i;
    unsigned int n;
    volatile unsigned int vcount = count;
    if (!g_context_8c3fac48) error = 0xd000001;
    else {
        g_context_8c3fac48->slots = slots;
        g_context_8c3fac48->count = vcount;
        g_context_8c3fac48->unknown18 = 0;
        g_context_8c3fac48->unknown20 = 0;
        g_context_8c3fac48->unknown1c = 0;
        g_context_8c3fac48->unknown24 = 0;
        g_slots_8c52c390 = slots;
        n = vcount;
        memset(slots, 0, n * 32);
        for (i = 0; i < n; i++) g_context_8c3fac48->slots[i] = g_default_slot_8c3fac50;
    }
    if (error) report_error_8c346118((int)init_slots_8c346e94, error);
    return error;
}
