/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c105534
 * function: operation_8c105534
 * language: c
 * reference size: 144 bytes
 * compiled size: 144 bytes (+0.0%)
 * differing lines: 24 of 63 reference instruction lines
 * differing bytes: 54
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Frame {
    char unknown0[0xe8];
} Frame;
typedef struct Packed {
    unsigned int size;
    unsigned int seed;
} Packed;
typedef struct Trailer {
    int f00;
    unsigned int f04;
    char unknown8[0x8];
    int f10;
} Trailer;
extern void construct_random_state(void *);
extern void seed_random_state(void *, unsigned int);
extern void call_8c037eb8(Frame *, void *, unsigned int);
extern void call_8c0787cc(void *, char *);
int operation_8c105534(Packed *o, char *a1, unsigned int a2)
{
    Frame frame;
    unsigned int size;
    unsigned int seed;
    char *p;
    Trailer *tail;
    unsigned short *offs;
    int *q;
    unsigned int n;
    unsigned int i;
    p = (char *)o + 4;
    size = o->size;
    seed = *(unsigned int *)p;
    p += 4;
    if (size > a2) {
        return 0;
    }
    construct_random_state(&frame);
    seed_random_state(&frame, seed);
    call_8c037eb8(&frame, p, size);
    call_8c0787cc(p, a1);
    tail = (Trailer *)(a1 + size - 0x20);
    offs = (unsigned short *)(a1 + tail->f00);
    n = tail->f04;
    q = (int *)a1;
    for (i = 0; i < n; i++) {
        q = (int *)((char *)q + (*offs++ << 2));
        *q += (int)a1;
    }
    return tail->f10 + (int)a1;
}
