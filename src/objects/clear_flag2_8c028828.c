typedef struct Flags { char unknown0[0x5c0]; int flags; } Flags;
void clear_flag2_8c028828(Flags *o)
{
    o->flags &= ~2;
}
