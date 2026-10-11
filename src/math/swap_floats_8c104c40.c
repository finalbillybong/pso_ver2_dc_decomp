typedef struct Pair { char unknown0[0x1c]; float first; char unknown20[4]; float second; } Pair;
void swap_floats_8c104c40(Pair *o)
{
    float first = o->first;
    o->first = o->second;
    o->second = first;
}
