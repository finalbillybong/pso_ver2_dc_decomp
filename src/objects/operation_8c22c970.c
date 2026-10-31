typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char unknown0[0x20];
    float f20;
    float f24;
    char unknown28[0x8];
    int f30;
    char unknown34[0x8];
    float f3c;
    float f40;
    float f44;
    float f48;
};
struct Object {
    char unknown0[0x2c];
    float f2c;
};
void operation_8c22c970(Object *o, float f0)
{
    char *base;
    int i;
    int mask;
    S_vv4 *p;
    int idx;
    int z;
    int v;
    float m1;
    int t;
    base = (char *)o + 0x20;
    z = i = 0;
    mask = -3;
    for (; i != 2; i++) {
        idx = i << 2;
        p = *(S_vv4 **)(base + idx);
        if (p != 0) {
            v = p->f30;
            t = (v & 2) != 0;
            if (t) {
                p->f30 = v & mask;
            }
            p->f30 |= 1;
            if (f0 != 0.0f) {
                p->f3c = (-1.0f - p->f20) / f0;
                m1 = (-1.0f - p->f24) / f0;
                p->f40 = m1;
                p->f44 = m1;
                p->f48 = m1;
            }
            *(S_vv4 **)(base + idx) = (S_vv4 *)z;
        }
    }
    f0 += 2.0f;
    if (f0 != 0.0f) {
        o->f2c = 1.0f / f0;
    }
}
