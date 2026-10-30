/* Resets the three block tables of a named slot (Hitachi SHC). */
typedef struct Block {
    int word[8];
} Block;

typedef struct Slot {
    char unknown0[0x8c];
    Block a[4];
    Block b[4];
    Block c[4];
    char unknown20c[0x2a0 - 0x20c];
} Slot;

typedef struct System {
    int unknown0;
    Slot *slots;
} System;

extern System *g_system_8c3fac48;
extern Block g_default_block_8c3fabf8;
extern void report_error_8c346118(void *where, int code);

int reset_blocks_8c343cb0(char *name, int which)
{
    int err = 0;
    int i;
    Slot *slot;
    System *sys = g_system_8c3fac48;
    if (sys == 0) {
        err = 0xd000001;
        goto done;
    }
    if (name == 0) {
        err = 0x7000103;
        goto done;
    }
    { int idx = *name; slot = &sys->slots[idx]; }
    i = 0;
    for (; i < 4; i++) {
        if (which == i || which == -1) {
            slot->a[i] = g_default_block_8c3fabf8;
            slot->b[i] = g_default_block_8c3fabf8;
            slot->c[i] = g_default_block_8c3fabf8;
        }
    }
done:
    if (err) report_error_8c346118(reset_blocks_8c343cb0, err);
    return err;
}
