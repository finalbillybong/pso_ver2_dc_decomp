/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10d790
 * function: operation_8c10d790
 * language: c
 * reference size: 452 bytes
 * compiled size: 452 bytes (+0.0%)
 * differing lines: 22 of 179 reference instruction lines
 * differing bytes: 29
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
typedef struct S_c8c0adc1c S_c8c0adc1c;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg0_7c_94 Arg0_7c_94;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x18];
    char f54;
    char unknown55[0x2];
    unsigned char f57;
    char unknown58[0x24];
    Arg0_7c *f7c;
    char unknown80[0x4];
    int f84;
};
struct Arg0_7c {
    char unknown0[0x80];
    int f80;
    char unknown84[0xc];
    int f90;
    Arg0_7c_94 *f94;
};
struct Arg0_7c_94 {
    char unknown0[0x19a];
    short f19a;
    char unknown19c[0x196];
    short f332;
};
struct S_c8c0adc1c {
    char unknown0[0x10];
    int f10;
};
extern int operation_8c1eacf4(void *);
extern int rand(void);
extern float call_8c12c714(float);
extern void call_8c110f74(Object *);
extern S_c8c0adc1c *call_8c0adc1c(int, int);
extern void operation_8c110278(void *, int);
extern int operation_8c1ecae8(void *, int);
extern void call_8c111238(Object *, int);
void operation_8c10d790(Object *o)
{
    int v22;
    int v1;
    int v2;
    int v7;
    int v14;
    int t1;
    int t2;
    float t3;
    S_c8c0adc1c *t4;
    int t5;
    if (o->f7c->f80 == 0xffff) {
        return;
    }
    t1 = operation_8c1eacf4((void *)(o->f7c->f94));
    if (t1 == 0) {
        return;
    }
    v22 = (int)o->f38;
    switch (v22 & 0x40) {
    case 0:
        v1 = (int)o->f7c->f90;
        switch (v1 & 0x10) {
        case 0:
            if (((o->f38 & 4)) != 0) {
                v2 = (int)0;
            } else {
                if (((o->f38 & 8)) != 0) {
                    v2 = (int)1;
                } else {
                    if (((o->f38 & 0x10)) != 0) {
                        v2 = (int)2;
                    } else {
                        v2 = (int)0;
                    }
                }
            }
            if (((o->f84 & 0x2000)) != 0) {
                if (((v1 & 0x1000)) != 0) {
                    v7 = (int)1;
                    goto L_8c10d824;
                }
            }
            v7 = (int)0;
L_8c10d824:;
            if (v7 == 0) {
                t2 = rand();
                t3 = call_8c12c714((float)t2 / 32768.0f * 10.0f);
                if (t3 > ((float)o->f57 * 0.1f)) {
                    call_8c110f74(o);
                    return;
                }
            }
            v14 = (int)*(int *)((char *)&*(int *)((char *)0x8c285d70 + (v2 << 3)) + (v7 << 2));
            t4 = call_8c0adc1c(v14, (int)(o->f54));
            t3 = (float)o->f7c->f94->f19a;
            if (!(((float)(o->f7c->f94->f332 - t4->f10) / t3) > 0.2f)) {
                if (t3 != 0.0f) {
                    operation_8c110278((void *)o, 3);
                }
            }
            o->f84 &= -0x2001;
            t5 = operation_8c1ecae8((void *)(o->f7c->f94), v14);
            if (t5 != 0) {
                call_8c111238(o, v14);
                return;
            }
        }
    }
    call_8c110f74(o);
}
