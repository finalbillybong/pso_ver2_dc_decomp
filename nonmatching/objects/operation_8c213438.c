/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c213438
 * function: operation_8c213438
 * language: c
 * reference size: 804 bytes
 * compiled size: 804 bytes (+0.0%)
 * differing lines: 10 of 313 reference instruction lines
 * differing bytes: 6
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Rec {
    int flags;
    short id;
    short pad;
} Rec;
typedef struct Item {
    char unknown0[0x38];
    float f38;
    char unknown3c[0x4];
    float f40;
    char unknown44[0x14];
    int f58;
} Item;
typedef struct Object {
    char unknown0[0x20];
    int n;
    Item *items[7];
    int ids[9];
    Item *f64;
    Item *f68;
    Item *f6c;
    Item *f70;
    char unknown74[0xc];
    Item *f80;
    char unknown84[0x28];
    int fac;
    int fb0;
    char unknownb4[0x8];
    int fbc;
    char unknownc0[0x4];
    short fc4;
    char unknownc6[0x2];
    short fc8[8];
} Object;
extern int g_8c2e1604;
extern float g_8c2e1624;
extern float g_8c2e162c;
extern float g_8c2e1634;
extern float g_8c2e1638;
extern float g_8c2e1640;
extern float g_8c2e1658;
extern float g_8c2e16d0;
extern float g_8c2e16e0;
extern float g_8c2e16e8;
extern char *g_8c5051f0;
extern char *g_8c505200;
extern char *g_8c50520c;
extern void operation_8c215fc0(void *);
extern void operation_8c215dcc(void *, float);
extern void operation_8c215b00(void *, int);
extern void operation_8c215b48(void *, int);
extern void update_selection_record_view(void *, void *);
extern void operation_8c215a98(void *, int);
extern void operation_8c215ab8(void *);
void operation_8c213438(Object *o)
{
    Item *e;
    Rec *ra;
    Rec *rb;
    int f;
    int v;
    short id;
    Item *q;
    int k;
    e = 0;
    ra = (Rec *)(0x8c335e48 + (o->fb0 << 3));
    k = o->n;
    rb = (Rec *)(0x8c335e48 + (*(int *)((char *)o->ids + (k << 2)) << 3));
    if (k > 0 && (e = *(Item **)((char *)&o->n + (k << 2))) != 0) {
        operation_8c215fc0(e);
        operation_8c215dcc(e, g_8c2e1624);
        e->f40 = g_8c2e162c;
    }
    if (e != 0) {
        if (rb->flags & 1) {
            e->f40 = g_8c2e1634;
            if (o->f80 != 0) {
                o->f80->f38 = g_8c2e16e0;
                o->f80->f58 = g_8c2e1604;
            }
        } else {
            e->f40 = g_8c2e162c;
            if (o->f80 != 0) {
                o->f80->f38 = g_8c2e16d0;
                o->f80->f58 = g_8c2e1604;
            }
        }
    }
    e = *(Item **)((char *)o->items + (o->n << 2));
    if (e != 0) {
        f = rb->flags;
        if (f & 8) {
            if (e != 0) {
                operation_8c215dcc(e, g_8c2e1658);
            }
            if (o->f68 != 0) {
                operation_8c215b00(o->f68, g_8c2e1604);
            }
        } else if (f & 1) {
            operation_8c215dcc(e, g_8c2e16e8);
            e->f40 = g_8c2e1640;
            q = o->f68;
            if (q != 0) {
                q->f38 = g_8c2e16e8;
                q->f58 = g_8c2e1604;
            }
        } else {
            operation_8c215dcc(e, g_8c2e1638);
            e->f40 = g_8c2e1640;
            if (o->f68 != 0) {
                operation_8c215b48(o->f68, g_8c2e1604);
            }
        }
        if (ra->flags & 2) {
            if (o->fc4 > 0) {
                *(short *)((char *)o->fc8 + (--o->fc4 << 1)) = -1;
            }
            update_selection_record_view(o, &o->fc4);
        }
    }
    if (*(Item **)((char *)&o->items[1] + (o->n << 2)) != 0) {
        operation_8c215dcc(*(Item **)((char *)&o->items[1] + (o->n << 2)), g_8c2e1658);
    }
    if (!(rb->flags & 2) && o->f70 != 0) {
        operation_8c215b00(o->f70, g_8c2e1604);
    }
    if ((rb->flags & 4) && o->fbc > 0 && (q = *(Item **)((char *)&o->f64 + ((o->fbc + 3) << 2))) != 0) {
        operation_8c215b00(q, g_8c2e1604);
    }
    id = rb->id;
    if (id == -1) {
        if (o->f6c != 0) {
            operation_8c215b00(o->f6c, g_8c2e1604);
        }
    } else {
        e = o->f6c;
        if (e != 0) {
            if (id >= 0x457 && 0x462 >= id) {
                v = *(int *)(g_8c5051f0 - 0x115c + (id << 2));
            } else if (id == 0x463) {
                v = 0;
            } else {
                v = *(int *)(g_8c505200 + (*(short *)(g_8c50520c + (id << 1)) << 2));
            }
            if (v != 0) {
                operation_8c215a98(e, v);
                operation_8c215ab8(e);
                operation_8c215b48(e, g_8c2e1604);
            }
        }
        if (o->f6c != 0) {
            operation_8c215b48(o->f6c, g_8c2e1604);
        }
    }
    o->fac = 2;
}
