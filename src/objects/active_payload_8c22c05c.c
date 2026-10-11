typedef struct Holder { char unknown0[0x24]; int kind; } Holder;
char *active_payload_8c22c05c(Holder *o)
{
    return o->kind == 2 ? (char *)o + 0x30 : 0;
}
