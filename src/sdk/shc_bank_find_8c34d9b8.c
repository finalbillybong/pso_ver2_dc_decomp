/* SDK pool group 0x8c34d9b8-0x8c34dc88 (Hitachi SHC): handle field getters with
   null-handle reporting, bank/entry validation and bank entry lookup. */
typedef struct Handle {
    char x0;
    char state;
    char pad2[0xc - 2];
    int xc;
    int x10;
    int x14;
    int x18;
    int x1c;
    int x20;
    int x24;
    int x28;
    int x2c;
} Handle;

typedef struct Entry {
    unsigned short key;
    unsigned short len;
    int off;
} Entry;

typedef struct Bank {
    struct Bank *next;
    int x4;
    int count;
    unsigned short n;
    unsigned short pad;
    char info[0x28];
    int base;
    Entry entries[1];
} Bank;

extern Bank *g_table_b_8c530590[];
extern int g_state_f_8c530990;
extern void call_8c34c3ae(char *);
extern void call_8c12b154(void *, void *, int);
extern char str_8c3f3db0[];
extern char str_8c3f3ddc[];
extern char str_8c3f3e08[];
extern char str_8c3f3e34[];
extern char str_8c3f3e64[];
extern char str_8c3f3e8c[];
extern char str_8c3f3eb0[];
extern char str_8c3f3ed4[];

int handle_xc_8c34d9b8(Handle *h)
{
    if (!h) {
        call_8c34c3ae(str_8c3f3db0);
        return -3;
    }
    return h->xc;
}

int handle_x10_8c34d9d4(Handle *h)
{
    if (!h) {
        call_8c34c3ae(str_8c3f3ddc);
        return -3;
    }
    return h->x10;
}

int handle_x18_8c34d9f0(Handle *h, int *out)
{
    if (!h) {
        call_8c34c3ae(str_8c3f3e08);
        *out = 0;
        return -3;
    }
    *out = h->x18;
    return h->x1c;
}

int handle_x20_8c34da20(Handle *h)
{
    if (!h) {
        call_8c34c3ae(str_8c3f3e34);
        return -3;
    }
    return h->x20;
}

int handle_state_8c34da3c(Handle *h)
{
    if (!h) {
        call_8c34c3ae(str_8c3f3e64);
        return -3;
    }
    return h->state;
}

int bank_check_8c34da58(int id, int key)
{
    Bank *b;
    if (id < 0 || id >= 0x100) goto bad;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto range_ok;
range_ok:
    b = g_table_b_8c530590[id];
    if (b == 0) {
bad:
        call_8c34c3ae(str_8c3f3e8c);
        goto out;
    }
    if (key >= 0 && key < b->count) goto ok;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto key_bad;
key_bad:
    call_8c34c3ae(str_8c3f3eb0);
out:
    return -3;
ok:
    return 0;
}

int bank_find_8c34dac0(int id, int key, void *info, int *off, int *len)
{
    int r;
    Bank *b;
    Entry *t;
    Entry *e;
    int i;
    int sum;
    unsigned short *q, *p;
    if (0) { len++; off++; }
    r = bank_check_8c34da58(id, key);
    if (r < 0) {
        *off = -1;
        *len = -1;
        goto done;
    }
    b = g_table_b_8c530590[id];
    if (0) { off++; len++; }
    goto test;
top:
    {
        t = b->entries;
        for (i = 0; i < b->n; i++) {
            e = &t[i];
            if (0) { i = 0; }
            if (e->key == key) {
                call_8c12b154(info, b->info, 0x28);
                *off = e->off;
                *len = e->len;
                goto done;
            }
        }
        b = b->next;
    }
test:
    if (b->next) goto top;
    p = (unsigned short *)b->entries;
    sum = *p++;
    q = p;
    for (i = 0; i < key; i++) sum += q[i];
    call_8c12b154(info, b->info, 0x28);
    *off = sum;
    *len = q[key];
done:
    return r;
}

int bank_find2_8c34db88(int id, int key, void *info, int *base, int *off, int *len)
{
    int r;
    Bank *b;
    Entry *t;
    Entry *e;
    int i;
    int sum;
    unsigned short *q, *p;
    r = bank_check_8c34da58(id, key);
    if (r < 0) {
        *base = 0;
        *off = -1;
        *len = -1;
        goto done;
    }
    b = g_table_b_8c530590[id];
    if (0) { off++; }
    goto test;
top:
    {
        t = b->entries;
        for (i = 0; i < b->n; i++) {
            e = &t[i];
            if (0) { i = 0; }
            if (0) { e++; }
            if (e->key == key) {
                call_8c12b154(info, b->info, 0x28);
                *base = b->base;
                *off = e->off;
                *len = e->len;
                goto done;
            }
        }
        b = b->next;
    }
test:
    if (b->next) goto top;
    p = (unsigned short *)b->entries;
    sum = *p++;
    q = p;
    for (i = 0; i < key; i++) sum += q[i];
    call_8c12b154(info, b->info, 0x28);
    *base = b->base;
    *off = sum;
    *len = q[key];
done:
    &r;
    return r;
}

void set_state_8c34dc5c(int v)
{
    g_state_f_8c530990 = v;
}

void handle_set_x2c_8c34dc62(Handle *h, int v)
{
    if (h->state == 2) call_8c34c3ae(str_8c3f3ed4);
    else h->x2c = v;
}
