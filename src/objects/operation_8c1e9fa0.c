typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_338 Arg0_338;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x300];
    Arg0_338 *f338;
    char unknown33c[0x14];
    int f350;
    char unknown354[0x3c];
    int f390;
    char unknown394[0x1d4];
    int f568;
    char unknown56c[0x4];
    int f570;
};
struct Arg0_338 {
    char unknown0[0x18];
    int f18;
    float f1c;
};
extern int call_8c028b3c(Object *);
extern void operation_8c1e8e60(int, int, int);
extern int operation_8c029b3c(int, int);
void operation_8c1e9fa0(Object *o)
{
    char *v1;
    float v2;
    int v6;
    int v9;
    int v10;
    int v3;
    int t1;
    int t2;
    v1 = (char *)o->f338->f18;
    v2 = (float)o->f338->f1c;
    t1 = call_8c028b3c(o);
    if (t1 != 0) {
        v3 = (int)(((o->f350 & 0x30)) != 0);
        if (v3 != 0) {
            return;
        }
    }
    if (0.1f > v2) {
        v6 = (int)(((o->f570 & 4)) != 0);
        if (v6 != 0) {
            operation_8c1e8e60((int)o, 1, 5);
            return;
        }
        return;
    }
    t2 = operation_8c029b3c((int)o, (int)(v1));
    if (((o->f34 & 0x100000)) == 0 && !(0.5f > v2)) {
        goto L_8c1ea03e;
    }
    o->f568 = 0;
    v9 = (int)(((o->f570 & 4)) != 0);
    if (v9 != 0) {
        o->f390 = (int)(t2);
        operation_8c1e8e60((int)o, 2, 5);
        return;
L_8c1ea03e:;
        o->f568 += 1;
        v10 = (int)(((o->f570 & 4)) != 0);
        if (v10 != 0) {
            o->f390 = (int)(t2);
            operation_8c1e8e60((int)o, 4, 5);
        }
    }
}
