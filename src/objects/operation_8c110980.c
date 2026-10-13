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
    char unknown80[0x4];
    int f84;
};
struct Arg0_7c {
    char unknown0[0x94];
    Arg0_7c_94 *f94;
};
extern int call_8c02445c(void *, int, int);
extern void call_8c0240f0(void *, int);
extern void call_8c02330c(void *, int, int);
void operation_8c110980(Object *o, int a1)
{
    int t1;
    int t2;
    int t3;
    if (a1 != 0) {
        if (a1 == 1) {
            goto L_8c1109e0;
        }
        if (a1 == 2) {
            goto L_8c110a1c;
        }
        return;
    }
    t1 = call_8c02445c((void *)(o->f7c->f94), 3, 0);
    if (t1 != -1) {
        call_8c0240f0((void *)(o->f7c->f94), t1);
        call_8c02330c((void *)(o->f7c->f94), t1, 1);
        o->f84 |= 0x10000;
        return;
L_8c1109e0:;
        t2 = call_8c02445c((void *)(o->f7c->f94), 3, 1);
        if (t2 != -1) {
            call_8c0240f0((void *)(o->f7c->f94), t2);
            call_8c02330c((void *)(o->f7c->f94), t2, 1);
            return;
L_8c110a1c:;
            t3 = call_8c02445c((void *)(o->f7c->f94), 3, 6);
            if (t3 != -1) {
                call_8c0240f0((void *)(o->f7c->f94), t3);
                call_8c02330c((void *)(o->f7c->f94), t3, 1);
            }
        }
    }
}
