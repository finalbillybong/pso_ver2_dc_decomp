/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c031c98
 * function: operation_8c031c98
 * language: c
 * reference size: 668 bytes
 * compiled size: 668 bytes (+0.0%)
 * differing lines: 72 of 295 reference instruction lines
 * differing bytes: 67
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
typedef struct Frame Frame;
typedef struct S_g8c44be0c S_g8c44be0c;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_g8c46ee80_ac S_g8c46ee80_ac;
typedef struct S_g8c46ee80_b4 S_g8c46ee80_b4;
typedef struct Object Object;
typedef struct S_vv6 S_vv6;
typedef struct S_vv7 S_vv7;
struct Frame {
    float f00;
    float f04;
    float f08;
    Vector3 f0c;
    float f18;
    float f1c;
    float f20;
    int f24;
    char unknown28[0x8];
};
struct Object {
    char unknown0[0x20];
    int f20;
};
struct S_g8c44be0c {
    short f00;
    char unknown2[0x2];
    float f04;
    int f08;
};
struct S_g8c46ee80 {
    char unknown0[0xac];
    S_g8c46ee80_ac *fac;
    char unknownb0[0x4];
    S_g8c46ee80_b4 *fb4;
};
struct S_vv6 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
    float f0c;
    char unknown10[0xc];
    float f1c;
    char unknown20[0x18];
    int f38;
};
struct S_vv7 {
    char unknown0[0x90];
    float f90;
    char unknown94[0x4];
    float f98;
};
extern Vector3 g_8c2e8410;
extern S_g8c44be0c *g_8c44be0c;
extern S_g8c46ee80 *g_8c46ee80;
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, void *, void *);
extern void njUnitVector_8c37b630(void *);
extern void njPopMatrix_8c38accc(int);
extern void call_8c0324b0(Object *, S_vv6 *);
extern float call_8c3845f0(void *, void *);
extern int operation_8c0326b0(int, int, int, void *, float);
void operation_8c031c98(Object *o)
{
    Frame frame;
    float v1;
    int v4;
    S_vv6 *v6;
    int v12;
    S_vv7 *v7;
    float v30;
    float v8;
    int v5;
    int v2;
    int v3;
    float t1;
    int t2;
    int t3;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c2e8410;
    if (g_8c44be0c == 0) {
        return;
    }
    o->f20 = 0;
    v1 = (float)g_8c44be0c->f04;
    v1 = (float)(v1 * v1);
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)(g_8c46ee80->fac));
    call_8c3be38c(0, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f24));
    njUnitVector_8c37b630((void *)(&(&frame)->f24));
    njPopMatrix_8c38accc(1);
    v2 = (int)0x1000;
    v4 = (int)g_8c44be0c->f08;
    v5 = (int)0;
    v6 = (S_vv6 *)v4;
    v3 = (int)-0x1001;
    while (g_8c44be0c->f00 > v5) {
        if (((v6->f38 & 0x20)) != 0) {
            call_8c0324b0(o, v6);
            v12 = (int)((int)v6 + 0x3c);
        } else {
            (&frame)->f00 = v6->f04;
            (&frame)->f04 = 0.0f;
            (&frame)->f08 = v6->f0c;
            v7 = (S_vv7 *)g_8c46ee80;
            (&frame)->f18 = (&frame)->f00 - v7->f90;
            (&frame)->f1c = 0.0f;
            (&frame)->f20 = (&frame)->f08 - v7->f98;
            v8 = (float)((&frame)->f18 * (&frame)->f18 + (&frame)->f1c * (&frame)->f1c + (&frame)->f20 * (&frame)->f20);
            v30 = (float)v6->f1c;
            if ((v30 * v30) > v8) {
                v6->f38 |= v2;
                o->f20 += 1;
                v12 = (int)((int)v6 + 0x3c);
            } else {
                if (v8 > v1) {
                    v6->f38 &= v3;
                    v12 = (int)((int)v6 + 0x3c);
                } else {
                    njUnitVector_8c37b630((void *)(&(&frame)->f18));
                    t1 = call_8c3845f0((void *)(&(&frame)->f24), (void *)(&(&frame)->f18));
                    if (0.0f > t1) {
                        v6->f38 &= v3;
                        v12 = (int)((int)v6 + 0x3c);
                    } else {
                        if (!(0.0f > t1) && 0.5f > t1) {
                            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                            njRotateY_8c37df90(0, (void *)(g_8c46ee80->fb4));
                            call_8c3be38c(0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f0c));
                            njUnitVector_8c37b630((void *)(&(&frame)->f0c));
                            njPopMatrix_8c38accc(1);
                            t2 = operation_8c0326b0((int)o, (int)(&frame), (int)(&(&frame)->f18), (void *)(&(&frame)->f0c), v6->f1c);
                            if (t2 != 0) {
                                v6->f38 |= v2;
                                o->f20 += 1;
                                v12 = (int)((int)v6 + 0x3c);
                                goto L_8c031ec2;
                            }
                            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                            njRotateY_8c37df90(0, (void *)(-(int)(g_8c46ee80->fb4)));
                            call_8c3be38c(0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f0c));
                            njUnitVector_8c37b630((void *)(&(&frame)->f0c));
                            njPopMatrix_8c38accc(1);
                            t3 = operation_8c0326b0((int)o, (int)(&frame), (int)(&(&frame)->f18), (void *)(&(&frame)->f0c), v6->f1c);
                            if (t3 == 0) {
                                goto L_8c031eba;
                            }
                            v6->f38 |= v2;
                            o->f20 += 1;
                            v12 = (int)((int)v6 + 0x3c);
                            goto L_8c031ec2;
                        }
                        v6->f38 |= v2;
                        o->f20 += 1;
                        v12 = (int)((int)v6 + 0x3c);
                        goto L_8c031ec2;
L_8c031eba:;
                        v6->f38 &= v3;
                        v12 = (int)((int)v6 + 0x3c);
                    }
                }
            }
        }
L_8c031ec2:;
        v6 = (S_vv6 *)v12;
        v5 = (int)(v5 + 1);
    }
}
