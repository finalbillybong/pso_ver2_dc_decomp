typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    char f20;
    char unknown21[0x1];
    unsigned short f22;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
extern int lookup_low_id(int);
extern void operation_8c1dd18c(void *);
extern int call_8c1dd454(Object *);
extern void operation_8c1dd128(void *);
extern void operation_8c0264ac(void);
extern int operation_8c1dd520(void *);
extern int call_8c1dd57c(Object *);
void operation_8c1dcf9c(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 == 0) {
        return;
    }
    if (((o->f22 & 2)) != 0) {
        operation_8c1dd18c((void *)o);
        t2 = call_8c1dd454(o);
        if (t2 == 0) {
            return;
        }
        operation_8c1dd128((void *)o);
        return;
    }
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            goto L_8c1dd04e;
        }
        if (o->f20 == 2) {
            goto L_8c1dd0a4;
        }
        return;
    }
    t3 = call_8c1dd454(o);
    if (t3 != 0 && ((o->f22 & 0x240)) != 0) {
        if (((o->f22 & 0x40)) != 0) {
            operation_8c0264ac();
            if (*(int *)0x8c46fe20 != 0) {
                (*(S_g8c46fe20 **)0x8c46fe20)->f20 &= -0x21;
            }
        }
        operation_8c1dd128((void *)o);
        o->f22 |= 2;
        return;
L_8c1dd04e:;
        t4 = operation_8c1dd520((void *)o);
        if (t4 != 0 && ((o->f22 & 0x240)) != 0) {
            if (((o->f22 & 0x40)) != 0) {
                operation_8c0264ac();
                if (*(int *)0x8c46fe20 != 0) {
                    (*(S_g8c46fe20 **)0x8c46fe20)->f20 &= -0x21;
                }
            }
            operation_8c1dd128((void *)o);
            o->f22 |= 2;
            return;
L_8c1dd0a4:;
            t5 = call_8c1dd57c(o);
            if (t5 != 0 && ((o->f22 & 0x240)) != 0) {
                if (((o->f22 & 0x40)) != 0) {
                    operation_8c0264ac();
                    if (*(int *)0x8c46fe20 != 0) {
                        (*(S_g8c46fe20 **)0x8c46fe20)->f20 &= -0x21;
                    }
                }
                operation_8c1dd128((void *)o);
                o->f22 |= 2;
            }
        }
    }
}
