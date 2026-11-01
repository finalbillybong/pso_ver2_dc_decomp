/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10f4fc
 * function: operation_8c10f4fc
 * language: c
 * reference size: 616 bytes
 * compiled size: 624 bytes (+1.3%)
 * differing lines: 114 of 280 reference instruction lines
 * differing bytes: 562
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Body {
    char unknown0[0x324];
    float f324;
    float f328;
    float f32c;
} Body;
typedef struct Part {
    char unknown0[0x94];
    Body *f94;
} Part;
typedef struct Object {
    char unknown0[0x78];
    Part *f78;
    Part *f7c;
} Object;
extern float njScalor_8c37e480(Vector3 *);
extern void njUnitVector_8c37b630(Vector3 *);
extern float call_8c3845f0(Vector3 *, Vector3 *);
extern void call_8c38d6e0(void *, Vector3 *, Vector3 *);
extern int operation_8c011214(Vector3 *, Vector3 *, int);
int operation_8c10f4fc(Object *a0, Vector3 *a1, Vector3 *a2, Vector3 *a3, register Vector3 *a4, register Vector3 *a5)
{
    Vector3 d;
    Vector3 n;
    Vector3 m;
    Vector3 q;
    Vector3 hit;
    Vector3 p;
    Vector3 d2;
    float len;
    Vector3 *b;
    Object *o;
    o = a0;
    b = a1;
    d.x = a2->x - b->x;
    d.y = 0.0f;
    d.z = a2->z - b->z;
    len = njScalor_8c37e480(&d);
    if (len != 0.0f) {
        njUnitVector_8c37b630(&d);
    }
    n.x = a3->z;
    n.y = 0.0f;
    n.z = -a3->x;
    if (0.0f > call_8c3845f0(&d, &n)) {
        n.x = -n.x;
        n.z = -n.z;
    }
    q.x = o->f7c->f94->f324;
    q.y = o->f7c->f94->f328;
    q.z = o->f7c->f94->f32c;
    m.x = n.x;
    m.y = 0.0f;
    m.z = n.z;
    call_8c38d6e0((char *)o + 0xe0, &q, &hit);
    len *= 1.5f;
    if (!(len > 20.0f)) {
        len = 20.0f;
    }
    a4->x = n.x * len + b->x;
    a4->y = b->y;
    a4->z = n.z * len + b->z;
    p = *(Vector3 *)&o->f78->f94->f324;
    if (operation_8c011214(&p, &hit, 0x2100) != 0) {
        hit.x += n.x * 5.0f;
        hit.z += n.z * 5.0f;
        return 0;
    }
    d2.x = o->f78->f94->f324 - hit.x;
    d2.z = o->f78->f94->f32c - hit.z;
    d2.y = 0.0f;
    if (njScalor_8c37e480(&d2) != 0.0f) {
        njUnitVector_8c37b630(&d2);
    }
    a5->x = hit.x + n.x * 5.0f;
    a5->z = hit.z + n.z * 5.0f;
    a5->y = 0.0f;
    return 1;
}
