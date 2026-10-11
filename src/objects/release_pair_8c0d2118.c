typedef struct Item { int unknown0; short flags; } Item;
void release_pair_8c0d2118(char *o)
{
    int i;
    char *slots = o + 0x454;
    for (i = 0; i < 2; i++) {
        int offset = i << 2;
        Item *item = *(Item **)(slots + offset);
        if (item) {
            item->flags |= 1;
            *(Item **)(slots + offset) = 0;
        }
    }
}
