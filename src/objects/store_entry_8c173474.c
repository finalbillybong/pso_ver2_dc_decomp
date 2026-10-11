typedef struct Holder { char unknown0[0x30]; int *entries; } Holder;
void store_entry_8c173474(Holder *o, int index, int value)
{
    if (o) *(int *)((char *)o->entries + (index << 2)) = value;
}
