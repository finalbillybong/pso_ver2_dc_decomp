/* Block-list heap objects 0x8c359224-0x8c3596f4 (Hitachi SHC): a pool of 64
   heap handles, each with a free-block list and four span lists. */
typedef struct { int pos; int len; } Span;

typedef struct Block Block;
struct Block {
    Block *next;
    int unknown4;
    Span span;
};

typedef struct Heap Heap;
struct Heap {
    void *vtbl;
    unsigned char used;
    char mode;
    char unknown6[2];
    void *name;
    Block *blocks;
    int count;
    Block *free;
    Block *lists[4];
    void (*error)(void *argument, int code);
    void *argument;
};

extern void *d_8c3fb6c8[];
extern char d_8c3f6048[];
extern int g_heap_users_8c3fb6f8;
extern Heap g_heaps_8c547710[];
extern void *memset(void *p, int c, unsigned int n);
extern void span_split_8c3596f4(Span *in, int max, Span *head, Span *tail);

int heap_lock_8c359224(Heap *h)
{
    int mask;
    mask = _builtin_get_imask();
    _builtin_set_imask(15);
    return mask;
}

void heap_unlock_8c35923c(Heap *h, int mask)
{
    _builtin_set_imask(mask);
}

void heap_hang_8c359252(void *argument, int code)
{
    for (;;) {
    }
}

void heap_init_8c359256(void)
{
    if (g_heap_users_8c3fb6f8 == 0) memset(g_heaps_8c547710, 0, 0xc00);
    g_heap_users_8c3fb6f8++;
}

void heap_finish_8c359278(void)
{
    g_heap_users_8c3fb6f8--;
    if (g_heap_users_8c3fb6f8 == 0) memset(g_heaps_8c547710, 0, 0xc00);
}

void heap_reset_8c359326(Heap *h);

Heap *heap_create_8c359294(int mode, Block *blocks, unsigned int size)
{
    int i;
    Heap *h;
    for (i = 0; i < 64; i++) {
        if (!g_heaps_8c547710[i].used) break;
    }
    if (i == 64) return 0;
    h = &g_heaps_8c547710[i];
    h->used = 1;
    h->mode = mode;
    h->vtbl = d_8c3fb6c8;
    h->mode = mode;
    h->name = d_8c3f6048;
    h->blocks = blocks;
    h->count = size / 16;
    h->error = heap_hang_8c359252;
    h->argument = h;
    heap_reset_8c359326(h);
    return h;
}

void heap_destroy_8c3592fe(Heap *h)
{
    if (h) {
        memset(h, 0, 0x30);
        h->used = 0;
    }
}

void *heap_name_8c35931c(Heap *h)
{
    return h->name;
}

void heap_set_error_8c359320(Heap *h, void (*error)(void *argument, int code), void *argument)
{
    h->error = error;
    h->argument = argument;
}

void heap_reset_8c359326(Heap *hp)
{
    Heap *h = hp;
    Block *b;
    int i;
    Block **p;
    b = h->blocks;
    h->free = b;
    for (i = 0; i < h->count - 1; i++) {
        b[i].next = (Block *)((char *)b + (i + 1) * 16);
        b[i].span.pos = 0;
        b[i].span.len = 0;
    }
    b[i].next = 0;
    b[i].span.pos = 0;
    b[i].span.len = 0;
    p = h->lists;
    do {
        *p = 0;
        p++;
    } while (p < h->lists + 4);
}

int heap_total_8c359394(Heap *h, int list)
{
    Block *b;
    int sum;
    if (list < 0 || list >= 4) {
        if (h->error) h->error(h->argument, -3);
        return 0;
    }
    sum = 0;
    for (b = h->lists[list]; b; b = b->next) sum += b->span.len;
    return sum;
}

void heap_alloc_8c3593da(Heap *hp, int list, int size, Span *out)
{
    Heap *h = hp;
    int mask;
    Block *b;
    Span s, rest;
    if (list < 0 || list >= 4) {
        if (h->error) h->error(h->argument, -3);
        out->pos = 0;
        out->len = 0;
        return;
    }
    mask = heap_lock_8c359224(h);
    b = h->lists[list];
    if (b) {
        s = b->span;
        if (s.len <= size) {
            *out = s;
            h->lists[list] = b->next;
            b->next = h->free;
            h->free = b;
            goto done;
        }
        if (h->mode == 1) {
            span_split_8c3596f4(&s, size, &s, &rest);
            *out = s;
            b->span = rest;
            goto done;
        }
    }
    out->pos = 0;
    out->len = 0;
done:
    heap_unlock_8c35923c(h, mask);
}

void heap_free_8c3594a6(Heap *hp, int list, Span *s)
{
    Heap *h = hp;
    int mask;
    Block **pp;
    Block *last, *b;
    if (list < 0 || list >= 4) {
        if (h->error) h->error(h->argument, -3);
        return;
    }
    if (s->len <= 0) return;
    if (s->pos == 0) return;
    mask = heap_lock_8c359224(h);
    last = 0;
    for (pp = &h->lists[list]; *pp; pp = &(*pp)->next) last = *pp;
    if (h->mode == 1 && last && last->span.pos + last->span.len == s->pos) {
        last->span.len += s->len;
    } else {
        b = h->free;
        if (!b) {
            if (h->error) h->error(h->argument, -3);
        } else {
            h->free = b->next;
            b->next = 0;
            b->span = *s;
            *pp = b;
        }
    }
    heap_unlock_8c35923c(h, mask);
}

void heap_free_head_8c35956e(Heap *hp, int list, Span *s)
{
    Heap *h = hp;
    int mask;
    Block *b;
    if (list < 0 || list >= 4) {
        if (h->error) h->error(h->argument, -3);
        return;
    }
    if (s->len <= 0) return;
    if (s->pos == 0) return;
    mask = heap_lock_8c359224(h);
    b = h->lists[list];
    if (h->mode == 1 && b && s->pos + s->len == b->span.pos) {
        b->span.pos = s->pos;
        b->span.len += s->len;
    } else {
        b = h->free;
        if (!b) {
            if (h->error) h->error(h->argument, -3);
        } else {
            h->free = b->next;
            b->next = 0;
            b->span = *s;
            b->next = h->lists[list];
            h->lists[list] = b;
        }
    }
    heap_unlock_8c35923c(h, mask);
}

int heap_check_8c35964a(Heap *h, int list, int size, int *len)
{
    Block *b;
    Span s, *sp;
    int n;
    *len = 0;
    if (list < 0 || list >= 4) {
        if (h->error) h->error(h->argument, -3);
        return 0;
    }
    b = h->lists[list];
    if (0) b++;
    if (!b) return 0;
    sp = &s;
    *sp = b->span;
    *len = sp->len;
    n = sp->len;
    if (h->mode == 1) {
        if (n < size) return 0;
        return 1;
    }
    if (n == size) return 1;
    return 0;
}

int heap_count_8c3596bc(Heap *hp, int list)
{
    Heap *h = hp;
    Block *b;
    int n;
    for (b = h->lists[list], n = 0; b; n++) b = b->next;
    return n;
}

int heap_count_free_8c3596da(Heap *hp)
{
    Heap *h = hp;
    Block *b;
    int n;
    for (b = h->free, n = 0; b; n++) b = b->next;
    return n;
}
