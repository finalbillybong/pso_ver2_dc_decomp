typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469a8c S_g8c469a8c;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0xc];
    Vector3 f54;
    char unknown60[0x90];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x84];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
};
struct S_g8c469a8c {
    float f00;
};
extern S_g8c469a8c *g_8c469a8c;
extern void call_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
extern void call_8c044320(Object *, float, Vector3, Vector3);
extern void apply_object_velocity(void *);
extern float distance_xz(void *, void *);
void operation_8c07aea4(Object *o)
{
    short v4;
    int v3;
    float t1;
    float t2;
    switch (o->f398) {
    case -1:
        break;
    case 0:
        *(int *)((char *)o + 0x3a4) &= -0x200001;
        o->f3a4 |= 0x480000;
        o->ff0 = 0;
        o->f398 = 1;
    case 1:
        call_8c01c5f0(o);
        if (((o->f34 & 0x800000)) == 0) {
            operation_8c04a43c((void *)o, 0.0f, (void *)0);
        }
        call_8c044320(o, g_8c469a8c->f00, o->f3c, o->f54);
        apply_object_velocity((void *)o);
        t1 = distance_xz((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x54)));
        if (!(t1 > 100.0f)) {
            *(int *)((char *)o + 0x3a4) &= -0x80001;
            t2 = distance_xz((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x54)));
            if (t2 > 100.0f) {
                v3 = (int)8;
            } else {
                v3 = (int)0;
            }
            if (((o->f3a4 & 1)) == 0) {
                v4 = (short)o->f30a;
                if (v4 != v3) {
                    o->f39c = (int)(v4);
                    o->f390 = (int)(v3);
                }
            }
        }
    }
}
