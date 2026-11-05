/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10dc04
 * function: operation_8c10dc04
 * language: c
 * reference size: 540 bytes
 * compiled size: 540 bytes (+0.0%)
 * differing lines: 28 of 218 reference instruction lines
 * differing bytes: 276
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg0_7c_94 Arg0_7c_94;
typedef struct S_vv16 S_vv16;
typedef struct S_vv18 S_vv18;
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x1c];
    float f5c;
    char unknown60[0x18];
    Arg0_78 *f78;
    Arg0_7c *f7c;
    int f80;
    int f84;
    int f88;
    char unknown8c[0x4];
    char f90;
    char f91;
    char unknown92[0x4e];
    float fe0;
    char unknowne4[0x4];
    float fe8;
};
struct Arg0_78 {
    char unknown0[0x8a];
    unsigned short f8a;
    char unknown8c[0x8];
    int f94;
};
struct Arg0_7c {
    char unknown0[0x8c];
    int f8c;
    int f90;
    Arg0_7c_94 *f94;
    int f98;
};
struct S_vv18 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct S_vv16 {
    Vector3 f00;
};
struct Arg0_7c_94 {
    char unknown0[0x48];
    Vector3 f48;
};
extern float squared_distance_xz(void *, void *);
extern void operation_8c10e8c0(void *, float, int);
extern void operation_8c10e884(void *, float);
extern void operation_8c10e8fc(Arg0_7c *);
extern float errno_wrap_8c130334(float, float);
extern void call_8c10f344(Arg0_7c *);
extern int operation_8c10ea5c(void *);
extern void operation_8c110278(void *, int);
extern int operation_8c10e728(Arg0_7c *);
void operation_8c10dc04(Object *o)
{
    char *v17;
    S_vv18 *v18;
    S_vv16 *v16;
    int v3;
    float t1;
    float t2;
    int t3;
    int t4;
    t1 = squared_distance_xz((void *)((char *)o->f78->f94 + 0x3c), (void *)(((char *)o->f7c->f94 + 0x3c)));
    o->f5c = t1;
    if (o->f88 != 0) {
        operation_8c10e8c0((void *)(o->f7c), o->f3c, (int)(o->f78->f8a));
    } else {
        operation_8c10e884((void *)(o->f7c), o->f3c);
    }
    operation_8c10e8fc((Arg0_7c *)(o->f7c));
    v18 = (S_vv18 *)o->f7c->f94;
    t2 = errno_wrap_8c130334(o->fe0 - v18->f3c, o->fe8 - v18->f44);
    o->f7c->f98 = (int)(t2 * 65536.0f / 6.28318405f);
    call_8c10f344((Arg0_7c *)(o->f7c));
    t3 = operation_8c10ea5c((void *)(o->f7c));
    if (t3 != 0) {
        v3 = (int)o->f7c->f90;
        if (((v3 & 0x40)) != 0) {
            operation_8c110278((void *)o, 0xe);
        } else {
            if (((v3 & 0x80)) != 0) {
                operation_8c110278((void *)o, 0xf);
            } else {
                if (((v3 & 0x200)) != 0) {
                    if (o->f80 == 8) {
                        goto L_8c10dd38;
                    }
                    if (((o->f84 & 0x10000)) != 0) {
                        o->f84 &= -0x10001;
                        goto L_8c10dd38;
                    }
                    operation_8c110278((void *)o, 0x11);
                } else {
                    operation_8c110278((void *)o, 0x10);
                }
            }
        }
    }
L_8c10dd38:;
    t4 = operation_8c10e728((Arg0_7c *)(o->f7c));
    if (t4 == 0) {
        if (o->f80 != 1) {
            return;
        }
        if (((o->f7c->f8c & 0x80)) != 0) {
            o->f90 = 0;
            o->f91 = 0;
            return;
        }
        o->f91 += 1;
        if (o->f91 > 0x1e) {
            o->f91 = 0x1e;
        }
        o->f90 += 1;
        return;
    }
    v16 = (S_vv16 *)((char *)o->f7c + 0x9c);
    *(Vector3 *)&v16->f00 = *(Vector3 *)&o->f7c->f94->f48;
    o->f90 = 0;
    o->f91 = 0;
}
