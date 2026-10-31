typedef struct Blk {
    short magic;
    short used;
    int size;
    struct Blk *next;
    struct Blk *prev;
    int pad[4];
} Blk;
extern Blk heap_8c576290;
extern Blk *rover_8c5762b4;

void heap_init_8c384418(Blk *b, int size)
{
    Blk *h = &heap_8c576290;
    h->size = 0x24;
    h->magic = 0xa5;
    h->used = 1;
    h->prev = b;
    h->next = b;
    b->size = size;
    b->magic = 0xa5;
    b->used = 0;
    b->next = b->prev = &heap_8c576290;
    rover_8c5762b4 = h->next;
}

void *heap_alloc_8c384440(int req)
{
    Blk *b;
    Blk *n;
    int size = (req + 0x3f) & ~0x1f;
    for (b = heap_8c576290.next; b != &heap_8c576290; b = b->next) {
        if (b->used != 0) continue;
        if (b->size >= size) {
            if (b->size - size > 0x40) {
                n = (Blk *)((char *)b + size);
                n->size = b->size - size;
                n->magic = 0xa5;
                n->used = 0;
                b->next->prev = n;
                n->next = b->next;
                b->next = n;
                n->prev = b;
                b->size = size;
            }
            b->used = 1;
            return (char *)b + 0x20;
        }
    }
    return 0;
}

void heap_free_8c3844a6(void *p)
{
    Blk *b = (Blk *)((char *)p - 0x20);
    if (b->magic != 0xa5) {
        goto done;
    }
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto check_prev;
check_prev:
    if (b->prev->used == 0) {
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto merge_prev;
merge_prev:
        b->next->prev = b->prev;
        b->prev->next = b->next;
        b->prev->size += b->size;
        b = b->prev;
    }
    if (b->next->used) {
    } else {
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto merge_next;
merge_next:
        b->next->next->prev = b;
        b->size += b->next->size;
        b->next = b->next->next;
    }
    b->used = 0;
done:;
}
