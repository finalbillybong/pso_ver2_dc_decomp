typedef struct Child { char unknown0[0x18]; int flags; } Child;
typedef struct Holder { char unknown0[0x3a8]; Child *child; } Holder;
void set_child_flag_8c0f8acc(Holder *o)
{
    o->child->flags |= 1;
}
