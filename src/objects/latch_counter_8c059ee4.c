typedef struct Holder { char unknown0[0x30a]; short counter; char unknown30c[0x84]; int latched; } Holder;
void latch_counter_8c059ee4(Holder *o)
{
    o->latched = o->counter;
}
