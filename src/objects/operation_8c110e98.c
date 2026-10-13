typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x34];
    short f60;
    char unknown62[0x1a];
    Arg0_7c *f7c;
    char unknown80[0x4];
    int f84;
};
struct Arg0_7c {
    char unknown0[0x90];
    int f90;
};
extern void call_8c110980(void);
extern void call_8c10d954(Object *, int);
void operation_8c110e98(Object *o, int a1)
{
    if (a1 != 0) {
        if (a1 == 1) {
            goto L_8c110f00;
        }
        if (a1 == 2) {
            goto L_8c110f18;
        }
        if (a1 == 3) {
            goto L_8c110f3a;
        }
        return;
    }
    if (((o->f7c->f90 & 0x20)) != 0) {
        call_8c110980();
    } else {
        call_8c10d954(o, 0xf);
    }
    if (((o->f84 & 0x200)) != 0) {
        o->f60 = 0;
        if (o->f28 != 0x13) {
            o->f28 = 0x13;
            o->f84 |= 4;
            return;
L_8c110f00:;
            if (((o->f7c->f90 & 0x20)) != 0) {
                call_8c110980();
                return;
L_8c110f18:;
                if (((o->f7c->f90 & 0x20)) != 0) {
                    call_8c110980();
                    return;
                }
                call_8c10d954(o, 0x10);
                return;
L_8c110f3a:;
                if (((o->f7c->f90 & 0x20)) != 0) {
                    call_8c110980();
                    return;
                }
                call_8c10d954(o, 0x11);
            }
        }
    }
}
