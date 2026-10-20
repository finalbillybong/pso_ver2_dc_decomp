typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct S_vv21 S_vv21;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xf4];
    short f234;
};
struct S_vv21 {
    char unknown0[0x332];
    short f332;
};
struct Arg0_13c {
    char unknown0[0x332];
    short f332;
};
extern void operation_8c04a8ac(void *, int);
void operation_8c17aacc(Object *o)
{
    S_vv21 *v21;
    short v22;
    short d;
    v21 = (S_vv21 *)o->f13c;
    v22 = v21->f332;
    d = (short)(o->f234 - v22);
    if (d < 0) {
        o->f234 = v22;
        return;
    }
    if (d > 0) {
        operation_8c04a8ac((void *)v21, (int)(d >> 1));
        o->f234 = o->f13c->f332;
    }
}
