/* SDK pool group 0x8c36dea0 (Hitachi SHC): initialises the four 0x34-byte slots
   of the driver object and marks the driver ready. */
typedef struct Slot {
    char unknown0[0x34];
} Slot;

typedef struct Driver {
    int unknown0;
    Slot slots[4];
} Driver;

extern Driver *g_driver_8c3fbdf0;
extern void init_slot_8c36de58(Slot *);
extern int g_ready_8c561054;

int init_slots_8c36dea0(void)
{
    int i;
    for (i = 0; i < 4; i++) {
        Slot *slot = &g_driver_8c3fbdf0->slots[i];
        init_slot_8c36de58(slot);
    }
    g_ready_8c561054 = 1;
    return 0;
}
