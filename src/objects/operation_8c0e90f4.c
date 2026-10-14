typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_58 Arg0_58;
struct Object {
    char unknown0[0x58];
    Arg0_58 *f58;
};
extern int call_8c3727a0(int);
extern int call_8c0101dc(void *);
extern int operation_8c19b054(void);
extern int call_8c37293e(int, int);
int operation_8c0e90f4(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    t1 = call_8c3727a0(0);
    if (t1 == 0) {
        t2 = call_8c3727a0(1);
        if (t2 == 0) {
            t3 = call_8c3727a0(2);
            if (t3 == 0) {
                t4 = call_8c3727a0(3);
                if (t4 == 0) {
                    t5 = call_8c3727a0(4);
                    if (t5 == 0) {
                        t6 = call_8c3727a0(5);
                        if (t6 == 0) {
                            t7 = call_8c3727a0(6);
                            if (t7 == 0) {
                                t8 = call_8c3727a0(7);
                                if (t8 == 0) {
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (*(int *)0x8c470324 != 0) {
        if (*(int *)0x8c470324 == 1) {
            goto L_8c0e916e;
        }
    } else {
        t9 = call_8c0101dc((void *)(o->f58));
        if (t9 == -1) {
            return 1;
L_8c0e916e:;
            t10 = operation_8c19b054();
            t11 = call_8c37293e((int)((char)t10), 0);
            if ((int)(o->f58) > t11) {
                return 1;
            }
        }
    }
    return -1;
}
