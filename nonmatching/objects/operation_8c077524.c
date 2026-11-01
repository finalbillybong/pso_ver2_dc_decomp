/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c077524
 * function: operation_8c077524
 * language: c
 * reference size: 596 bytes
 * compiled size: 644 bytes (+8.1%)
 * differing lines: 412 of 288 reference instruction lines
 * differing bytes: 579
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in stack
 *   frame and spills, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by +48 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Pt {
    float x;
    float y;
    float z;
    float w;
} Pt;
typedef struct Object {
    char unknown0[0x20];
    Pt *pts;
    int curved;
} Object;
extern float call_8c38d7d8(Vector3 *, Vector3 *);
extern void njUnitVector_8c37b630(Vector3 *);
extern void operation_8c077488(Object *, Vector3 *, Vector3 *);
void operation_8c077524(Object *o, Vector3 *a, Vector3 *b)
{
    Vector3 p;
    Vector3 q;
    Vector3 dir;
    float s;
    float x1;
    float y1;
    float z1;
    float x0;
    float y0;
    float z0;
    float dx;
    float dy;
    float dz;
    float ex;
    float ey;
    float ez;
    float t;
    int i;
    if (o->pts == 0 || a == 0 || b == 0) {
        return;
    }
    if (o->curved != 0) {
        x0 = o->pts[0].x;
        y0 = o->pts[0].y;
        z0 = o->pts[0].z;
        x1 = o->pts[1].x;
        y1 = o->pts[1].y;
        z1 = o->pts[1].z;
        dx = (b->x - x0) / 2.0f;
        dy = (b->y - y0) / 2.0f;
        dz = (b->z - z0) / 2.0f;
        ex = (a->x - x1) / 2.0f;
        ey = (a->y - y1) / 2.0f;
        ez = (a->z - z1) / 2.0f;
        s = call_8c38d7d8(a, b);
        for (i = 1; i != 2; i++) {
            t = (float)i;
            p.x = ex * t + x1;
            p.y = ey * t + y1;
            p.z = ez * t + z1;
            q.x = dx * t + x0;
            q.y = dy * t + y0;
            q.z = dz * t + z0;
            dir.x = q.x - p.x;
            dir.y = q.y - p.y;
            dir.z = q.z - p.z;
            njUnitVector_8c37b630(&dir);
            p.x += dir.x * 0.01f;
            p.y += dir.y * 0.01f;
            p.z += dir.z * 0.01f;
            q.x = dir.x * s + p.x;
            q.y = dir.y * s + p.y;
            q.z = dir.z * s + p.z;
            operation_8c077488(o, &p, &q);
        }
    }
    operation_8c077488(o, a, b);
}
