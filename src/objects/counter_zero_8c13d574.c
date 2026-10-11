typedef struct Holder { char unknown0[0x30a]; short counter; } Holder;
int counter_zero_8c13d574(Holder *o)
{
    return o->counter == 0;
}
