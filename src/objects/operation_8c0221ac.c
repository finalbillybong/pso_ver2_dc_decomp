typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x308];
    short f308;
    short f30a;
    char unknown30c[0x4];
    int f310;
    char unknown314[0x3c];
    int f350;
    char unknown354[0x268];
    int f5bc;
};
extern int operation_8c01c25c(void);
extern void call_8c025e70(Object *);
extern void operation_8c1e8e60(int, short, int);
extern int actor_matches_current_mode(void *);
extern int object_blocked(void *);
extern void operation_8c03be3c(void *);
void operation_8c0221ac(Object *o)
{
    int v2;
    int v3;
    int v26;
    int v29;
    int v30;
    int v93;
    int t1;
    int t2;
    int t3;
    *(int *)((char *)o + 0x350) &= -0x11;
    if (o->f308 != 1) {
        if (o->f308 == 2) {
            goto L_8c02223e;
        }
        if (o->f308 == 3) {
            goto L_8c0222b0;
        }
        if (o->f308 == 6) {
            goto L_8c0222b0;
        }
        return;
    }
    t1 = operation_8c01c25c();
    if (t1 != 0xf && *(int *)0x8c41bd10 != 0) {
        goto L_8c02222e;
    }
    call_8c025e70(o);
    operation_8c1e8e60((int)o, o->f30a, 7);
    v2 = (int)(((o->f350 & 0x30)) != 0);
    if (v2 == 0) {
        operation_8c1e8e60((int)o, o->f30a, 2);
        v3 = (int)(((o->f350 & 0x30)) != 0);
        if (v3 == 0) {
L_8c02222e:;
            operation_8c1e8e60((int)o, o->f30a, 3);
            return;
L_8c02223e:;
            t2 = actor_matches_current_mode((void *)o);
            if (t2 == 0) {
                v26 = (int)(((o->f350 & 4)) != 0);
                if (v26 == 0) {
                    operation_8c1e8e60((int)o, (short)0x16, 0);
                    return;
                }
            }
            v29 = (int)(o->f5bc == 2);
            if (v29 != 0) {
                t3 = object_blocked((void *)o);
                if (t3 != 0) {
                    v30 = (int)(((o->f310 & 4)) != 0);
                    if (v30 != 0) {
                        o->f350 |= 0x4000000;
                        operation_8c03be3c((void *)(((char *)o + 0x5b8)));
                    }
                }
            }
            operation_8c1e8e60((int)o, o->f30a, 8);
            return;
L_8c0222b0:;
            operation_8c1e8e60((int)o, o->f30a, 7);
            v93 = (int)(((o->f350 & 0x30)) != 0);
            if (v93 == 0) {
                operation_8c1e8e60((int)o, o->f30a, 3);
            }
        }
    }
}
