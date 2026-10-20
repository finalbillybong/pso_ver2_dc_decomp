typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct S_vv30 S_vv30;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xf4];
    int f234;
    short f238;
    short f23a;
};
struct S_vv30 {
    char unknown0[0x332];
    short f332;
};
struct Arg0_13c {
    char unknown0[0x332];
    short f332;
};
extern void operation_8c04a8ac(void *, int);
void operation_8c179964(Object *o)
{
    S_vv30 *v30;
    short v31;
    short d;
    if (o->f23a == 1) {
        if (o->f234 == 7) {
            o->f23a = 0;
        } else {
            o->f234 += 1;
        }
    }
    if (o->f23a == 2) {
        if (o->f234 == 0) {
            o->f23a = 3;
        } else {
            o->f234 -= 1;
        }
    }
    v30 = (S_vv30 *)o->f13c;
    v31 = v30->f332;
    d = (short)(o->f238 - v31);
    if (d < 0) {
        o->f238 = v31;
        return;
    }
    if (d > 0) {
        operation_8c04a8ac((void *)v30, (int)((float)d * 0.1f));
        o->f238 = o->f13c->f332;
    }
}
