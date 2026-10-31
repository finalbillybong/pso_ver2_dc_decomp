/* SDK pool group 0x8c347630 (Hitachi SHC): with interrupts masked, closes a
   claimed block: waits for its state, then turns "MBLK" into "mblk". */
typedef struct Block {
    int magic;
} Block;

typedef struct System {
    char unknown0[0x54];
    int opened;
    char unknown58[0x10];
    char *ring;
} System;

extern System *g_system_8c3fac48;
extern int check_handle_8c347458(int);
extern int get_state_8c3479cc(int, int *);
extern void set_values_8c346118(int, int);
int close_block_8c347630(int handle)
{
    int error;
    Block *b = (Block *)handle;
    int state;
    unsigned int i;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    error = check_handle_8c347458(handle);
    if (error) goto done;
    error = get_state_8c3479cc(handle, &state);
    if (error) goto done;
    switch (state) {
    case 0:
        for (i = 0; i < 0x200; i += 8) {
            if (*(int *)(g_system_8c3fac48->ring + i) == handle) break;
        }
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto searched;
searched:
        break;
    case 2:
        for (;;) get_state_8c3479cc(handle, &state);
    }
    if (b->magic == 0x4b4c424d) {
        b->magic = 0x6b6c626d;
        g_system_8c3fac48->opened--;
    } else {
        error = 0x7000102;
    }
done:
    _builtin_set_imask(old);
    if (error) set_values_8c346118((int)close_block_8c347630, error);
    return error;
}
