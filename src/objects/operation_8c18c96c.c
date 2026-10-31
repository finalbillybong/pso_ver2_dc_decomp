typedef struct Effect {
    char unknown0[0x19];
    unsigned char f19;
} Effect;
typedef struct Res {
    char unknown0[0x6c];
    Effect *f6c;
} Res;
typedef struct Table {
    char unknown0[0x2c];
    char *f2c;
} Table;
typedef struct Owner {
    char unknown0[0x34];
    int f34;
} Owner;
extern int g_8c418248;
extern Table *g_8c467180;
extern int g_8c4dc800;
extern int lookup_low_id(int);
extern int current_effect_mode(void);
extern int operation_8c01c25c(void);
extern Res *operation_8c18ccd8(int, int, int);
extern void operation_8c19a054(Effect *);
Res *operation_8c18c96c(int a0, int a1, int a2)
{
    Owner *q;
    int flag;
    int mode;
    Res *r;
    int t;
    Effect *e;
    flag = 1;
    t = lookup_low_id(g_8c418248);
    if (t == 0) {
        return 0;
    }
    q = (Owner *)(t + 0x7e4);
    if (q == 0) {
        return 0;
    }
    mode = current_effect_mode();
    switch ((short)a2) {
    case 6:
    case 18:
        if (mode == 0xf) {
            flag = 0;
        }
        break;
    case 10:
        if (g_8c4dc800 != 1) {
            a2 = 0x15;
            flag = 0;
        }
        break;
    case 2:
        if ((q->f34 & 0x10) != 0) {
            return 0;
        }
        if (mode == 0xf || mode == 0) {
            a2 = 0x13;
        }
        break;
    case 8:
        if (mode == 0xf || mode == 0) {
            a2 = 0x14;
            flag = 0;
        }
        break;
    case 5:
        if (operation_8c01c25c() == 0x10) {
            a2 = 0x11;
        }
        break;
    }
    r = operation_8c18ccd8(*(int *)((char *)(g_8c467180->f2c + 0x144) + ((short)a2 << 2)), a1, a2);
    if (flag == 0) {
        e = r->f6c;
        e->f19 |= 1;
        operation_8c19a054(e);
    }
    return r;
}
