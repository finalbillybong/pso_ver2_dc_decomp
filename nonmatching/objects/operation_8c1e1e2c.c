/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e1e2c
 * function: operation_8c1e1e2c
 * language: c
 * reference size: 556 bytes
 * compiled size: 556 bytes (+0.0%)
 * differing lines: 26 of 253 reference instruction lines
 * differing bytes: 9
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation; review found and fixed behaviour defects of the generator draft; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    char unknown0[0x45];
    char f45;
    char unknown46[0x46];
};
struct Object {
    char unknown0[0xb0];
    int fb0;
    int fb4;
};
extern void call_8c1f55a8(void *, Frame *);
extern void call_8c1f5406(void *, Frame *);
extern void call_8c1f55c6(void *, Frame *);
extern void call_8c1f5602(void *, Frame *);
extern void call_8c1f55e4(void *, Frame *);
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
void operation_8c1e1e2c(Object *o, char *a1)
{
    Frame frame;
    char *p;
    int c;
    unsigned short k;
    unsigned short *t;
    unsigned short w;
    p = a1;
    while (*p != 0) {
        c = *p++;
        if (((unsigned short)c & 0xe0) == 0x80 || ((unsigned short)c & 0xe0) == 0xe0) {
            c = ((unsigned short)c << 8) | (*p++ & 0xff);
        }
        if ((unsigned short)c == 0x5c) return;
        if (!((unsigned short)c < 0xa0 || (unsigned short)c > 0xff)) return;
    }
    call_8c1f55a8(&frame.f45, &frame);
    if (icmp((unsigned char *)a1, (unsigned char *)&frame.f45) != 0) {
        o->fb0 += 1;
        o->fb4 += 1;
        call_8c1f5406(&frame.f45, &frame);
        return;
    }
    call_8c1f55c6(&frame.f45, &frame);
    if (icmp((unsigned char *)a1, (unsigned char *)&frame.f45) != 0) {
        o->fb0 += 1;
        o->fb4 += 1;
        call_8c1f5406(&frame.f45, &frame);
        return;
    }
    call_8c1f5602(&frame.f45, &frame);
    if (icmp((unsigned char *)a1, (unsigned char *)&frame.f45) != 0) {
        o->fb0 += 1;
        o->fb4 += 1;
        call_8c1f5406(&frame.f45, &frame);
        return;
    }
    p = a1;
    while (*p != 0) {
        k = *p++ & 0xffff;
        if ((k & 0xe0) == 0x80) {
            if ((k & 0xe0) == 0x80) {
                k = (k << 8) | (*p++ & 0xff);
                for (t = (unsigned short *)0x8c32b5c4; (w = *t) != 0; t++) {
                    if (k == w) return;
                }
            }
        }
    }
    call_8c1f55e4(&frame.f45, &frame);
    if (icmp((unsigned char *)a1, (unsigned char *)&frame.f45) != 0) {
        o->fb0 += 1;
        o->fb4 += 1;
        call_8c1f5406(&frame.f45, &frame);
    }
}
