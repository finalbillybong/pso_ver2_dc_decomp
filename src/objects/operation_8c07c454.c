typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469ae4 S_g8c469ae4;
typedef struct Object Object;
struct Object {
    float tag;
    char unknown4[0x4];
    float f08;
};
struct S_g8c469ae4 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
extern int g_8c469ae0;
extern float call_8c37f6c0(float);
float operation_8c07c454(Object *o)
{
    int i;
    int n;
    float best;
    float x;
    float z;
    float dx;
    float dz;
    float d;
    S_g8c469ae4 *e;
    n = g_8c469ae0;
    best = 100000000.0f;
    if (n == 0) {
        return 0.0f;
    }
    x = o->tag;
    z = o->f08;
    for (i = 0; i < n; i++) {
        e = *(S_g8c469ae4 **)((char *)0x8c469ae4 + (i << 2));
        dx = e->f3c - x;
        dz = e->f44 - z;
        d = dx * dx + dz * dz;
        if (best > d) {
            best = d;
        }
    }
    return call_8c37f6c0(best);
}
