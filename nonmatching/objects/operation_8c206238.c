/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c206238
 * function: operation_8c206238
 * language: c
 * reference size: 344 bytes
 * compiled size: 348 bytes (+1.2%)
 * differing lines: 182 of 157 reference instruction lines
 * differing bytes: 293
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Lz {
    unsigned char text[0x1012];
    short dad[0x1001];
    short lson[0x1001];
    short rson[0x1101];
    int match_position;
    int match_length;
} Lz;
#define S_DAD(i) (*(short *)((char *)o->dad + ((i) << 1)))
#define S_LSON(i) (*(short *)((char *)o->lson + ((i) << 1)))
#define S_RSON(i) (*(short *)((char *)o->rson + ((i) << 1)))
void operation_8c206238(Lz *o, int r)
{
    int i;
    int p;
    int cmp;
    unsigned char *key;
    cmp = 1;
    key = &o->text[r];
    p = 0x1001 + key[0];
    S_RSON(r) = S_LSON(r) = 0x1000;
    o->match_length = 0;
    for (;;) {
        if (cmp >= 0) {
            if (S_RSON(p) != (short)0x1000) {
                p = S_RSON(p);
            } else {
                S_RSON(p) = r;
                S_DAD(r) = p;
                return;
            }
        } else {
            if (S_LSON(p) != (short)0x1000) {
                p = S_LSON(p);
            } else {
                S_LSON(p) = r;
                S_DAD(r) = p;
                return;
            }
        }
        for (i = 1; i < 0x12; i++) {
            if ((cmp = key[i] - (o->text + p)[i]) != 0) {
                break;
            }
        }
        if (i > o->match_length) {
            o->match_position = p;
            if ((o->match_length = i) >= 0x12) {
                break;
            }
        }
    }
    S_DAD(r) = S_DAD(p);
    S_LSON(r) = S_LSON(p);
    S_RSON(r) = S_RSON(p);
    S_DAD(S_LSON(p)) = r;
    S_DAD(S_RSON(p)) = r;
    if (S_RSON(S_DAD(p)) == p) {
        S_RSON(S_DAD(p)) = r;
    } else {
        S_LSON(S_DAD(p)) = r;
    }
    S_DAD(p) = 0x1000;
}
