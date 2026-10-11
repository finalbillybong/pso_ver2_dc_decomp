typedef struct Holder { char unknown0[0x18]; int flags; } Holder;
void set_mode2_8c05b1ec(Holder *o)
{
    o->flags &= ~4;
    o->flags |= 2;
}
