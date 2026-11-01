typedef struct Object {
    char unknown0[0x2];
    unsigned char f02;
} Object;
typedef struct Item {
    char unknown0[0x136];
    unsigned char f136;
    char unknown137[0x1];
    unsigned char f138;
} Item;
extern char *lookup_low_id(int);
extern Item *operation_8c03b55c(void *, int);
float operation_8c1c88b0(Object *o, char *a1)
{
    float r;
    char *p;
    unsigned char c;
    Item *e;
    Item *e2;
    r = 1.0f;
    switch (o->f02) {
    case 0x18:
        {
            int found;
            int i;
            int k1;
            int k2;
            k1 = 0xbcc;
            found = 0;
            k2 = 0x138;
            for (i = 0; i != 12 && found != 1; i++) {
                p = lookup_low_id(i);
                if (p != 0) {
                    e = operation_8c03b55c(p + k1, 2);
                    if (e != 0) {
                        c = *((unsigned char *)e + k2);
                        if (c == 0x19 || c == 0x1a) {
                            r = 1.2f;
                            found = 1;
                        }
                    }
                }
            }
        }
        break;
    case 0x19:
        {
            int k1;
            int k2;
            int found;
            int i;
            k1 = 0xbcc;
            found = 0;
            k2 = 0x138;
            for (i = 0; i != 12 && found != 1; i++) {
                p = lookup_low_id(i);
                if (p != 0) {
                    e = operation_8c03b55c(p + k1, 2);
                    if (e != 0) {
                        c = *((unsigned char *)e + k2);
                        if (c == 0x1a || c == 0x18) {
                            r = 1.2f;
                            found = 1;
                        }
                    }
                }
            }
        }
        break;
    case 0x1a:
        {
            int k1;
            int k2;
            int found;
            int i;
            k1 = 0xbcc;
            found = 0;
            k2 = 0x138;
            for (i = 0; i != 12 && found != 1; i++) {
                p = lookup_low_id(i);
                if (p != 0) {
                    e = operation_8c03b55c(p + k1, 2);
                    if (e != 0) {
                        c = *((unsigned char *)e + k2);
                        if (c == 0x19 || c == 0x18) {
                            r = 1.2f;
                            found = 1;
                        }
                    }
                }
            }
        }
        break;
    case 0x28:
        e = operation_8c03b55c(a1 + 0xbcc, 6);
        e2 = operation_8c03b55c(a1 + 0xbcc, 3);
        if (e != 0 && e2 != 0 && (unsigned char)e->f136 == 1 && (unsigned char)e->f138 == 5 && (unsigned char)e2->f138 == 0x26) {
            r = 1.5f;
        }
        break;
    case 0x26:
        e = operation_8c03b55c(a1 + 0xbcc, 6);
        e2 = operation_8c03b55c(a1 + 0xbcc, 3);
        if (e != 0 && e2 != 0 && (unsigned char)e->f136 == 2 && (unsigned char)e->f138 == 5 && (unsigned char)e2->f138 == 0x24) {
            r = 1.5f;
        }
        break;
    case 0x27:
        e = operation_8c03b55c(a1 + 0xbcc, 6);
        e2 = operation_8c03b55c(a1 + 0xbcc, 3);
        if (e != 0 && e2 != 0 && (unsigned char)e->f136 == 6 && (unsigned char)e->f138 == 6 && (unsigned char)e2->f138 == 0x25) {
            r = 1.5f;
        }
        break;
    }
    return r;
}
