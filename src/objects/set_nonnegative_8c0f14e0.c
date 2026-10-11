typedef struct Holder { char unknown0[0x10c]; int value; } Holder;
void set_nonnegative_8c0f14e0(Holder *o, int value)
{
    if (value < 0) value = 0;
    o->value = value;
}
