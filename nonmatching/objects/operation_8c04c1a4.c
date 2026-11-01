/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04c1a4
 * function: operation_8c04c1a4
 * language: c
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 12 of 99 reference instruction lines
 * differing bytes: 33
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Frame {
    int f00;
    int f04;
    int f08;
} Frame;
typedef struct Object {
    short *list;
    int count;
    char unknown8[0x8];
    int f10;
} Object;
extern int call_8c04bdf8(Object *, int, Frame *, void *, void *);
static inline int find_8c04c1a4(Object *o, int c, Frame *frame)
{
    int i;
    short *p;
    int a;
    i = 0;
    p = o->list;
    while ((unsigned short)*p != 0 || i == o->count) {
        a = i == o->count ? c : *p++;
        i++;
        if (call_8c04bdf8(o, a, frame, &frame->f04, &frame->f08) != 0) {
            return 1;
        }
    }
    return 0;
}
void operation_8c04c1a4(Object *o, signed char *s)
{
    Frame frame;
    int c;
    unsigned short *d;
    unsigned short *q;
    int n;
    if (s != 0) {
    while (*s != 0) {
        c = (unsigned char)*s;
        s++;
        frame.f08 = 0;
        frame.f04 = 0;
        frame.f00 = 0;
        if (find_8c04c1a4(o, c, &frame) != 0) {
            return;
        }
        q = (unsigned short *)((char *)o->list + (o->count << 1));
        n = 0;
        while (*q != 0) {
            q++;
            n++;
        }
        d = q + 1;
        do {
            *d = *q;
            q--;
            d--;
        } while (n-- != 0);
        o->f10 += 1;
        *(short *)((char *)o->list + (o->count << 1)) = c;
        o->count += 1;
    }
    }
}
