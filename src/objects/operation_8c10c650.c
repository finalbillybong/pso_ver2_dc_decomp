typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg0_7c_94 Arg0_7c_94;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x32];
    unsigned char f56;
    char unknown57[0x19];
    short f70;
    char unknown72[0xa];
    Arg0_7c *f7c;
    char unknown80[0x4];
    int f84;
    int f88;
    char unknown8c[0x6];
    short f92;
    char unknown94[0x4c];
    Vector3 fe0;
};
struct Arg0_7c {
    char unknown0[0x8c];
    int f8c;
    char unknown90[0x4];
    Arg0_7c_94 *f94;
};
struct Arg0_7c_94 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern int current_effect_mode(void);
extern void operation_8c10ce6c(void *);
extern void call_8c110a74(Object *, int);
extern int call_8c10cfbc(Object *, int);
extern void operation_8c110278(void *, int);
extern float squared_distance_xz(void *, void *);
extern int operation_8c1eacf4(void *);
extern int call_8c12b944(void);
extern float call_8c12c714(float);
extern int call_8c10cbb8(Object *);
extern int call_8c10ccc8(Object *);
void operation_8c10c650(Object *o)
{
    float v1;
    float v3;
    int v16;
    int t1;
    int t2;
    float t3;
    int t4;
    int t5;
    float t6;
    int t7;
    int t8;
    int t9;
    float t10;
    int t11;
    t1 = current_effect_mode();
    if (t1 == 0) {
        operation_8c10ce6c((void *)o);
        call_8c110a74(o, 1);
        return;
    }
    switch (o->f20) {
    case 0:
        if (((o->f7c->f8c & 2)) != 0) {
            o->f20 = 1;
            call_8c110a74(o, 0);
            return;
        }
        o->f84 &= -0x101;
        t2 = call_8c10cfbc(o, 1);
        if (t2 != 0) {
            if (((o->f84 & 0x200)) != 0) {
                operation_8c110278((void *)o, 0x13);
                call_8c110a74(o, 8);
                return;
            }
            o->f84 &= -0x201;
            t3 = squared_distance_xz((void *)(&o->fe0), (void *)(&o->f7c->f94->f3c));
            if (900.0f > t3) {
                call_8c110a74(o, 8);
                return;
            }
            operation_8c10ce6c((void *)o);
            call_8c110a74(o, 1);
            return;
        }
        operation_8c10ce6c((void *)o);
        call_8c110a74(o, 1);
        o->f92 = 0;
        return;
    case 1:
        v1 = (float)1.0f;
        if (((o->f84 & 0x8000)) != 0) {
            v1 = (float)2.0f;
        }
        t4 = operation_8c1eacf4((void *)(o->f7c->f94));
        if (t4 != 0) {
            if (o->f92 == 0) {
                t5 = call_8c12b944();
                t6 = call_8c12c714((float)t5 / 32768.0f * 10.0f);
                v3 = (float)((float)o->f56 * 0.1f * v1);
                if (v3 > t6) {
                    o->f92 = 0;
                } else {
                    o->f92 = (int)((t6 - v3) * 10.0f);
                }
            }
        }
        o->f92 -= 1;
        if (!(o->f92 >= 0)) {
            o->f92 = 0;
        }
        t7 = call_8c10cbb8(o);
        if (t7 != 0) {
            if (o->f88 == 0) {
                t8 = call_8c10cfbc(o, 0);
                if (t8 != 0) {
                    operation_8c110278((void *)o, 0x13);
                    call_8c110a74(o, 8);
                    o->f84 &= -0x81;
                    goto L_8c10cad6;
                }
                if (((o->f84 & 0x80)) != 0) {
                    o->f84 &= -0x81;
                    if (o->f92 != 0) {
                        goto L_8c10cad6;
                    }
                    call_8c110a74(o, 2);
                    goto L_8c10cad6;
                }
                operation_8c10ce6c((void *)o);
                call_8c110a74(o, 1);
                goto L_8c10cad6;
            }
        }
        t9 = call_8c10cfbc(o, 1);
        if (t9 == 0) {
        } else {
            o->f70 = 0;
            v16 = (int)o->f84;
            if (((v16 & 0x200)) != 0) {
                operation_8c110278((void *)o, 0x13);
                call_8c110a74(o, 8);
                goto L_8c10cad6;
            }
            if (((v16 & 0x80)) != 0) {
                o->f84 = v16 & -0x281;
                if (o->f92 != 0) {
                    goto L_8c10cad6;
                }
                call_8c110a74(o, 2);
                goto L_8c10cad6;
            }
            o->f84 = v16 & -0x201;
            t10 = squared_distance_xz((void *)(&o->fe0), (void *)(&o->f7c->f94->f3c));
            if (900.0f > t10) {
                call_8c110a74(o, 8);
                goto L_8c10cad6;
            }
            if (o->f88 != 0) {
                if (o->f92 != 0) {
                    goto L_8c10cad6;
                }
                call_8c110a74(o, 2);
                goto L_8c10cad6;
            }
            operation_8c10ce6c((void *)o);
            call_8c110a74(o, 1);
            goto L_8c10cad6;
        }
        t11 = call_8c10ccc8(o);
        if (t11 != 0) {
            if (o->f92 == 0) {
                if (((o->f84 & 0x1000)) != 0) {
                    call_8c110a74(o, 2);
                    o->f84 &= -0x1001;
                } else {
                    call_8c110a74(o, 1);
                }
                o->f84 &= -0x1001;
                goto L_8c10cad6;
            }
        }
        if (o->f88 != 0) {
            operation_8c10ce6c((void *)o);
        } else {
            *(Vector3 *)&o->fe0 = *(Vector3 *)&o->f7c->f94->f3c;
        }
        call_8c110a74(o, 1);
L_8c10cad6:;
        if (((o->f7c->f8c & 2)) == 0) {
            o->f20 = 0;
        }
    }
}
