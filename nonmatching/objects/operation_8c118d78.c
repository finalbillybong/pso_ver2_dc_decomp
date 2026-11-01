/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c118d78
 * function: operation_8c118d78
 * language: c
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 152 of 104 reference instruction lines
 * differing bytes: 113
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation; review found and fixed behaviour defects of the generator draft; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Rec {
    Vector3 a;
    char pad0c[8];
    int c14;
    Vector3 b;
    char pad24[8];
    int c2c;
} Rec;
typedef struct Object {
    char unknown0[0x20];
    int f20;
    Rec recs[1];
} Object;
void operation_8c118d78(Object *o)
{
    int n;
    int c;
    int a;
    int done;
    int i;
    Rec *d;
    Rec *s;
    n = o->f20;
    if (n > 0) {
        c = o->recs[0].c14;
        a = (unsigned char)((unsigned int)c >> 24) - 0x20;
        if (a < 0) {
            c &= 0xffffff;
            done = 1;
        } else {
            c = (c & 0xffffff) | a << 24;
            done = 0;
        }
        if (done) {
            o->f20--;
            d = o->recs;
            s = o->recs + 1;
            for (i = 0; i < o->f20; i++) {
                d->a.x = s->a.x;
                d->a.y = s->a.y;
                d->a.z = s->a.z;
                d->b.x = s->b.x;
                d->b.y = s->b.y;
                d->b.z = s->b.z;
                d++;
                s++;
            }
        } else {
            if (n > 1) {
                int k;
                d = &o->recs[o->f20 - 1];
                k = -0x30;
                s = d - 1;
                for (i = 1; i < o->f20; i++) {
                    d->c14 = s->c14;
                    (&d->c14)[-6] = (&s->c14)[-6];
                    s = (Rec *)((char *)s + k);
                    d = (Rec *)((char *)d + k);
                }
            }
            o->recs[0].c14 = c;
            o->recs[0].c2c = c;
        }
    }
}
