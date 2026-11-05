/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0da20c
 * function: operation_8c0da20c
 * language: c
 * reference size: 644 bytes
 * compiled size: 644 bytes (+0.0%)
 * differing lines: 48 of 288 reference instruction lines
 * differing bytes: 32
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct Row Row;
typedef struct Slot Slot;
struct Arg2 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x1c];
    void *f64;
    char unknown68[0x74];
    char *fdc;
};
struct Arg1 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0xa4];
    char *fdc;
    int fe0;
};
struct Slot {
    unsigned short id;
    short idx;
    float d;
};
struct Object {
    char unknown0[0xc];
    int f0c;
    int f10;
    int f14;
    int f18;
    float f1c;
    Vector3 f20;
    float f2c;
    float f30;
    float f34;
    char unknown38[0x8];
    float f40;
    int n;
    int *p;
    Slot *s;
    Slot slots[10];
};
struct Row {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x8];
    int f18;
    Vector3 f1c;
};
struct Arg3 {
    int f00;
    char unknown4[0x2];
    unsigned short f06;
    char unknown8[0x4];
    float f0c;
};
extern int operation_8c02b2a4(void);
extern short operation_8c01d728(void *);
extern int hierarchy_is_active(void *);
extern float squared_distance_xz(void *, void *);
extern int operation_8c0da490(int, int, int);
extern int operation_8c0da4a4(Vector3 *, Vector3 *, Vector3 *, void *, float, float);
extern int call_8c0da5f4(Vector3 *, Vector3 *, void *, float, float);
int operation_8c0da20c(Object *o, Arg1 *a1, Arg2 *a2, Arg3 *a3)
{
    int k;
    int result;
    void *saved;
    int i;
    Row *row;
    int fl;
    float d;
    int n;
    int *p;
    Slot *s;
    int j;
    int s1;
    int s2;
    k = 0;
    result = k;
    if (a2 == 0) {
        return result;
    }
    if (a2->f20 == a1->f20) {
        return result;
    }
    if (operation_8c02b2a4() == 0) {
        s1 = operation_8c01d728(a1);
        s2 = operation_8c01d728(a2);
        if (s2 != s1 && (a1->f34 & 0x60000000) == 0x20000000 && s1 != -1) {
            return result;
        }
    }
    if ((a2->f34 & 0xa00) != 0) {
        return 0;
    }
    if (a1 == 0 || hierarchy_is_active(a1) == 0) {
        return 0;
    }
    fl = a1->f34;
    if ((fl & o->f14) == 0 || (fl & o->f18) != 0) {
        return 0;
    }
    saved = a2->f64;
    for (i = 0; a1->fe0 > i; i++) {
        row = (Row *)(a1->fdc + i * 0x2c);
        if (row == 0) {
            continue;
        }
        row->f18 &= ~0x20000000;
        fl = row->f18;
        if ((fl & 1) == 0) {
            continue;
        }
        if ((fl & o->f0c) == 0) {
            continue;
        }
        if ((fl & o->f10) != 0) {
            continue;
        }
        d = squared_distance_xz(&o->f20, &row->f1c);
        if ((row->f18 & 0x44000) == 0 && a3->f0c > d) {
            a3->f0c = d;
            a3->f06 = a1->f20;
            a3->f00 = i;
        }
        if (d > (o->f2c + row->f0c) * (o->f2c + row->f0c)) {
            continue;
        }
        if (operation_8c02b2a4() != 0 && (row->f18 & 0x14000) != 0 && operation_8c0da490((int)o, (int)&row->f1c, (int)(a2->fdc + 0x1c)) != 0) {
            continue;
        }
        if (operation_8c0da4a4(&o->f20, &row->f1c, &a2->f3c, saved, o->f30, o->f40) == 0) {
            continue;
        }
        if (call_8c0da5f4(&o->f20, &row->f1c, saved, o->f34, o->f40) == 0) {
            continue;
        }
        if (d > o->f1c) {
            o->f1c = d;
        }
        p = &o->n;
        n = *p;
        if (n >= 10) {
            for (j = 0; n >= j; j++) {
                if (((Slot *)((char *)p + (j << 3) + 4))->d == o->f1c) {
                    o->f1c = d;
                    k = j;
                    break;
                }
            }
        } else {
            k = n;
            o->n = n + 1;
        }
        s = (Slot *)((char *)&o->n + (k << 3) + 4);
        s->d = d;
        result = 1;
        s->idx = i;
        s->id = a1->f20;
    }
    return result;
}
