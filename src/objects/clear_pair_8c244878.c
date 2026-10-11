typedef struct Holder { char unknown0[0x270]; int value; } Holder;
void clear_pair_8c244878(Holder *o)
{
    o->value = 0;
    *(int *)0x8c510cbc = 0;
}
