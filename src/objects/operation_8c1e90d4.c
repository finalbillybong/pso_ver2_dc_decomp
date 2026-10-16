typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_338 Arg0_338;
struct Object {
    char unknown0[0x338];
    Arg0_338 *f338;
    char unknown33c[0x14];
    int f350;
    char unknown354[0xc];
    short f360;
    char unknown362[0x2e];
    int f390;
};
struct Arg0_338 {
    char unknown0[0x18];
    int f18;
    float f1c;
};
extern int call_8c028b3c(Object *);
extern int operation_8c1f134c(Object *);
extern void operation_8c1e8e60(int, int, int);
extern int operation_8c029b3c(int, int);
void operation_8c1e90d4(Object *o)
{
    char *v2;
    float v1;
    int v3;
    int t1;
    int t2;
    int t3;
    v1 = (float)o->f338->f1c;
    v2 = (char *)o->f338->f18;
    t1 = call_8c028b3c(o);
    if (t1 != 0) {
        v3 = (int)(((o->f350 & 0x30)) != 0);
        if (v3 != 0) {
            return;
        }
    }
    t2 = operation_8c1f134c(o);
    o->f360 = t2;
    if (o->f360 != 0) {
        operation_8c1e8e60((int)o, 0x17, 5);
        return;
    }
    if (!(0.1f > v1)) {
        t3 = operation_8c029b3c((int)o, (int)(v2));
        o->f390 = (int)(t3);
        operation_8c1e8e60((int)o, 2, 5);
    }
}
