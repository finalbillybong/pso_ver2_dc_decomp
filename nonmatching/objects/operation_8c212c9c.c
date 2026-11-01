/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c212c9c
 * function: operation_8c212c9c
 * language: c
 * reference size: 1700 bytes
 * compiled size: 1700 bytes (+0.0%)
 * differing lines: 180 of 635 reference instruction lines
 * differing bytes: 177
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct View {
    char unknown0[0x38];
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    int f58;
} View;
typedef struct Object {
    char unknown0[0x20];
    int f20;
    View *f24[8];
    char unknown44[0x24];
    View *f68;
    View *f6c;
    View *f70;
    char unknown74[0xc];
    View *f80;
    char unknown84[0x8];
    int f8c;
    int f90;
    char unknown94[0x4];
    int f98;
    int f9c;
    char unknowna0[0xc];
    int fac;
    int fb0;
    int fb4;
    int fb8;
    int fbc;
    char unknownc0[0x4];
    short fc4;
    char unknownc6[0x2];
    short fc8[8];
    int fd8;
} Object;
extern int g_8c2e1604;
extern float g_8c2e1608;
extern float g_8c2e1624;
extern float g_8c2e162c;
extern float g_8c2e1634;
extern float g_8c2e1638;
extern float g_8c2e1648;
extern float g_8c2e1658;
extern float g_8c2e165c;
extern float g_8c2e1660;
extern float g_8c2e1664;
extern float g_8c2e16d0;
extern float g_8c2e16e0;
extern float g_8c2e16e8;
extern int g_8c5051e0;
extern char *g_8c5051f0;
extern int *g_8c505200;
extern short *g_8c50520c;
extern void call_8c210894(void);
extern void create_selection_row_view(Object *, int);
extern View *TWindowDD_WS_Word_create_8c215bec(int, int);
extern void set_fields_8c2163e0(View *);
extern void operation_8c2163bc(View *);
extern void operation_8c215dcc(View *, float);
extern int lookup_entry_8c215d9c(View *);
extern void update_selection_record_view(Object *, short *);
extern void operation_8c215b00(View *, int);
extern int operation_8c211314(Object *, int, int, int);
extern int call_8c2115dc(Object *, int, int, int);
extern int operation_8c2118fc(Object *, int, int, int);
extern int operation_8c211c1c(Object *, int, int, int);
extern int operation_8c211f3c(Object *, int, int, int);
extern void operation_8c215b48(View *, int);
extern void operation_8c215a98(View *, int);
extern void operation_8c215ab8(View *);
static inline View *slot_view(Object *o, View **slots, int n, int w)
{
    View *v;
    if (o->f20 + n >= 8) return 0;
    v = *(View **)((char *)slots + (o->f20 << 2));
    if (v == 0) {
        v = TWindowDD_WS_Word_create_8c215bec(w, (int)g_8c2e1608);
        set_fields_8c2163e0(v);
        operation_8c2163bc(v);
        v->f38 = v->f48 = g_8c2e1658;
        v->f3c = v->f4c = g_8c2e165c;
        v->f40 = v->f50 = g_8c2e1660;
        v->f44 = v->f54 = g_8c2e1664;
        *(View **)((char *)slots + (o->f20 << 2)) = v;
    }
    return v;
}
static inline int dispatch(Object *o, int kind, int w)
{
    int r;
    switch (g_8c5051e0) {
    case 0:
        r = operation_8c211314(o, kind, w, 0);
        break;
    case 1:
    default:
        r = call_8c2115dc(o, kind, w, 0);
        break;
    case 4:
        r = operation_8c2118fc(o, kind, w, 0);
        break;
    case 2:
        r = operation_8c211c1c(o, kind, w, 0);
        break;
    case 3:
        r = operation_8c211f3c(o, kind, w, 0);
        break;
    }
    return r;
}
static inline int name_of(short s)
{
    if (s >= 0x457 && s <= 0x462) return *(int *)((char *)(g_8c5051f0 - 0x115c) + (s << 2));
    if (s == 0x463) return 0;
    return *(int *)((char *)g_8c505200 + (*(short *)((char *)g_8c50520c + (s << 1)) << 2));
}
void operation_8c212c9c(Object *o)
{
    int *a;
    View *v;
    short n;
    short c;
    short s;
    View *p;
    int *m;
    int r;
    int ok;
    int f;
    if (o->fb4 == 0x14 || o->fb4 == 0xc) call_8c210894();
    o->fb8 = 0;
    if (o->fb4 == 1 || o->fb4 == 2 || o->fb4 == 8 || o->fb4 == 0xf || o->fb4 == 0x11) o->fd8 = 0;
    a = (int *)((char *)0x8c335e48 + (o->fb0 << 3));
    m = (int *)((char *)0x8c335e48 + (o->fb4 << 3));
    v = *(View **)((char *)o->f24 + (o->f20 << 2));
    if (v != 0) {
        v->f38 = g_8c2e1648;
        v->f40 = g_8c2e162c;
        v->f58 = g_8c2e1604;
        if ((*a & 4) != 0) create_selection_row_view(o, o->fbc++);
    }
    v = slot_view(o, &o->f24[1], 1, o->f8c);
    if (v != 0) {
        operation_8c215dcc(v, g_8c2e1624);
        if ((*m & 1) != 0) {
            v->f40 = g_8c2e1634;
            if (o->f80 != 0) {
                o->f80->f38 = g_8c2e16e0;
                o->f80->f58 = g_8c2e1604;
            }
        } else {
            v->f40 = g_8c2e162c;
            if (o->f80 != 0) {
                o->f80->f38 = g_8c2e16d0;
                o->f80->f58 = g_8c2e1604;
            }
        }
        if ((*m & 2) != 0) {
            n = lookup_entry_8c215d9c(v);
            if (n == 0x1b8) {
                ok = 0;
            } else {
                f = 0;
                if (n >= 0x13 && n <= 0x1d) f = 1;
                if (f != 0) ok = 0; else ok = 1;
            }
            if (ok != 0) {
                c = o->fc4;
                if (c < 8) {
                    o->fc4 = c + 1;
                    *(short *)((char *)o->fc8 + (c << 1)) = n;
                }
                update_selection_record_view(o, &o->fc4);
                o->f98 = 1;
                o->f9c = n;
            } else {
                if (o->f70 != 0) operation_8c215b00(o->f70, g_8c2e1604);
                o->f98 = 0;
                o->f9c = n;
            }
        }
    }
    if ((*m & 8) == 0) {
      if ((*m & 1) != 0) {
        o->f90 = dispatch(o, o->fb4, o->f8c);
        v = slot_view(o, &o->f24[2], 2, o->f90);
        if (v != 0) operation_8c215dcc(v, g_8c2e16e8);
        p = o->f68;
        if (p != 0) {
            p->f38 = g_8c2e16e8;
            p->f58 = g_8c2e1604;
        }
    } else {
        o->f90 = dispatch(o, o->fb4, o->f8c);
        v = slot_view(o, &o->f24[2], 2, o->f90);
        if (v != 0) operation_8c215dcc(v, g_8c2e1638);
        if (o->f68 != 0) operation_8c215b48(o->f68, g_8c2e1604);
      }
    } else {
        if (o->f68 != 0) operation_8c215b00(o->f68, g_8c2e1604);
    }
    s = *(short *)((char *)m + 4);
    if (s == -1) {
        if (o->f6c != 0) operation_8c215b00(o->f6c, g_8c2e1604);
    } else {
        p = o->f6c;
        if (p != 0) {
            r = name_of(s);
            if (r != 0) {
                operation_8c215a98(p, r);
                operation_8c215ab8(p);
                operation_8c215b48(p, g_8c2e1604);
            }
        }
        if (o->f6c != 0) operation_8c215b48(o->f6c, g_8c2e1604);
    }
    o->fac = 1;
}
