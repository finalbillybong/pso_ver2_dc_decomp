typedef struct Key {
    int a;
    int b;
} Key;
typedef struct Entry {
    unsigned short a;
    unsigned short b;
    char data[0x1c];
} Entry;
typedef struct Table {
    char unknown0[0x1];
    unsigned char count;
    char unknown2[0x2];
    Entry entries[1];
} Table;
typedef struct Object {
    char unknown0[0x80];
    Table *f80;
} Object;
void *operation_8c1d45d0(Object *o, Key *a1, int a2)
{
    int i;
    Table *t;
    int n;
    Key *pm2;
    Entry *e;
    pm2 = (Key *)((char *)a1 + (a2 << 3));
    t = o->f80;
    a1 = pm2;
    a2 = (int)(int)(unsigned char)((int)t->count);
    e = t->entries;
    n = a2;
    i = 0;
    while (n > i) {
        a2 = (int)(int)e->a;
        if (a2 == a1->a) {
            if ((int)(int)(int)e->b == a1->b) {
                return e->data;
            }
        }
        i++, e++;
    }
    return 0;
}
