/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1eccfc
 * function: handle_6x48_cast_technique_complete_8c1eccfc
 * language: c
 * reference size: 488 bytes
 * compiled size: 488 bytes (+0.0%)
 * differing lines: 138 of 198 reference instruction lines
 * differing bytes: 151
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Object {
    char unknown0[0x2];
    unsigned short f02;
    short f04;
    short f06;
} Object;
typedef struct Low {
    char unknown0[0x10];
    int f10;
    char unknown14[0x2f8];
    short f30c;
    char unknown30e[0x42];
    int f350;
    char unknown354[0x68];
    char f3bc;
    char f3bd;
    char unknown3be[0x2];
    short f3c0;
    char unknown3c2[0x6];
    int f3c8;
    char unknown3cc[0x38];
    char f404[0x20];
} Low;
typedef struct Def {
    char unknown0[0x38];
    int f38;
} Def;
extern int g_8c418248;
extern int g_8c44be90;
extern int g_8c4627c8;
extern Low *lookup_low_id(int);
extern int object_ready(void *);
extern int operation_8c247844(void *);
extern Def *call_8c0adc1c(int, int);
extern int call_8c0ae970(int, int, Low *);
static inline void apply(Low *t, short k, char v)
{
    int c = v;
    t->f3c8 = call_8c0adc1c(k, c)->f38;
    t->f30c = 4;
    call_8c0ae970(k, c, t);
}
void handle_6x48_cast_technique_complete_8c1eccfc(Object *o)
{
    int c;
    Low *t;
    short k;
    int f;
    int v;
    unsigned short id;
    int a;
    int b;
    id = o->f02;
    a = 0;
    b = 0;
    c = 0;
    if (g_8c4627c8 == 0 && o->f02 == g_8c418248) {
        c = 1;
    }
    if (c == 0 && o->f04 >= 0) {
        b = 1;
    }
    if (b != 0 && o->f06 >= 0) {
        a = 1;
    }
    if (a == 0) {
        return;
    }
    t = lookup_low_id(id);
    if (t == 0) {
        return;
    }
    if (object_ready(t) == 0) {
        return;
    }
    a = 0;
    b = 0;
    c = 0;
    if (g_8c4627c8 == 0 && o->f02 == g_8c418248) {
        c = 1;
    }
    if (c == 0 && o->f04 >= 0) {
        b = 1;
    }
    if (b != 0 && o->f06 >= 0) {
        a = 1;
    }
    if (a == 0) {
        return;
    }
    f = 0;
    if (o->f04 >= 0 && 0x13 > o->f04) {
        f = 1;
    }
    k = o->f04;
    if (f == 0) {
        k = 0;
    }
    t->f3c0 = k;
    f = 0;
    if ((char)o->f06 >= -1 && 0x1d >= (char)o->f06) {
        f = 1;
    }
    v = o->f06;
    if (f == 0) {
        v = 0;
    }
    if ((char)v == 0xe) {
        v += operation_8c247844(&t->f3bc);
    }
    t->f3bd = v;
    t->f404[k] = v;
    switch (k) {
    case 10:
    case 11:
    case 12:
    case 13:
    case 15:
    case 16:
        apply(t, k, v);
        return;
    }
    f = (t->f350 & 4) != 0;
    if (f == 0 && t->f10 == g_8c44be90) {
        apply(t, k, v);
    }
}
