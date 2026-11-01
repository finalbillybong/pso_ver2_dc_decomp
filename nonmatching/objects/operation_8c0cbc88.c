/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cbc88
 * function: operation_8c0cbc88
 * language: c
 * reference size: 564 bytes
 * compiled size: 564 bytes (+0.0%)
 * differing lines: 396 of 274 reference instruction lines
 * differing bytes: 223
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
typedef struct Pt {
    float s;
    int c;
    Vector3 p;
} Pt;
typedef struct Vtx {
    Vector3 a;
    int ca;
    Vector3 b;
    int cb;
} Vtx;
typedef struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    int f28;
    Vtx *f2c;
    Pt *f30;
} Object;
extern char g_8c46ee84[];
extern void set_child_blend(void);
extern void call_8c38efbc(void *, int, int);
void operation_8c0cbc88(Object *o)
{
    Vector3 d;
    int i;
    int n;
    Vtx *v;
    Pt *p;
    float s;
    int c;
    int a;
    int b;
    int m;
    float y;
    float z;
    a = o->f24;
    m = -1;
    b = o->f28;
    i = a + m;
    if (b == i) {
        return;
    }
    d = *(Vector3 *)(g_8c46ee84 + 0x34);
    v = o->f2c;
    if (b > i) {
        y = d.y;
        z = d.z;
        n = o->f20 - b + a;
        for (; i >= 0; i--, v++) {
            p = (Pt *)((char *)o->f30 + i * 0x14);
            s = p->s;
            c = p->c;
            v->a.x = d.x * s + p->p.x;
            v->a.y = y * s + p->p.y;
            v->a.z = z * s + p->p.z;
            v->ca = c;
            s = s * -1.0f;
            v->b.x = d.x * s + p->p.x;
            v->b.y = y * s + p->p.y;
            v->b.z = z * s + p->p.z;
            v->cb = c;
        }
        for (i = o->f20 - 1; i >= o->f28; i--, v++) {
            p = (Pt *)((char *)o->f30 + i * 0x14);
            s = p->s;
            c = p->c;
            v->a.x = d.x * s + p->p.x;
            v->a.y = y * s + p->p.y;
            v->a.z = z * s + p->p.z;
            v->ca = c;
            s = s * -1.0f;
            v->b.x = d.x * s + p->p.x;
            v->b.y = y * s + p->p.y;
            v->b.z = z * s + p->p.z;
            v->cb = c;
        }
    } else {
        y = d.y;
        z = d.z;
        n = a - b;
        for (; i >= o->f28; i--, v++) {
            p = (Pt *)((char *)o->f30 + i * 0x14);
            s = p->s;
            c = p->c;
            v->a.x = d.x * s + p->p.x;
            v->a.y = y * s + p->p.y;
            v->a.z = z * s + p->p.z;
            v->ca = c;
            s = s * -1.0f;
            v->b.x = d.x * s + p->p.x;
            v->b.y = y * s + p->p.y;
            v->b.z = z * s + p->p.z;
            v->cb = c;
        }
    }
    set_child_blend();
    call_8c38efbc(o->f2c, n << 1, 1);
}
