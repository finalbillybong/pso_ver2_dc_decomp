typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_54c Arg0_54c;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x504];
    int f53c;
    int f540;
    char unknown544[0x8];
    Arg0_54c *f54c;
    int f550;
    int f554;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_L8c41cba0 g_8c41cba0;
extern int call_8c11806c(Object *);
extern void call_8c122410(int);
extern int operation_8c1222c8(int, int);
extern int call_8c122380(void *, int);
extern int call_8c1221f4(void);
void operation_8c11649c(Object *o)
{
    char *v1;
    char *v45;
    int t1;
    int t2;
    int t3;
    int t4;
    if (o->f540 != 2) {
    } else {
        t1 = call_8c11806c(o);
        if (o->f550 != 0) {
            if (o->f550 == 1) {
                goto L_8c116552;
            }
            if (o->f550 == 2) {
                goto L_8c116570;
            }
            if (o->f550 == 3) {
                goto L_8c11658e;
            }
            return;
        }
        if (t1 != 0) {
            if (t1 >= 1) {
                *(int *)((char *)o + 0x54c) += 1;
                v1 = (char *)o->f54c;
                if (!((int)(v1) >= 0x40)) {
                    goto L_8c11650e;
                }
                o->f54c = (Arg0_54c *)0;
            } else {
                if (-1 >= t1) {
                    *(int *)((char *)o + 0x54c) += -1;
                    if (!((int)(o->f54c) >= 0)) {
                        o->f54c = (Arg0_54c *)0x3f;
                    }
                }
            }
        }
L_8c11650e:;
        v45 = (char *)*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c));
        if ((((int)(v45) & 4)) != 0) {
            o->f550 = 1;
            o->f53c |= 2;
            o->f554 = 0;
            return;
        }
        if ((((int)(v45) & 0x400)) == 0) {
            return;
        }
        call_8c122410(0);
        return;
L_8c116552:;
        t2 = operation_8c1222c8((int)(o->f54c), 1);
        if (t2 != 0) {
            o->f550 = 2;
        }
        o->f554 += 1;
        return;
L_8c116570:;
        t3 = call_8c122380((void *)(((char *)o + 0x3c)), 0);
        if (t3 != 0) {
            o->f550 = 3;
        }
        o->f554 += 1;
        return;
L_8c11658e:;
        t4 = call_8c1221f4();
        if (t4 == 0) {
            o->f550 = 0;
            o->f53c &= -3;
        }
        o->f554 += 1;
        return;
    }
    o->f550 = 0;
}
