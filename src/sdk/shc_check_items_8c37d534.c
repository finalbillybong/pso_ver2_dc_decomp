/* SDK pool group 0x8c37d534 (Hitachi SHC): checks every item of a list,
   remembering the index of the last failing one; returns 1 or -1. */
typedef struct Item {
    int unknown0;
    int unknown4;
    int handle;
} Item;

typedef struct List {
    Item *items;
    unsigned int count;
} List;

extern int check_item_8c37d6bc(int);
extern unsigned int g_failed_index_8c57572c;

int check_items_8c37d534(List *list)
{
    unsigned int i;
    int result = 1;
    for (i = 0; i < list->count; i++) {
        if (check_item_8c37d6bc(list->items[i].handle) < 0) {
            g_failed_index_8c57572c = i;
            result = -1;
        }
    }
    return result;
}
