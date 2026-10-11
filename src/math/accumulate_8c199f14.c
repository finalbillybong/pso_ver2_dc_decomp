typedef struct Pair { char unknown0[0x1c]; float total; float delta; } Pair;
void accumulate_8c199f14(Pair *o)
{
    o->total += o->delta;
}
