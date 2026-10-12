typedef struct Object {
    int tag;
    int value;
} Object;
int classify_range_8c0e76d4(Object *o)
{
    int kind = o->tag;
    int d;
    if (kind > 0x11) {
        return 4;
    }
    if (kind == 0xf) {
        return 2;
    }
    if (kind == 0xd) {
        switch (o->value) {
        case 8:
        case 9:
        case 10:
            return 1;
        }
        return 0;
    }
    d = o->value - kind;
    if (d >= 0) {
        return 1;
    }
    return d < 0 ? 0 : 4;
}
