/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d7184
 * function: operation_8c1d7184
 * language: c
 * reference size: 416 bytes
 * compiled size: 416 bytes (+0.0%)
 * differing lines: 104 of 196 reference instruction lines
 * differing bytes: 58
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Frame {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    char unknownc[0x4];
} Frame;
typedef struct Gauge {
    char unknown0[0x20];
    int f20;
    float f24;
} Gauge;
typedef struct Panel {
    int *f00;
    void *f04;
    void *f08;
    char unknownc[0x4];
    Gauge *f10;
    Gauge *f14;
    char unknown18[0x4];
    Gauge *f1c;
    Gauge *f20;
    char unknown24[0x4];
    Gauge *f28;
    Gauge *f2c;
    char unknown30[0x4];
    Gauge *f34;
    Gauge *f38;
    int *f3c;
} Panel;
typedef struct Object {
    char unknown0[0x30];
    Panel *f30;
    char unknown34[0x3c];
    void *f70;
} Object;
extern void initialize_fields_8c207358(void *);
extern void call_8c1c8ce4(void *, Frame *);
extern void operation_8c1e5f2c(void *, int);
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
int operation_8c1d7184(Object *o)
{
    Frame frame;
    Panel *p;
    void *a4;
    void *a8;
    int *q;
    int changed;
    initialize_fields_8c207358(&frame);
    changed = 0;
    call_8c1c8ce4(o->f70, &frame);
    p = o->f30;
    a4 = p->f04;
    a8 = p->f08;
    q = p->f3c;
    *p->f00 &= -3;
    *q |= 2;
    operation_8c1e5f2c(a4, frame.f02);
    operation_8c1e5f2c(a8, frame.f00);
    {
        Gauge *lim = o->f30->f10;
        Gauge *val = o->f30->f14;
        int v = frame.f04;
        short t;
        if ((short)call_8c18e768(v, 100) > lim->f20) {
            val->f24 = 100.0f;
            changed = 1;
        } else {
            t = call_8c18e8a0(v, 100);
            if (val->f24 != (float)t) {
                changed = 1;
            }
            val->f24 = (float)t;
        }
    }
    {
        Gauge *lim = o->f30->f1c;
        Gauge *val = o->f30->f20;
        int v = frame.f06;
        short t;
        if ((short)call_8c18e768(v, 100) > lim->f20) {
            val->f24 = 100.0f;
            changed = 1;
        } else {
            t = call_8c18e8a0(v, 100);
            if (val->f24 != (float)t) {
                changed = 1;
            }
            val->f24 = (float)t;
        }
    }
    {
        Gauge *lim = o->f30->f28;
        Gauge *val = o->f30->f2c;
        int v = frame.f08;
        short t;
        if ((short)call_8c18e768(v, 100) > lim->f20) {
            val->f24 = 100.0f;
            changed = 1;
        } else {
            t = call_8c18e8a0(v, 100);
            if (val->f24 != (float)t) {
                changed = 1;
            }
            val->f24 = (float)t;
        }
    }
    {
        Gauge *lim = o->f30->f34;
        Gauge *val = o->f30->f38;
        int v = frame.f0a;
        short t;
        if ((short)call_8c18e768(v, 100) > lim->f20) {
            val->f24 = 100.0f;
            changed = 1;
        } else {
            t = call_8c18e8a0(v, 100);
            if (val->f24 != (float)t) {
                changed = 1;
            }
            val->f24 = (float)t;
        }
    }
    return changed;
}
