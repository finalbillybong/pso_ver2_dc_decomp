/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0276c0
 * function: operation_8c0276c0
 * language: c
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 54 of 83 reference instruction lines
 * differing bytes: 33
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x32e];
    int f350;
};
typedef struct Link {
    short f00;
    short f02;
} Link;
extern int g_8c418248;
static inline char *lookup_8c0276c0(int id)
{
    char *p;
    if (id == 0xffff) {
        p = 0;
    } else if (id >= 0xc) {
        p = 0;
    } else {
        p = *(char **)((char *)0x8c41ce2c + (id << 2));
    }
    return p;
}
void operation_8c0276c0(Object *o)
{
    int v1;
    int off;
    int v2;
    unsigned short *link;
    int i;
    unsigned short id;
    char *p;
    int *f;
    Link *s;
    int bit;
    int mask;
    int neg;
    o->f350 &= -0x401;
    v1 = (o->f20 == g_8c418248);
    if (v1 != 0) {
        off = 0x418;
        v2 = 0xffff;
        link = (unsigned short *)((char *)o + off + 0x78);
        bit = 0x80000000;
        mask = -0x10;
        neg = -1;
        for (i = 0; i < 4; i++) {
            id = *link;
            if (id != (unsigned short)v2) {
                p = lookup_8c0276c0(id);
                if (p != 0) {
                    p += off;
                    f = (int *)(p + (id << 2) + 0x48);
                    *f &= mask;
                    *f |= bit;
                    s = (Link *)(p + (i << 2) + 0x78);
                    s->f00 = v2;
                    s->f02 = neg;
                }
            }
        }
    }
}
