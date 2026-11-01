typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Sphere {
    float r;
    Vector3 c;
} Sphere;
typedef struct Object {
    char unknown0[0x2c];
    Sphere *f2c;
} Object;
extern float call_8c38d7d8(Vector3 *, Vector3 *);
extern void vector_sub_in_place_8c37f6f0(Vector3 *, Vector3 *);
extern float njScalor_8c37e480(Vector3 *);
extern void njUnitVector_8c37b630(Vector3 *);
extern void call_8c3bdf60(Vector3 *, Vector3 *);
void operation_8c0bbd84(Object *o, Vector3 *a1, float f0)
{
    Vector3 p;
    Vector3 nv;
    float depth;
    int n;
    float best;
    Sphere *s;
    float half;
    float rr;
    float d;
    float pen;
    int m;
    Vector3 *q;
    p = *a1;
    n = 0x10;
    m = -0xc;
    half = f0 * 0.5f;
    for (;;) {
        s = o->f2c;
        depth = 0.0f;
        for (; !(0.0f > (d = s->r)); s++) {
            rr = half + d;
            d = call_8c38d7d8(&p, &s->c);
            if (rr > d) {
                pen = rr - d;
                if (pen > depth) {
                    depth = pen;
                    nv = s->c;
                    best = rr;
                }
            }
        }
        if (!(n > 0) || depth == 0.0f) {
            *a1 = p;
            return;
        }
        vector_sub_in_place_8c37f6f0(&p, &nv);
        if (njScalor_8c37e480(&p) == 0.0f) {
            p.x = 0.0f;
            p.y = -1.0f;
            p.z = 0.0f;
        } else {
            njUnitVector_8c37b630(&p);
        }
        p.x *= best;
        p.y *= best;
        p.z *= best;
        call_8c3bdf60(&p, &nv);
        q = (Vector3 *)((char *)a1 + m);
        vector_sub_in_place_8c37f6f0(&p, q);
        if (njScalor_8c37e480(&p) == 0.0f) {
            p.x = 0.0f;
            p.y = -1.0f;
            p.z = 0.0f;
        } else {
            njUnitVector_8c37b630(&p);
        }
        p.x *= f0;
        p.y *= f0;
        p.z *= f0;
        call_8c3bdf60(&p, q);
        n--;
    }
}
