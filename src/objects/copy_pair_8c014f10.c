typedef struct Pair { int first; int second; } Pair;
void copy_pair_8c014f10(char *o, Pair *value)
{
    *(Pair *)(o + 0x14) = *value;
}
