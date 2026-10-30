/* SDK pool group 0x8c3c7748-0x8c3c7950 (Hitachi SHC): fixed pools of
   items (32 x 0x14) and groups (4 x 0x20) with a linked list of groups
   whose items are released through a callback. */
typedef struct Item {
    int unknown0[3];
    struct Item *next;
    int used;
} Item;

typedef struct Group {
    int unknown0[3];
    unsigned char count;
    char unknown0d[3];
    struct Group *next;
    Item *items;
    int unknown18;
    int used;
} Group;

extern Item g_items_8c5a2940[32];
extern Group g_groups_8c5a28c0[4];
extern volatile int g_busy_8c5a2530;
extern Group *g_list_8c5a2bdc;
extern void release_8c3c8894(Item *);

Item *item_alloc_8c3c7748(void)
{
    unsigned int i;
    for (i = 0; i < 32; i++)
        if (!g_items_8c5a2940[i].used) {
            g_items_8c5a2940[i].used = 1;
            return &g_items_8c5a2940[i];
        }
    return 0;
}

Group *group_alloc_8c3c7772(void)
{
    unsigned int i;
    for (i = 0; i < 4; i++)
        if (!g_groups_8c5a28c0[i].used) {
            g_groups_8c5a28c0[i].used = 1;
            return &g_groups_8c5a28c0[i];
        }
    return 0;
}

int item_free_8c3c779c(Item *item)
{
    unsigned int i;
    for (i = 0; i < 32; i++)
        if (&g_items_8c5a2940[i] == item) {
            g_items_8c5a2940[i].used = 0;
            return 0;
        }
    return -1;
}

int group_free_8c3c77c4(Group *group)
{
    unsigned int i;
    for (i = 0; i < 4; i++)
        if (&g_groups_8c5a28c0[i] == group) {
            g_groups_8c5a28c0[i].used = 0;
            return 0;
        }
    return -1;
}

void group_tick_8c3c77ec(void)
{
    Group *g, *prev, *dead, *next;
    Item *it, *t;

    Group **head;
    Group *first;
    g_busy_8c5a2530 = 0;
    head = &g_list_8c5a2bdc;
    first = *head;
    if (!first) return;
    g = first;
    if (--g->count == 0) {
        next = g->next;
        dead = g;
        it = dead->items;
        while (it) {
            t = it;
            it = it->next;
            release_8c3c8894(t);
            item_free_8c3c779c(t);
        }
        group_free_8c3c77c4(dead);
        *head = next;
        return;
    }
    prev = *head;
    while (g) {
        if (g->count == 0) {
            dead = g;
            g = g->next;
            it = dead->items;
            while (it) {
                t = it;
                it = it->next;
                release_8c3c8894(t);
                item_free_8c3c779c(t);
            }
            group_free_8c3c77c4(dead);
            prev->next = g;
        } else
            g = g->next;
    }
}

int group_clear_8c3c7898(void)
{
    Group *g, *dead;
    Item *it, *t;

    for (g = g_list_8c5a2bdc; g; ) {
        dead = g;
        g = g->next;
        it = dead->items;
        while (it) {
            t = it;
            it = it->next;
            release_8c3c8894(t);
            item_free_8c3c779c(t);
        }
        group_free_8c3c77c4(dead);
    }
    g_list_8c5a2bdc = (void *)0;
    return 0;
}

int group_keep_8c3c78e2(Group *keep)
{
    Group *g, *dead;
    Item *it, *t;

    if (!g_list_8c5a2bdc) return -1;
    g = g_list_8c5a2bdc;
    while (g) {
        if (g == keep) {
            g_list_8c5a2bdc = g;
            g = g->next;
            continue;
        }
        it = g->items;
        while (it) {
            t = it;
            it = it->next;
            release_8c3c8894(t);
            item_free_8c3c779c(t);
        }
        dead = g;
        g = g->next;
        group_free_8c3c77c4(dead);
    }
    g_list_8c5a2bdc->next = (void *)0;
    return 0;
}
