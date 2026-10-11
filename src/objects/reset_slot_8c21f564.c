typedef struct Holder { char unknown0[0x20]; short slots[1]; } Holder;
void reset_slot_8c21f564(Holder *o, int index)
{
    *(short *)((char *)o->slots + (index << 1)) = 0xff;
}
