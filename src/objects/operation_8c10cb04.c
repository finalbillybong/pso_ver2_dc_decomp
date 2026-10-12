typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg0_7c_94 Arg0_7c_94;
struct Object {
    char unknown0[0x7c];
    Arg0_7c *f7c;
    int f80;
    int f84;
    char unknown88[0x28];
    Vector3 fb0;
    char unknownbc[0x18];
    Vector3 fd4;
};
struct Arg0_7c {
    char unknown0[0x94];
    Arg0_7c_94 *f94;
};
struct Arg0_7c_94 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern int call_8c10e53c(void);
extern void call_8c10de20(int);
extern int call_8c10e664(int);
extern void call_8c110a74(Object *, int);
int operation_8c10cb04(Object *o)
{
    int t1;
    int t2;
    t1 = call_8c10e53c();
    if (t1 != 0) {
        call_8c10de20((int)o);
        t2 = call_8c10e664((int)o);
        if (t2 != 0) {
            o->fb0 = o->fd4;
            if (o->f80 == 2) {
                goto L_8c10cb6c;
            }
            call_8c110a74(o, 1);
        } else {
            o->fb0 = o->f7c->f94->f3c;
        }
L_8c10cb6c:;
        return 1;
    }
    if (((o->f84 & 0x20)) != 0 && o->f80 != 8) {
        call_8c110a74(o, 0);
    }
    return 0;
}
