typedef struct Pair { char unknown0[0x20]; float first; char unknown24[4]; float second; } Pair;
void swap_floats_8c104c50(Pair *o)
{
    float first = o->first;
    o->first = o->second;
    o->second = first;
}
