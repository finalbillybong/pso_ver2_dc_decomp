/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a36f8
 * function: TCameraEditor_v06_8c0a36f8
 * language: c
 * reference size: 708 bytes
 * compiled size: 712 bytes (+0.6%)
 * differing lines: 152 of 301 reference instruction lines
 * differing bytes: 633
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3032d8 S_L8c3032d8;
typedef struct S_L8c3032d8_18 S_L8c3032d8_18;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Frame Frame;
typedef struct S_g8c462c88 S_g8c462c88;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv19 S_vv19;
typedef struct S_vv20 S_vv20;
typedef struct Block_p0_64 {
    float f00;
    float f04;
    float f08;
} Block_p0_64;
struct S_L8c3032d8 {
    char unknown0[0x18];
    S_L8c3032d8_18 *f18;
};
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
    float f2c;
    char unknown30[0x14];
    int f44;
    char unknown48[0x10];
    float f58;
    float f5c;
    float f60;
    Block_p0_64 f64;
    float f70;
    float f74;
    float f78;
    int f7c;
    int f80;
    int f84;
    char unknown88[0x14];
    int f9c;
};
struct S_g8c46ee80 {
    char unknown0[0xa8];
    int fa8;
    int fac;
    int fb0;
};
struct S_L8c41cba0 {
    char unknown0[0x98];
    int f98;
    char unknown9c[0x4];
    int fa0;
    int fa4;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_vv19 {
    char unknown0[0x20];
    Vector3 f20;
};
struct S_vv20 {
    Vector3 f00;
};
struct S_vv1 {
    char unknown0[0x40];
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    int f58;
};
extern Vector3 g_8c303360;
extern short g_8c462c80;
extern S_g8c46ee80 *g_8c46ee80;
extern S_L8c3032d8 g_8c3032d8;
extern S_L8c41cba0 g_8c41cba0;
extern void operation_8c0a3c80(Object *, void *);
extern void operation_8c0a3b74(Object *, void *, void *, void *);
extern void operation_8c03ca54(Object *);
extern void hs_8c0a39bc(Object *);
void TCameraEditor_v06_8c0a36f8(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int v6;
    int v13;
    S_vv19 *v19;
    S_vv20 *v20;
    v1 = (S_vv1 *)(&g_8c3032d8)->f18;
    if (v1 == 0) {
        return;
    }
    if (g_8c46ee80 != 0) {
        o->f7c = (int)(g_8c46ee80->fa8);
        o->f80 = (int)(g_8c46ee80->fac);
        o->f84 = (int)(g_8c46ee80->fb0);
    }
    v6 = (int)(&g_8c41cba0)->f98;
    if (((v6 & 0x200)) != 0 && ((v6 & 0x10000)) != 0) {
        o->f2c += 1.0f;
    }
    v13 = (int)(&g_8c41cba0)->f98;
    if (((v13 & 0x200)) != 0 && ((v13 & 0x20000)) != 0) {
        o->f2c -= 1.0f;
    }
    if (1.0f > o->f2c) {
        o->f2c = 1.0f;
    }
    if (o->f2c > 40.0f) {
        o->f2c = 40.0f;
    }
    if (o->f44 != 0) {
        if (o->f44 == 1) {
            goto L_8c0a385e;
        }
    } else {
        {
            Vector3 *p_ = (Vector3 *)&g_8c303360;
            *(Vector3 *)&(&frame)->f00 = *p_;
        }
        v19 = (S_vv19 *)*(S_g8c462c88 **)((char *)0x8c462c88 + (g_8c462c80 << 2));
        if (v19 != 0) {
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&v19->f20;
            v20 = (S_vv20 *)&(&frame)->f0c;
        } else {
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&(&frame)->f00;
            v20 = (S_vv20 *)&(&frame)->f0c;
        }
        *(Vector3 *)&o->f64 = *(Vector3 *)&v20->f00;
        operation_8c0a3c80(o, &o->f70);
        o->f70 = o->f58 + o->f64.f00;
        o->f74 = o->f5c + o->f64.f04;
        o->f78 = o->f60 + o->f64.f08;
        if ((((&g_8c41cba0)->fa0 & 0x400)) != 0) {
            o->f44 = 1;
            goto L_8c0a38d8;
L_8c0a385e:;
            operation_8c0a3b74(o, &o->f64, &o->f70, &o->f7c);
            o->f58 = o->f70 - o->f64.f00;
            o->f5c = o->f74 - o->f64.f04;
            o->f60 = o->f78 - o->f64.f08;
            if ((((&g_8c41cba0)->fa4 & 0x400)) != 0) {
                o->f20 = o->f64.f00;
                o->f24 = o->f64.f04;
                o->f28 = o->f64.f08;
                o->f44 = 0;
            }
        }
    }
L_8c0a38d8:;
    v1->f40 = o->f64.f00;
    v1->f44 = o->f64.f04;
    v1->f48 = o->f64.f08;
    v1->f58 = (int)((float)o->f9c * 65536.0f / 360.0f);
    v1->f4c = o->f70;
    v1->f50 = o->f74;
    v1->f54 = o->f78;
    operation_8c03ca54(o);
    hs_8c0a39bc(o);
}
