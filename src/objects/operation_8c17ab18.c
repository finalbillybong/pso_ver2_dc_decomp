typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
typedef struct Arg0_13c_s788 Arg0_13c_s788;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0x104];
    int f244;
    short f248;
    short f24a;
    char unknown24c[0x54];
    int f2a0;
    Vector3 f2a4;
};
struct Arg0_13c_s754 {
    char unknown0[0x30];
    int f30;
};
struct Arg0_13c {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x720];
    short f788;
};
struct Arg0_13c_s788 {
    char unknown0[0x2];
    short f02;
};
extern void operation_8c075894(void *, void *, int, int);
extern int call_8c12b944(void);
extern void operation_8c074ac4(void *, int);
void operation_8c17ab18(Object *o)
{
    int v1;
    int v4;
    int t1;
    operation_8c075894((void *)o, (void *)(o->f13c), 4, (int)(((char *)o + 0x238)));
    {
        char *p = (char *)o->f13c + 0x754;
        p += 0x30;
        v1 = *(int *)p;
        p += 4;
        if (v1 < 0 || v1 > 0xa) {
            v1 = 0;
        }
        if (v1 != 0) {
            o->f244 = 1;
            o->f248 = *(short *)p;
            o->f24a = *(short *)(p + 2);
        } else {
            o->f244 = 0;
        }
    }
    o->f2a0 = (int)(o->f13c->f64);
    *(Vector3 *)&o->f2a4 = *(Vector3 *)&o->f13c->f3c;
    t1 = call_8c12b944();
    operation_8c074ac4((void *)o, (int)((int)((float)t1 / 32768.0f * 3.0f)));
}
