typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
struct Object {
    char unknown0[0x90];
    int f90;
    Arg0_94 *f94;
};
extern int call_8c02445c(void *, int, int);
extern int call_8c1ecae8(void *, int);
int operation_8c10e7b0(Object *o, int a1, int a2)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    if (a1 != 0) {
        if (a1 == 1) {
            goto L_8c10e804;
        }
        if (a1 == 2) {
            goto L_8c10e826;
        }
        if (a1 == 3) {
            goto L_8c10e838;
        }
    } else {
        if (a2 != 0) {
            t1 = call_8c02445c((void *)(o->f94), 3, 0);
            if (t1 != -1) {
                o->f90 |= 0x20;
                return 1;
            }
        }
        t2 = call_8c1ecae8((void *)(o->f94), 0xf);
        if (t2 != 0) {
            return 1;
L_8c10e804:;
            t3 = call_8c02445c((void *)(o->f94), 3, 1);
            if (t3 != -1) {
                o->f90 |= 0x20;
                return 1;
L_8c10e826:;
                t4 = call_8c1ecae8((void *)(o->f94), 0x10);
                if (t4 != 0) {
                    return 1;
L_8c10e838:;
                    t5 = call_8c02445c((void *)(o->f94), 3, 6);
                    if (t5 != -1) {
                        o->f90 |= 0x20;
                        return 1;
                    }
                    t6 = call_8c1ecae8((void *)(o->f94), 0x11);
                    if (t6 != 0) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
