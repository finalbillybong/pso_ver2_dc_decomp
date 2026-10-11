typedef struct Holder { char unknown0[0x70]; int end; int start; char unknown78[0x10]; short *entries; } Holder;

int span_8c215d8c(Holder *o)
{
    return o->end - o->start;
}

short lookup_entry_8c215d9c(Holder *o)
{
    if (o->entries) return *(short *)((char *)o->entries + (o->end << 1));
    return 0x450;
}