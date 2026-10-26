typedef struct Table Table;
typedef struct Object Object;
struct Table {
    short *f00;
    int f04;
};
struct Object {
    char unknown0[0xa0];
    int fa0;
    char unknowna4[0x58];
    short ffc;
    char unknownfe[0x6];
    int f104;
};
extern Table *g_8c505208;
extern int g_8c505214;
extern int current_effect_mode(void);
extern Table *call_8c20af34(int);
#define GET_TABLE(n) ((n) >= g_8c505214 ? (Table *)0 : &g_8c505208[n])
#define LOOKUP_TABLE(out, n, idx) \
    { \
        short v_; \
        Table *t_; \
        v_ = -1; \
        t_ = GET_TABLE(n); \
        if (t_ != 0) { \
            if ((idx) < 0 || (idx) >= t_->f04) { \
                v_ = -1; \
            } else { \
                v_ = *(short *)((char *)t_->f00 + ((idx) << 1)); \
            } \
        } \
        out = v_; \
    }
static inline short lookup_id(int id, int idx)
{
    short v;
    Table *t;
    v = -1;
    t = call_8c20af34(id);
    if (t != 0) {
        if (idx < 0 || idx >= t->f04) {
            v = -1;
        } else {
            v = *(short *)((char *)t->f00 + (idx << 1));
        }
    }
    return v;
}
static inline int mode_class(Object *o)
{
    int m;
    m = current_effect_mode();
    if (m == 0) {
        return 1;
    }
    if (m == 0xf) {
        return 0;
    }
    if (o->fa0 != 0) {
        return 3;
    }
    return 2;
}
static inline int in_range(short s)
{
    int f;
    f = 0;
    if (s >= 0x13 && 0x1d >= s) {
        f = 1;
    }
    return f;
}
int operation_8c211314(Object *o, int a1, int a2, int a3)
{
    int r;
    short v;
    switch (a1) {
    case 0:
        LOOKUP_TABLE(r, 0, a3);
        switch (r) {
        case -0x1e:
            switch (mode_class(o)) {
            case 1:
                r = 4;
                break;
            case 0:
                r = 3;
                break;
            case 3:
                r = 6;
                break;
            case 2:
                r = 5;
                break;
            }
            break;
        }
        break;
    case 1:
    case 2:
    case 6:
        r = -0x3c;
        break;
    case 3:
        v = lookup_id(a2, a3);
        if (in_range(v)) {
            LOOKUP_TABLE(r, 3, v - 0x13);
        } else {
            r = -0x3c;
        }
        break;
    case 5:
        LOOKUP_TABLE(r, 2, a3);
        break;
    case 7:
        LOOKUP_TABLE(r, 3, a3);
        break;
    case 8:
        {
            int i = o->ffc - 0x13;
            LOOKUP_TABLE(r, 4, i);
        }
        break;
    case 9:
        r = -0x32;
        break;
    case 10:
        if (lookup_id(0x89, a3) == 0x450) {
            r = -0x3c;
        } else {
            r = -1;
        }
        break;
    case 21:
        if (o->f104 >= 2) {
            r = -0x3c;
        } else {
            r = 0x88;
        }
        break;
    default:
        r = -1;
        break;
    }
    return r;
}
