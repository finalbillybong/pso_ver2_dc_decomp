typedef struct Holder { char unknown0[0x1c]; int flags; } Holder;
int has_flag9_8c21f690(Holder *o)
{
    return (o->flags & 0x200) != 0;
}
