typedef struct Holder { char unknown0[0x18]; int flags; } Holder;
void set_mode4_8c05b1dc(Holder *o)
{
    o->flags |= 4;
    o->flags &= ~2;
}
