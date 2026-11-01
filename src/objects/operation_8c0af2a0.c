typedef struct Item {
    unsigned short id;
    short v;
    int x;
} Item;
typedef struct List {
    int n;
    Item item[1];
} List;
typedef struct Entry {
    char unknown0[0xa0];
    List l;
} Entry;
typedef struct Arg1 {
    char unknown0[0x3b8];
    int f3b8;
    char f3bc[4];
} Arg1;
extern void operation_8c24766c(void *);
extern Entry *find_entry_8c0d9e2c(int, int, int);
extern void call_8c247720(void *, int, unsigned short, short);
extern void operation_8c24770c(void *, int);
void operation_8c0af2a0(int a0, void *a1)
{
    Arg1 *o;
    void *p;
    int k;
    Entry *t;
    Item *e;
    int i;
    unsigned short none;
    if (a1 == 0) {
        return;
    }
    o = (Arg1 *)a1;
    if (o->f3b8 == 0) {
        return;
    }
    p = (char *)o + 0x3bc;
    if (p == 0) {
        return;
    }
    operation_8c24766c(p);
    t = find_entry_8c0d9e2c(o->f3b8, 3, a0);
    if (t == 0) {
        return;
    }
    switch (a0) {
    case 0:
        e = (Item *)((char *)&t->l + 4);
        if (e->id == 0xffff) {
            return;
        }
        call_8c247720(p, 0, e->id, e->v);
        operation_8c24770c(p, 1);
        return;
    case 2:
        e = (Item *)((char *)&t->l + 4);
        if (e->id == 0xffff) {
            return;
        }
        call_8c247720(p, 0, e->id, e->v);
        operation_8c24770c(p, 1);
        return;
    case 3:
        e = (Item *)((char *)&t->l + 4);
        if (e->id == 0xffff) {
            return;
        }
        call_8c247720(p, 0, e->id, e->v);
        operation_8c24770c(p, 1);
        return;
    case 4:
        e = (Item *)((char *)&t->l + 4);
        if (e->id == 0xffff) {
            return;
        }
        call_8c247720(p, 0, e->id, e->v);
        operation_8c24770c(p, 1);
        return;
    case 6:
        e = (Item *)((char *)&t->l + 4);
        if (e->id == 0xffff) {
            return;
        }
        call_8c247720(p, 0, e->id, e->v);
        operation_8c24770c(p, 1);
        return;
    case 7:
        none = 0xffff;
        k = 0;
        for (i = 0; i < t->l.n; i++) {
            e = (Item *)((char *)&t->l + (k << 3) + 4);
            if (e->id != none) {
                call_8c247720(p, k, e->id, e->v);
                k++;
            }
        }
        operation_8c24770c(p, k);
        return;
    case 9:
        e = (Item *)((char *)&t->l + 4);
        if (e->id == 0xffff) {
            return;
        }
        call_8c247720(p, 0, e->id, e->v);
        operation_8c24770c(p, 1);
        return;
    case 11:
        e = (Item *)((char *)&t->l + 4);
        if (e->id == 0xffff) {
            return;
        }
        call_8c247720(p, 0, e->id, e->v);
        operation_8c24770c(p, 1);
        return;
    case 12:
        e = (Item *)((char *)&t->l + 4);
        if (e->id == 0xffff) {
            return;
        }
        call_8c247720(p, 0, e->id, e->v);
        operation_8c24770c(p, 1);
        return;
    case 10:
    case 13:
    case 15:
    case 16:
        a0 = 0;
        for (i = 0; i < t->l.n; i++) {
            e = (Item *)((char *)&t->l + (a0 << 3) + 4);
            call_8c247720(p, a0, e->id, e->v);
            a0++;
        }
        operation_8c24770c(p, a0);
        return;
    case 17:
        e = (Item *)((char *)&t->l + 4);
        if (e->id == 0xffff) {
            return;
        }
        call_8c247720(p, 0, e->id, e->v);
        operation_8c24770c(p, 1);
        return;
    case 18:
        e = (Item *)((char *)&t->l + 4);
        if (e->id == 0xffff) {
            return;
        }
        call_8c247720(p, 0, e->id, e->v);
        operation_8c24770c(p, 1);
        return;
    }
}
