typedef struct Holder { char unknown0[0x350]; int flags; } Holder;
void clear_flag28_8c02bb8c(Holder *o)
{
    o->flags &= ~0x10000000;
}
