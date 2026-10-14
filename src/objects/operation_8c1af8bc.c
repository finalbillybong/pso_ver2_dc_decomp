typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x104];
    int f104;
    char unknown108[0xc];
    float f114;
};
extern void call_8c0eeb58(void);
extern int call_8c17796c(int);
extern int call_8c01c25c(void);
extern void operation_8c05428c(void *, int, int);
void operation_8c1af8bc(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    if (((o->f104 & 0xe)) != 0) {
        call_8c0eeb58();
        if (((o->f104 & 0x10)) != 0) {
            o->f114 += 0.05f;
            if (0.0f > o->f114) {
                goto L_8c1af92c;
            }
            o->f114 = 0.0f;
            o->f104 &= -0x11;
        } else {
            o->f114 -= 0.05f;
            if (!(o->f114 > -1.0f)) {
                o->f114 = -1.0f;
                o->f104 |= 0x10;
            }
        }
L_8c1af92c:;
        t1 = call_8c17796c(0x2c);
        if (t1 != 0) {
            o->f104 &= -3;
        }
        t2 = call_8c17796c(0x2d);
        if (t2 != 0) {
            o->f104 &= -5;
        }
        t3 = call_8c17796c(0x2e);
        if (t3 != 0) {
            o->f104 &= -9;
        }
        t4 = call_8c17796c(0x2f);
        if (t4 == 0) {
            t5 = call_8c01c25c();
            if (t5 != 0x10) {
                return;
            }
        }
        o->f104 &= -0xf;
        operation_8c05428c((void *)o, 0, 1);
    }
}
