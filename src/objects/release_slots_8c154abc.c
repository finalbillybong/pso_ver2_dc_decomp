typedef struct Item { int unknown0; short flags; } Item;
void release_slots_8c154abc(char *o)
{
    int i;
    char *slots = o + 0x400;
    for (i = 0; i < 4; i++) {
        int offset = i << 2;
        Item *item = *(Item **)(slots + offset);
        if (item) {
            item->flags |= 1;
            *(Item **)(slots + offset) = 0;
        }
    }
}
