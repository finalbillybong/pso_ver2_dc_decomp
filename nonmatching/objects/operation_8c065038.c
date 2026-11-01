/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c065038
 * function: operation_8c065038
 * language: c
 * reference size: 212 bytes
 * compiled size: 212 bytes (+0.0%)
 * differing lines: 60 of 104 reference instruction lines
 * differing bytes: 48
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Node Node;
struct Node {
    char unknown0[0x2c];
    Node *f2c;
    Node *f30;
};
extern int call_8c065038(Node *);
#define COUNT2(res, arg) { Node *p2 = (arg); int k2 = 1; if (p2->f2c != 0) { k2 += call_8c065038(p2->f2c); } if (p2->f30 != 0) { k2 += call_8c065038(p2->f30); } res = k2; }
#define COUNT1(res, arg) { Node *p1 = (arg); int k1 = 1; if (p1->f2c != 0) { int r; COUNT2(r, p1->f2c); k1 += r; } if (p1->f30 != 0) { int r; COUNT2(r, p1->f30); k1 += r; } res = k1; }
int operation_8c065038(Node *o)
{
    int c = 1;
    if (o->f2c != 0) {
        int r;
        COUNT1(r, o->f2c);
        c += r;
    }
    if (o->f30 != 0) {
        int r;
        COUNT1(r, o->f30);
        c += r;
    }
    return c;
}
