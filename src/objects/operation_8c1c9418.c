typedef struct Tbl4 {
    unsigned char b[4];
} Tbl4;
typedef struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
    char unknown4[0x1];
    unsigned char f05;
    unsigned char f06;
} Object;
extern Tbl4 g_8c328eb4;
extern char operation_8c1c9398(Object *);
extern unsigned char operation_8c15842c(char);
extern unsigned char call_8c18e8a0(int, int);
#define SET_VAL(v) { \
    unsigned char sv = (v); \
    switch (mode) { \
    case 0: \
        o->f05 = sv; \
        break; \
    case 1: \
        o->f03 = sv; \
        break; \
    case 3: \
        o->f03 = sv; \
        break; \
    case 2: \
        o->f02 = sv + 0xc8; \
        break; \
    } \
}
void operation_8c1c9418(Object *o)
{
    Tbl4 tbl;
    unsigned char r;
    unsigned char tag;
    int ok;
    unsigned char f;
    unsigned char v;
    unsigned char w;
    int mode;
    tbl = g_8c328eb4;
    r = operation_8c1c9398(o);
    tag = o->tag;
    if (tag == 0) {
        ok = o->f01 < r;
    } else {
        ok = r != 0;
    }
    switch (ok) {
    case 0:
        mode = tag;
        switch (mode) {
        case 0:
            f = o->f01;
            if (!(f >= 0x27)) return;
            if (0x89 > f) {
                SET_VAL(f)
                o->f01 = operation_8c15842c(o->f01);
                if (o->f01 != 0) return;
                o->f01 = 0xf;
                return;
            }
            switch (mode) {
            case 0:
                v = o->f05;
                break;
            case 1:
                v = o->f03;
                break;
            case 3:
                v = o->f03;
                break;
            case 2:
                w = o->f02;
                if (w > 0xc8) {
                    v = w - 0xc8;
                    break;
                }
                v = 0;
                break;
            default:
                v = 0;
                break;
            }
            if (!(v < f)) return;
            SET_VAL(f)
            if (v != 0) {
                o->f01 = v;
                return;
            }
            o->f01 = 0xf;
            return;
        case 1:
            v = o->f02;
            if (!(tbl.b[o->f01] <= v)) return;
            SET_VAL(v)
            o->f02 = 0;
            return;
        case 3:
            f = o->f01;
            if (f < 0xf) {
                switch (f) {
                case 2:
                    v = o->f02;
                    if (!(v > 0xe)) return;
                    SET_VAL(v - 0xe)
                    o->f02 = call_8c18e8a0(o->f02, 0xf);
                    return;
                case 0xe:
                    SET_VAL(o->f02 + 1)
                    o->f01 = 0xd;
                    o->f02 = 6;
                    return;
                }
            } else {
                SET_VAL(o->f02 + 1)
                o->f06 = o->f01;
                o->f01 = 0xd;
                o->f02 = 7;
                return;
            }
            break;
        case 2:
            f = o->f01;
            if (f >= 0x2c) {
                SET_VAL(f - 0x2b)
                o->f01 = 0;
            }
            break;
        }
    }
}
