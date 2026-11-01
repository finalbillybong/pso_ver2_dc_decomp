/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19df98
 * function: operation_8c19df98
 * language: c
 * reference size: 168 bytes
 * compiled size: 168 bytes (+0.0%)
 * differing lines: 8 of 69 reference instruction lines
 * differing bytes: 7
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Node Node;
struct Node {
    int f00;
    short f04;
    unsigned short f06;
    char unknown8[0x4];
    Node *f0c;
};
typedef struct S_g8c4dc4d4 {
    char unknown0[0x14];
    Node *f14;
} S_g8c4dc4d4;
extern int g_8c31ccdc;
extern int g_8c31cce0;
extern int g_8c31cce4;
extern int g_8c31cce8;
extern int g_8c31ccec;
extern int g_8c31ccf0;
extern S_g8c4dc4d4 *g_8c4dc4d4;
void operation_8c19df98(int a0)
{
    Node *head;
    int m;
    Node *q;
    int k0;
    int t;
    int k1;
    int k2;
    int k3;
    int k4;
    int k5;
    Node *p;
    if (0 > a0) {
        return;
    }
    k0 = g_8c31ccdc;
    k1 = g_8c31cce0;
    head = g_8c4dc4d4->f14;
    k2 = g_8c31cce4;
    k3 = g_8c31cce8;
    k4 = g_8c31ccec;
    k5 = g_8c31ccf0;
    p = head;
    while (0 != head && p != 0) {
        q = p;
        p = p->f0c;
        t = q->f00;
        if ((((m = ((t == k0))) != 0 || (m = t == k1) != 0 || (m = t == k2) != 0 || !((m = t == k3) == 0) || !((m = !(t != k4)) == 0) || (m = t == k5) != 0)) && (int)(int)(int)(int)q->f06 == a0) {
            q->f04 = 1 | (int)q->f04;
            return;
        }
    }
}
