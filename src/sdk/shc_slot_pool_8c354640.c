typedef struct { int used; int id; } Slot;
extern Slot slots_8c539978[8];
extern void *memset(void *, int, unsigned int);

void slot_pool_init_8c354640(void)
{
    int i, id;
    memset(slots_8c539978, 0, sizeof(slots_8c539978));
    id = 15;
    for (i = 0; i < 8; i++) {
        slots_8c539978[i].id = id;
        id--;
    }
}

Slot *slot_alloc_8c354666(void)
{
    Slot *ret = 0;
    int i;
    for (i = 0; i < 8; i++) {
        if (slots_8c539978[i].used == 0) {
            ret = &slots_8c539978[i];
            ret->used = 1;
            break;
        }
    }
    return ret;
}

void slot_free_8c35468e(Slot *p)
{
    p->used = 0;
}

int slot_id_8c354694(Slot *p)
{
    return p->id;
}

void slot_set_id_8c354698(Slot *p, int id)
{
    p->id = id;
}
