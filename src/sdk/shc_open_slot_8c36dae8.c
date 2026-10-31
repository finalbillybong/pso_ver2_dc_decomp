/* SDK pool group 0x8c36dae8 (Hitachi SHC): with interrupts masked, claims a
   free 0x34-byte driver slot, clears its state and returns it. */
typedef struct Slot {
    int index;
    int unknown4;
    int unknown8;
    int unknownc;
    int unknown10;
    int unknown14;
    int mode;
    int unknown1c;
    int unknown20;
    int unknown24;
    int used;
    int unknown2c;
    int unknown30;
} Slot;

typedef struct Driver {
    int unknown0;
    Slot slots[4];
} Driver;

extern Driver *g_driver_8c3fbdf0;

int open_slot_8c36dae8(Slot **out, int index)
{
    int error = 0;
    int old;
    Driver *volatile d;
    Slot *slot;
    volatile int id;
    old = _builtin_get_imask();
    _builtin_set_imask(15);
    *out = 0;
    slot = &(d = g_driver_8c3fbdf0)->slots[index];
    if (slot->used == 1) {
        error = 0x90101;
        goto done;
    }
    d->slots[slot->index].index = slot->index;
    g_driver_8c3fbdf0->slots[slot->index].used = 0;
    g_driver_8c3fbdf0->slots[slot->index].unknown2c = 0;
    g_driver_8c3fbdf0->slots[slot->index].unknown30 = 0;
    g_driver_8c3fbdf0->slots[slot->index].unknown4 = 0;
    g_driver_8c3fbdf0->slots[slot->index].unknown8 = 0;
    g_driver_8c3fbdf0->slots[slot->index].unknownc = 0;
    g_driver_8c3fbdf0->slots[slot->index].unknown10 = 0;
    g_driver_8c3fbdf0->slots[slot->index].unknown14 = 0;
    g_driver_8c3fbdf0->slots[slot->index].mode = 3;
    g_driver_8c3fbdf0->slots[slot->index].unknown1c = 0;
    g_driver_8c3fbdf0->slots[slot->index].unknown20 = 0;
    slot->used = 1;
    *out = slot;
done:
    _builtin_set_imask(old);
    return error;
}
