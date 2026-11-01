/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c256504
 * function: operation_8c256504
 * language: c
 * reference size: 304 bytes
 * compiled size: 304 bytes (+0.0%)
 * differing lines: 118 of 116 reference instruction lines
 * differing bytes: 193
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x28];
    float f6c;
    char unknown70[0x18];
    int f88[3];
    char unknown94[0x2bc];
    float f350;
    int f354;
    short f358;
    char unknown35a[0x2];
    char f35c[0x10];
    float f36c;
    char unknown370[0x10];
    int f380[3];
    unsigned short f38c[3];
    unsigned short f392[3];
} Object;
extern int g_8c418248;
extern int g_8c513300;
extern void memset_8c12b880(void *, int, int);
extern void call_8c043ca4(Object *, void *);
void operation_8c256504(Object *o)
{
    float r;
    int i;
    int w;
    int lo;
    int hi;
    int p;
    unsigned short lim;
    int off;
    int m;
    int k;
    unsigned short *sp;
    int *slot;
    r = o->f6c;
    o->f350 = r * r;
    o->f354 = 0;
    o->f358 = g_8c418248;
    memset_8c12b880(o->f35c, 0, 0x24);
    o->f36c = o->f40 / 0.92f;
    call_8c043ca4(o, o->f35c);
    lim = 0x100;
    m = 0xffff;
    k = 0x38c;
    for (i = 0; i != 3; i++) {
        off = i << 2;
        w = *(int *)((char *)o->f88 + off);
        slot = (int *)((char *)o + off + 0x380);
        lo = w & m;
        hi = (unsigned int)(w & 0xffff0000) >> 16;
        p = *(int *)((char *)0x8c513304 + off);
        if (p == 0) {
            if ((unsigned short)lo < 0x18) {
                *slot = g_8c513300 + (unsigned short)lo * 0x58 + 0x1c;
            } else {
                *slot = 0;
            }
        } else {
            *slot = p;
        }
        sp = (unsigned short *)((char *)o + (i << 1) + k);
        if (lim > (unsigned short)hi) {
            *sp = hi;
        } else {
            *sp = m;
        }
        *(unsigned short *)((char *)o->f392 + (i << 1)) = lo;
    }
}
