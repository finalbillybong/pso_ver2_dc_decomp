/* SDK pool group 0x8c345550-0x8c3456fc (Hitachi SHC): steps three ramped
   values of each active channel (64 x 0x70-byte records), clamping at the
   targets and notifying when the high byte changes; 0x0d000001 when the
   subsystem is not ready. */
typedef struct Channel {
    int unknown0;
    int target_a;
    int target_b;
    int unknown0c[4];
    int target_c;
    int unknown20;
    int value_a;
    int value_b;
    int unknown2c[4];
    int value_c;
    int unknown40;
    int step_a;
    int step_b;
    int unknown4c[4];
    int step_c;
    int unknown60[3];
    int active;
} Channel;

typedef struct Bank {
    char unknown0[0x460];
    Channel ch[64];
} Bank;

typedef struct Dev {
    Bank *bank;
} Dev;

extern Dev *g_dev_8c3fac48;
extern void set_a_8c346e1c(Channel *, int);
extern void set_b_8c346d20(Channel *, int);
extern void set_c_8c346d98(Channel *, int);
extern void register_8c346118(int (*owner)(void), int status);

int ramp_update_8c345550(void)
{
    int status = 0;
    unsigned int i;
    Channel *ch;
    int old;

    if (!g_dev_8c3fac48) {
        status = 0xd000001;
        goto done;
    }
    for (i = 0; i < 64; i++) {
        if (g_dev_8c3fac48->bank->ch[i].active != 1) continue;
        ch = &g_dev_8c3fac48->bank->ch[i];
        if (ch->step_a) {
            old = ch->value_a;
            ch->value_a += ch->step_a;
            if (ch->step_a < 0) {
                if (ch->value_a <= ch->target_a) {
                    ch->step_a = 0;
                    ch->value_a = ch->target_a;
                }
            }
            if (ch->step_a > 0 && ch->target_a <= ch->value_a) {
                ch->step_a = 0;
                ch->value_a = ch->target_a;
            }
            if ((old & ~0xff) != (ch->value_a & ~0xff))
                set_a_8c346e1c(ch, ch->value_a / 0x100);
        }
        if (ch->step_b) {
            old = ch->value_b;
            ch->value_b += ch->step_b;
            if (ch->step_b < 0 && ch->value_b <= ch->target_b) {
                ch->step_b = 0;
                ch->value_b = ch->target_b;
            }
            if (ch->step_b > 0 && ch->target_b <= ch->value_b) {
                ch->step_b = 0;
                ch->value_b = ch->target_b;
            }
            if ((old & ~0xff) != (ch->value_b & ~0xff))
                set_b_8c346d20(ch, ch->value_b / 0x100);
        }
        if (ch->step_c) {
            old = ch->value_c;
            ch->value_c += ch->step_c;
            if (ch->step_c < 0 && ch->value_c <= ch->target_c) {
                ch->step_c = 0;
                ch->value_c = ch->target_c;
            }
            if (ch->step_c > 0 && ch->target_c <= ch->value_c) {
                ch->step_c = 0;
                ch->value_c = ch->target_c;
            }
            if ((old & ~0xff) != (ch->value_c & ~0xff))
                set_c_8c346d98(ch, ch->value_c / 0x100);
        }
    }
done:
    if (status) register_8c346118(ramp_update_8c345550, status);
    return status;
}
