typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_400 Arg0_400;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x398];
    int f400;
};
extern int signed_angle_delta(int, int);
extern int angle_step(int, int, int);
void operation_8c0610c8(Object *o, int a1)
{
    char *v12;
    int v1;
    int t1;
    int t3;
    t1 = signed_angle_delta((int)(o->f64), a1);
    v1 = t1;
    if (t1 > 0x4000) {
        v1 = 0x4000;
    } else if (-0x4000 > t1) {
        v1 = -0x4000;
    }
    v12 = (char *)o->f400;
    if (((int)(v12) * v1) >= 0) {
        o->f400 = angle_step((int)(v12), v1, 0x800);
    } else {
        t3 = signed_angle_delta((int)(v12), v1);
        if (((int)(o->f400) * t3) >= 0) {
            if ((int)(o->f400) >= 0) {
                o->f400 -= 0x800;
            } else {
                o->f400 += 0x800;
            }
        } else {
            o->f400 = angle_step((int)(o->f400), v1, 0x800);
        }
    }
    o->f400 = (short)o->f400;
}
