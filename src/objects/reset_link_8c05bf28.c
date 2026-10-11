typedef struct Link { char unknown0[0x3a8]; unsigned short id; char unknown3aa[2]; int value; } Link;
void reset_link_8c05bf28(Link *o)
{
    o->value = 0;
    o->id = 0xffff;
}
