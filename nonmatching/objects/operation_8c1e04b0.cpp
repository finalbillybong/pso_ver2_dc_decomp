/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e04b0
 * function: operation_8c1e04b0
 * language: c++
 * reference size: 1336 bytes
 * compiled size: 1336 bytes (+0.0%)
 * differing lines: 520 of 525 reference instruction lines
 * differing bytes: 714
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
typedef struct S_L8c41ccec S_L8c41ccec;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
typedef struct S_vv13 S_vv13;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_0 S_vv8_0;
struct S_L8c41ccec {
    char unknown0[0xf];
    unsigned char f0f;
};
struct S_vv8 {
    S_vv8_0 *f00;
};
struct Object {
    char unknown0[0x68];
    int f68;
    char unknown6c[0x10];
    Arg0_7c *f7c;
};
struct Arg0_7c {
    char unknown0[0xbc];
    int fbc;
};
struct S_vv13 {
    char unknown0[0xbc];
    int fbc;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" void operation_8c20978c(int, int);
extern "C" void operation_8c1e25c8(void *);
extern "C" int operation_8c1e04b0(Object *o, int a1)
{
    int v4;
    int v7;
    S_vv8 *v8;
    int v9;
    int v1;
    int v12;
    S_vv13 *v13;
    int v14;
    switch (*(char *)0x8c4e30a0) {
    case 0:
        *(Vector3 *)&*(Vector3 *)0x8c32b408 = *(Vector3 *)&*(Vector3 *)0x8c32b2d0;
        *(Vector3 *)&*(Vector3 *)0x8c32b414 = *(Vector3 *)&*(Vector3 *)0x8c32b2dc;
        *(Vector3 *)&*(Vector3 *)0x8c32b420 = *(Vector3 *)&*(Vector3 *)0x8c32b2e8;
        *(Vector3 *)&*(Vector3 *)0x8c32b42c = *(Vector3 *)&*(Vector3 *)0x8c32b2f4;
        *(Vector3 *)&*(Vector3 *)0x8c32b438 = *(Vector3 *)&*(Vector3 *)0x8c32b300;
        *(Vector3 *)&*(Vector3 *)0x8c32b444 = *(Vector3 *)&*(Vector3 *)0x8c32b30c;
        *(Vector3 *)&*(Vector3 *)0x8c32b450 = *(Vector3 *)&*(Vector3 *)0x8c32b318;
        {
            Vector3 *p_ = (Vector3 *)&*(Vector3 *)0x8c32b324;
            *(Vector3 *)&*(Vector3 *)0x8c32b45c = *p_;
        }
        {
            Vector3 *p_ = (Vector3 *)&*(Vector3 *)0x8c32b330;
            *(Vector3 *)&*(Vector3 *)0x8c32b468 = *p_;
        }
        {
            Vector3 *p_ = (Vector3 *)&*(Vector3 *)0x8c32b33c;
            *(Vector3 *)&*(Vector3 *)0x8c32b474 = *p_;
        }
        {
            Vector3 *p_ = (Vector3 *)&*(Vector3 *)0x8c32b348;
            *(Vector3 *)&*(Vector3 *)0x8c32b480 = *p_;
        }
        *(Vector3 *)&*(Vector3 *)0x8c32b48c = *(Vector3 *)&*(Vector3 *)0x8c32b354;
        *(Vector3 *)&*(Vector3 *)0x8c32b498 = *(Vector3 *)&*(Vector3 *)0x8c32b360;
        *(Vector3 *)&*(Vector3 *)0x8c32b4a4 = *(Vector3 *)&*(Vector3 *)0x8c32b36c;
        *(Vector3 *)&*(Vector3 *)0x8c32b4b0 = *(Vector3 *)&*(Vector3 *)0x8c32b378;
        *(Vector3 *)&*(Vector3 *)0x8c32b4bc = *(Vector3 *)&*(Vector3 *)0x8c32b384;
        *(Vector3 *)&*(Vector3 *)0x8c32b4c8 = *(Vector3 *)&*(Vector3 *)0x8c32b390;
        *(Vector3 *)&*(Vector3 *)0x8c32b4d4 = *(Vector3 *)&*(Vector3 *)0x8c32b39c;
        *(Vector3 *)&*(Vector3 *)0x8c32b4e0 = *(Vector3 *)&*(Vector3 *)0x8c32b3a8;
        {
            Vector3 *p_ = (Vector3 *)&*(Vector3 *)0x8c32b3b4;
            *(Vector3 *)&*(Vector3 *)0x8c32b4ec = *p_;
        }
        {
            Vector3 *p_ = (Vector3 *)&*(Vector3 *)0x8c32b3c0;
            *(Vector3 *)&*(Vector3 *)0x8c32b4f8 = *p_;
        }
        *(Vector3 *)&*(Vector3 *)0x8c32b504 = *(Vector3 *)&*(Vector3 *)0x8c32b3cc;
        *(Vector3 *)&*(Vector3 *)0x8c32b510 = *(Vector3 *)&*(Vector3 *)0x8c32b3d8;
        *(Vector3 *)&*(Vector3 *)0x8c32b51c = *(Vector3 *)&*(Vector3 *)0x8c32b3e4;
        *(Vector3 *)&*(Vector3 *)0x8c32b528 = *(Vector3 *)&*(Vector3 *)0x8c32b3f0;
        *(Vector3 *)&*(Vector3 *)0x8c32b534 = *(Vector3 *)&*(Vector3 *)0x8c32b3fc;
        *(char *)0x8c4e30a0 = 1;
    }
    v1 = (int)*(int *)0x8c467188;
    if (((S_L8c41ccec *)0x8c41ccec)->f0f == 2) {
        v7 = (int)*(unsigned char *)((char *)0x8c2f1f58 + ((unsigned char)a1));
    } else {
        if (((S_L8c41ccec *)0x8c41ccec)->f0f == 6) {
            v4 = (int)*(unsigned char *)((char *)0x8c2f258e + ((unsigned char)a1));
        } else {
            v4 = (int)*(unsigned char *)((char *)0x8c2f24c2 + ((unsigned char)a1));
        }
        v7 = (int)v4;
    }
    if ((unsigned int)(unsigned char)v7 > (unsigned int)0x1f) {
        return 0;
    }
    if ((unsigned int)0x1a > (unsigned int)(unsigned char)v7) {
        v8 = (S_vv8 *)&o->f7c;
        (((PmfObj *)(v8->f00))->*(*(PMF_0 *)((unsigned char)v7 * 0xc + 0x8c32b408)))();
        return 1;
    }
    switch ((unsigned char)v7) {
    case 30:
        v9 = (int)o->f68;
        if (((v9 & 1)) != 0) {
            o->f68 = v9 | 0x10;
            goto L_8c1e09c6;
        }
        if (v1 == 0) {
            if (((v9 & 0x80)) == 0) {
                goto L_8c1e084c;
            }
        }
        o->f68 = v9 & -0x11 | ~(v9 & 0x10 | -0x11);
        goto L_8c1e09c6;
L_8c1e084c:;
        o->f7c->fbc |= 2;
        operation_8c20978c(0x20, -0x21);
        break;
    case 26:
        if (v1 != 0) {
            goto L_8c1e09c6;
        }
        if (((o->f68 & 0x40)) != 0) {
            goto L_8c1e09c6;
        }
        if (((o->f7c->fbc & 1)) != 0) {
            o->f7c->fbc = (unsigned int)o->f7c->fbc >> 1 << 1;
            operation_8c20978c(0, -0x11);
            operation_8c1e25c8((void *)(o->f7c));
            v7 = (int)/* ? clobbered */ 0;
            goto L_8c1e09c6;
        }
        o->f7c->fbc |= 1;
        operation_8c20978c(0x10, -0x11);
        break;
    case 27:
        v12 = (int)o->f68;
        if (((v12 & 0x40)) == 0) {
            if ((v12 & 0x84) != 0x84) {
                v13 = (S_vv13 *)o->f7c;
                v14 = (int)v13->fbc;
                if (((v14 & 2)) != 0) {
                    v13->fbc = v14 & -3;
                    operation_8c20978c(0, -0x21);
                } else {
                    if (((v12 & 4)) != 0) {
                        v13->fbc = v14 & -5 | ~(v14 & 4 | -5);
                        if (((o->f7c->fbc & 4)) != 0) {
                            operation_8c20978c(0x40, -0x41);
                            v7 = (int)/* ? clobbered */ 0;
                            goto L_8c1e09c6;
                        }
                        operation_8c20978c(0, -0x41);
                        v7 = (int)/* ? clobbered */ 0;
                        goto L_8c1e09c6;
                    }
                }
                if (((o->f68 & 0x80)) != 0) {
                    o->f7c->fbc |= 8;
                    operation_8c20978c(0x80, -0x81);
                } else {
                    o->f7c->fbc &= -9;
                    operation_8c20978c(0, -0x81);
                }
            }
        }
    }
L_8c1e09c6:;
    return 1;
}
