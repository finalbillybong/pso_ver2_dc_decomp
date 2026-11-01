/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c012810
 * function: operation_8c012810
 * language: c
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 22 of 49 reference instruction lines
 * differing bytes: 65
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Node Node;
struct Node {
    char unknown0[0x35c];
    Node *f35c;
    Node *f360;
    Node *f364;
    Node *f368;
};
void operation_8c012810(int a0, Node *a1, Node *a2)
{
    Node *c;
    Node *q;
    Node *p;
    Node *n;
    Node *pm1;
    Node *pm2;
    q = a2->f368;
    pm2 = a1->f368;
    pm1 = pm2;
    p = pm1;
    if (0 != p) {
        for (; (n = p->f364) != 0; p = n) {
        }
        if (!(q != 0)) {
            a1 = p->f360;
            c = a1;
            if (0 != c) {
                c->f364 = 0;
                p->f360 = 0;
            }
            p->f35c = a2;
            a2->f368 = p;
            return;
        }
        c = p->f360;
        for (; !((n = q->f364) == 0); q = n) {
        }
        if (c != 0) {
            c->f364 = 0;
        }
        p->f360 = q;
        q->f364 = p;
    }
}
