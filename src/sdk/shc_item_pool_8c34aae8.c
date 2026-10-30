/* SDK pool group 0x8c34aae8-0x8c34ac00 (Hitachi SHC): an eight-entry pool of
   0xac-byte items with a created handle and two callbacks bound to each. */
typedef struct Item Item;
struct Item {
    short used;
    short unknown2;
    int unknown4;
    void *handle;
    int unknownc[3];
    int end;
    int unknown1c[7];
    int a;
    int b;
    int c;
    int d;
    int unknown48[16];
    int (*get_info)(Item *, int *, int *, int *);
    Item *get_info_arg;
    void (*advance)(Item *, int, int);
    Item *advance_arg;
    int offset;
    int position;
    char unknowna0[0xac - 0xa0];
};

extern Item g_items_8c52f910[8];
extern void *memset(void *, int, unsigned int);
extern void prepare_8c351be8(void);
extern void *create_handle_8c351bf2(void);
extern void destroy_handle_8c351c82(void *);

void item_free_8c34abb8(Item *item);

void items_init_8c34aae8(void)
{
    prepare_8c351be8();
    memset(g_items_8c52f910, 0, sizeof g_items_8c52f910);
}

int item_get_info_8c34aafc(Item *item, int *position, int *remaining, int *end)
{
    *position = item->position;
    *remaining = item->c - item->position;
    *end = item->end - item->offset;
    return item->b;
}

void item_advance_8c34ab1a(Item *item, int unused, int count)
{
    item->position += count;
    item->offset += count;
}

Item *item_alloc_8c34ab2c(int a, int b, int c, int d)
{
    Item *item;
    int i;
    for (i = 0; i < 8; i++)
        if (!g_items_8c52f910[i].used) break;
    if (i == 8) return 0;
    item = &g_items_8c52f910[i];
    memset(item, 0, sizeof *item);
    item->used = 1;
    item->handle = create_handle_8c351bf2();
    if (item->handle == 0) {
        item_free_8c34abb8(item);
        return 0;
    }
    item->a = a;
    item->b = b;
    item->c = c;
    item->d = d;
    item->get_info = item_get_info_8c34aafc;
    item->get_info_arg = item;
    item->advance = item_advance_8c34ab1a;
    item->advance_arg = item;
    return item;
}

void item_free_8c34abb8(Item *item)
{
    if (item) {
        destroy_handle_8c351c82(item->handle);
        memset(item, 0, sizeof *item);
        item->used = 0;
    }
}
