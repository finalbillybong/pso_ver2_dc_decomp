/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c011744
 * function: operation_8c011744
 * language: c
 * reference size: 540 bytes
 * compiled size: 540 bytes (+0.0%)
 * differing lines: 38 of 238 reference instruction lines
 * differing bytes: 51
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
typedef struct Tri {
    Vector3 v0;
    Vector3 v1;
    Vector3 v2;
    Vector3 n;
    char pad30[0x10];
    int flags;
} Tri;
typedef struct Mesh {
    int count;
    Tri *tris;
} Mesh;
typedef struct Hit {
    Vector3 pos;
    Vector3 n;
    int flags;
    Tri *tri;
} Hit;
typedef struct HitState {
    int hit;
    Hit *res;
} HitState;
extern Vector3 g_8c46f5a0;
extern Vector3 g_8c46f620;
extern void subtract_vector_components(void *, void *, void *);
extern int njScalor_8c37e480(void *);
extern float call_8c3845f0(void *, void *);
extern void call_8c38a8e8(void *, void *, void *);
extern void operation_8c011e8c(Tri *, int);
extern void operation_8c011e94(void *, void *);
int operation_8c011744(Vector3 *o, Vector3 *a1, int a2, Mesh ***a3)
{
    Vector3 dir;
    int i;
    Tri *tri;
    Hit *res;
    Mesh **e;
    Mesh *m;
    HitState *g;
    Vector3 *n;
    int count;
    float d;
    float t;
    g = (HitState *)0x8c417f80;
    g->hit = 0;
    res = g->res;
    subtract_vector_components(o, a1, &dir);
    njScalor_8c37e480(&dir);
    for (; (e = *a3) != 0; a3++) {
        m = *e;
        count = m->count;
        tri = m->tris;
        for (i = 0; i < count; i++, tri++) {
            if (tri->flags & a2) {
                n = &tri->n;
                d = call_8c3845f0(&dir, n);
                if (-1e-07f > d) {
                    g_8c46f5a0.x = o->x - tri->v0.x;
                    g_8c46f5a0.y = o->y - tri->v0.y;
                    g_8c46f5a0.z = o->z - tri->v0.z;
                    t = call_8c3845f0(&g_8c46f5a0, n);
                    if (t > 1e-07f) {
                        t = -(t / d);
                        if (!(t > 1.0f) && !(0.0f > t)) {
                            g_8c46f620.x = dir.x * t + o->x;
                            g_8c46f620.y = dir.y * t + o->y;
                            g_8c46f620.z = dir.z * t + o->z;
                            subtract_vector_components(&g_8c46f620, &tri->v0, &g_8c46f5a0);
                            subtract_vector_components(&g_8c46f620, &tri->v1, (void *)0x8c46f5c0);
                            call_8c38a8e8(&g_8c46f5a0, (void *)0x8c46f5c0, (void *)0x8c46f600);
                            if (!(0.0f > call_8c3845f0((void *)0x8c46f600, n))) {
                                subtract_vector_components(&g_8c46f620, &tri->v2, (void *)0x8c46f5e0);
                                call_8c38a8e8((void *)0x8c46f5c0, (void *)0x8c46f5e0, (void *)0x8c46f600);
                                if (!(0.0f > call_8c3845f0((void *)0x8c46f600, n))) {
                                    call_8c38a8e8((void *)0x8c46f5e0, &g_8c46f5a0, (void *)0x8c46f600);
                                    if (!(0.0f > call_8c3845f0((void *)0x8c46f600, n))) {
                                        g->hit = 1;
                                        res->pos = g_8c46f620;
                                        res->n = *n;
                                        res->flags = tri->flags;
                                        res->tri = tri;
                                        operation_8c011e8c(tri, 0x33ff0000);
                                        operation_8c011e94(&g_8c46f620, (void *)0x8c306048);
                                        return g->hit;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return g->hit;
}
