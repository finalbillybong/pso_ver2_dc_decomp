typedef struct Holder { char unknown0[0x6d8]; int bits; } Holder;
void set_bit_8c028c90(Holder *o, int bit)
{
    o->bits |= 1 << bit;
}
