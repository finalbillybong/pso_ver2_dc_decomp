/* SDK pool group 0x8c348628-0x8c348844 (Hitachi SHC): steps four ramped
   values of each active channel (8 x 0x70-byte records), clamping at the
   targets and notifying when the high byte changes; 0x0d000001 when the
   subsystem is not ready. */
typedef struct Channel {
    int unknown0;
    int target_a;
    int target_b;
    int unknown0c[4];
    int target_c;
    int target_d;
    int value_a;
    int value_b;
    int unknown2c[4];
    int value_c;
    int value_d;
    int step_a;
    int step_b;
    int unknown4c[4];
    int step_c;
    int step_d;
    int unknown64[2];
    int active;
} Channel;

typedef struct Bank {
    char unknown0[0xe0];
    Channel ch[8];
} Bank;

typedef struct Dev {
    Bank *bank;
} Dev;

extern Dev *g_dev_8c3fac48;
extern void set_a_8c346a54(Channel *, int);
extern void set_b_8c3468d0(Channel *, int);
extern void set_d_8c3469cc(Channel *, int);
extern void set_c_8c346948(Channel *, int);
extern void register_8c346118(int (*owner)(void), int status);

int ramp_update_8c348628(void)
{
    int status = 0;
    unsigned int i;
    Channel *ch;
    int old;

    if (!g_dev_8c3fac48) {
        status = 0xd000001;
        goto done;
    }
    for (i = 0; i < 8; i++) {
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
                set_a_8c346a54(ch, ch->value_a / 0x100);
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
                set_b_8c3468d0(ch, ch->value_b / 0x100);
        }
        if (ch->step_d) {
            old = ch->value_d;
            ch->value_d += ch->step_d;
            if (ch->step_d < 0 && ch->value_d <= ch->target_d) {
                ch->step_d = 0;
                ch->value_d = ch->target_d;
            }
            if (ch->step_d > 0 && ch->target_d <= ch->value_d) {
                ch->step_d = 0;
                ch->value_d = ch->target_d;
            }
            if ((old & ~0xff) != (ch->value_d & ~0xff))
                set_d_8c3469cc(ch, ch->value_d / 0x100);
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
                set_c_8c346948(ch, ch->value_c / 0x100);
        }
    }
done:
    if (status) register_8c346118(ramp_update_8c348628, status);
    return status;
}
