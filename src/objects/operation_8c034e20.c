typedef struct Row {
    short s[22];
} Row;
typedef struct Object {
    char name[0x18];
    unsigned int f18;
    char unknown1c[0x14];
    char f30;
    char f31;
    char f32;
    char unknown33[0x1];
    int f34;
    short f38[8];
    float f48;
    float f4c;
} Object;
extern Row g_8c2f5b38[];
extern void operation_8c09abf4(void *);
extern int call_8c18e8a0(int, int);
static inline int has_nul(char *s)
{
    int found;
    char *e;
    char *p;
    found = 0;
    e = s + 13;
    for (p = s; p < e; p++) {
        if (*p == 0) {
            found = 1;
            break;
        }
    }
    return found;
}
static inline int has_ctrl(char *s)
{
    int r;
    char c;
    r = 0;
    while ((c = *s) != 0) {
        if (c < 0x20 || c >= 0x7f) {
            r = 1;
        }
        s++;
    }
    return r;
}
static inline int is_blank(char *s)
{
    while (*s == 0x20) {
        s++;
    }
    return *s == 0;
}
static inline int fix_uv(Object *o)
{
    if (0.0f > o->f48 || !(1.0f > o->f48) || 0.0f > o->f4c || !(1.0f > o->f4c)) {
        o->f48 = 0.0f;
        o->f4c = 0.0f;
        return 1;
    }
    return 0;
}
int operation_8c034e20(Object *o)
{
    Row *row;
    int ok;
    int flags;
    int bad;
    int i;
    int t;
    int v;
    int w;
    int k;
    ok = 1;
    flags = 0;
    operation_8c09abf4(o);
    bad = 0;
    if (o->name[0] == 0) {
        bad = 1;
    }
    if (!bad && !has_nul(o->name)) {
        bad = 1;
    }
    if (!bad) {
        char *q;
        char c;
        q = o->name;
        while ((c = *q) != 0) {
            if (c < 0x20 || c >= 0x7f) {
                bad = 1;
            }
            q++;
        }
    }
    if (!bad && is_blank(o->name)) {
        bad = 1;
    }
    if (bad) {
        o->name[2] = '-';
        o->name[1] = '-';
        o->name[0] = '-';
        o->name[3] = 0;
        ok = 0;
    }
    t = 0xff000000;
    if ((t & o->f18) != t) {
        o->f18 |= t;
    }
    if (o->f30 == -1) {
        o->f30 = 0;
    }
    if (o->f30 < 0 || o->f30 >= 10) {
        o->f30 = call_8c18e8a0(o->f30, 10);
        ok = 0;
        flags |= 1;
    }
    if (o->f31 < 0 || o->f31 >= 9) {
        o->f31 = 0;
        ok = 0;
        flags |= 2;
    }
    t = *(int *)((o->f31 << 2) + 0x8c2ec030);
    if (o->f34 != t) {
        o->f34 = t;
        flags |= 4;
        ok = 0;
    }
    row = &g_8c2f5b38[o->f31];
    for (i = 0; i < 5; i++) {
        k = i << 1;
        v = *(short *)((char *)o->f38 + k);
        w = *(short *)((char *)row + k);
        if (v < 0 || (w == 0 && v != 0) || (w > 0 && v >= w)) {
            *(short *)((char *)o->f38 + k) = 0;
            ok = 0;
            flags |= 8;
        }
    }
    for (; i < 8; i++) {
        k = i << 1;
        v = *(short *)((char *)o->f38 + k);
        if (v < 0 || v > 0xff) {
            *(short *)((char *)o->f38 + k) = 0;
            ok = 0;
        }
    }
    if (fix_uv(o)) {
        ok = 0;
    }
    if (flags) {
        o->f32 |= flags;
    }
    return ok;
}
