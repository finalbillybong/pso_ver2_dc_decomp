/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10de20
 * function: operation_8c10de20
 * language: c
 * reference size: 1820 bytes
 * compiled size: 1820 bytes (+0.0%)
 * differing lines: 122 of 738 reference instruction lines
 * differing bytes: 150
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg0_7c_94 Arg0_7c_94;
typedef struct S_vv27 S_vv27;
typedef struct S_vv27_94 S_vv27_94;
typedef struct S_vv4 S_vv4;
typedef struct Block_frame_54 {
    int f00;
    char unknown4[0x8];
} Block_frame_54;
typedef struct Block_p0_a4 {
    float f00;
    float f04;
    float f08;
} Block_p0_a4;
typedef struct Block_p0_d4 {
    float f00;
    float f04;
    float f08;
} Block_p0_d4;
typedef struct Block_frame_90 {
    float f00;
    float f04;
    float f08;
} Block_frame_90;
typedef struct Block_frame_78 {
    int f00;
    char unknown4[0x8];
} Block_frame_78;
struct Frame {
    Vector3 f00;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    Vector3 f24;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    Vector3 f48;
    Block_frame_54 f54;
    int f60;
    char unknown64[0x8];
    float f6c;
    float f70;
    float f74;
    Block_frame_78 f78;
    int f84;
    char unknown88[0x8];
    Block_frame_90 f90;
};
struct Object {
    char unknown0[0x7c];
    Arg0_7c *f7c;
    char unknown80[0x4];
    int f84;
    char unknown88[0x8];
    char f90;
    char f91;
    char unknown92[0x2];
    short f94;
    char unknown96[0x2];
    float f98;
    float f9c;
    float fa0;
    Block_p0_a4 fa4;
    char unknownb0[0x24];
    Block_p0_d4 fd4;
    float fe0;
    float fe4;
    float fe8;
};
struct Arg0_7c {
    char unknown0[0x94];
    Arg0_7c_94 *f94;
    char unknown98[0x8];
    float fa0;
    float fa4;
};
struct Arg0_7c_94 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x2dc];
    float f324;
    float f328;
    float f32c;
};
struct S_vv4 {
    char unknown0[0x324];
    float f324;
    float f328;
    float f32c;
};
struct S_vv27 {
    char unknown0[0x8c];
    int f8c;
    char unknown90[0x4];
    S_vv27_94 *f94;
    char unknown98[0x4];
    float f9c;
};
struct S_vv27_94 {
    char unknown0[0x3c];
    float f3c;
};
extern Vector3 g_8c30fb10;
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern int operation_8c10f4b0(int, int, int, void *, void *);
extern int call_8c10f4fc(Object *, void *, void *, void *, void *, void *);
extern int project_contact_position(void *, void *, void *, void *);
extern int call_8c10f90c(Object *, void *);
extern void operation_8c10f764(void *, void *, void *, void *, void *);
void operation_8c10de20(Object *o)
{
    Frame frame;
    S_vv4 *v4;
    int v21;
    int v28;
    S_vv27 *v27;
    float t1;
    int t2;
    int t3;
    int t4;
    float t5;
    float t7;
    int t8;
    float t9;
    int t10;
    (&frame)->f6c = o->fe0 - o->f7c->f94->f324;
    (&frame)->f70 = o->fe4 - o->f7c->f94->f328;
    (&frame)->f74 = o->fe8 - o->f7c->f94->f32c;
    t1 = njScalor_8c37e480((void *)(&(&frame)->f6c));
    if (t1 != 0.0f) {
        njUnitVector_8c37b630((void *)(&(&frame)->f6c));
    }
    v4 = (S_vv4 *)o->f7c->f94;
    (&frame)->f90.f00 = t1 * 0.5f * (&frame)->f6c + v4->f324;
    (&frame)->f90.f04 = t1 * 0.5f * (&frame)->f70 + v4->f328;
    (&frame)->f90.f08 = t1 * 0.5f * (&frame)->f74 + v4->f32c;
    t2 = operation_8c10f4b0((int)o, (int)((int)v4 + 0x324), (int)(&o->fe0), (void *)(&(&frame)->f84), (void *)(&(&frame)->f60));
    if (t2 == 0) {
    } else {
        *(Vector3 *)&(&frame)->f54 = *(Vector3 *)&g_8c30fb10;
        t3 = call_8c10f4fc(o, (void *)(&o->f7c->f94->f324), (void *)(&(&frame)->f84), (void *)(&(&frame)->f60), (void *)(&(&frame)->f78.f00), (void *)(&(&frame)->f54.f00));
        if (((o->f84 & 1)) != 0) {
        } else {
            if (t3 != 0) {
                *(Vector3 *)&o->fa4 = *(Vector3 *)&(&frame)->f54;
            } else {
                *(Vector3 *)&o->fa4 = *(Vector3 *)&(&frame)->f78;
                o->fa4.f04 = o->fe4;
                t4 = project_contact_position((void *)o, (void *)(&o->fe0), (void *)(&o->fa4), (void *)(&(&frame)->f48));
                if (t4 != 0) {
                    *(Vector3 *)&o->fa4 = *(Vector3 *)&(&frame)->f48;
                }
            }
            o->f98 = o->fe0 - o->fa4.f00;
            o->f9c = 0.0f;
            o->fa0 = o->fe8 - o->fa4.f08;
            t5 = njScalor_8c37e480((void *)(&o->f98));
            if (t5 != 0.0f) {
                njUnitVector_8c37b630((void *)(&o->f98));
            }
            o->f84 |= 1;
        }
        if (t3 != 0) {
            o->f94 = 0;
            if (((o->f84 & 2)) != 0) {
                (&frame)->f3c = o->fd4.f00 - o->f7c->f94->f3c;
                (&frame)->f40 = 0.0f;
                (&frame)->f44 = o->fd4.f08 - o->f7c->f94->f44;
                if (njScalor_8c37e480((void *)(&(&frame)->f3c)) > 1.5f) {
                    return;
                }
                *(Vector3 *)&o->fd4 = *(Vector3 *)&(&frame)->f54;
                o->f84 &= -3;
                return;
            }
            *(Vector3 *)&o->fd4 = *(Vector3 *)&(&frame)->f54;
            return;
        }
        if (((o->f84 & 2)) != 0) {
            (&frame)->f30 = o->fd4.f00 - o->f7c->f94->f3c;
            (&frame)->f34 = 0.0f;
            (&frame)->f38 = o->fd4.f08 - o->f7c->f94->f44;
            t7 = njScalor_8c37e480((void *)(&(&frame)->f30));
            if (!(t7 > 5.0f)) {
                t8 = project_contact_position((void *)o, (void *)(&o->f7c->f94->f324), (void *)(&(&frame)->f78), (void *)(&(&frame)->f24));
                if (t8 != 0) {
                    *(Vector3 *)&o->fd4 = *(Vector3 *)&(&frame)->f24;
                } else {
                    *(Vector3 *)&o->fd4 = *(Vector3 *)&(&frame)->f78;
                }
                o->f84 &= -3;
                o->f94 = 0;
            }
            o->f94 += 1;
            v21 = (int)o->f94;
            if (!(v21 >= 0x64)) {
                return;
            }
            o->f94 = 0x64;
            return;
        }
        o->f94 = 0;
        (&frame)->f18 = o->fd4.f00 - o->f7c->f94->f3c;
        (&frame)->f1c = 0.0f;
        (&frame)->f20 = o->fd4.f08 - o->f7c->f94->f44;
        o->fd4.f00 = o->fa4.f00;
        o->fd4.f04 = o->fa4.f04;
        o->fd4.f08 = o->fa4.f08;
        t9 = njScalor_8c37e480((void *)(&(&frame)->f18));
        if (!(1.0f > t9)) {
        } else {
            o->f94 = 0;
            o->fd4.f00 = o->fa4.f00 + o->f98 * 40.0f;
            o->fd4.f04 = o->fa4.f04 + o->f9c * 40.0f;
            o->fd4.f08 = o->fa4.f08 + o->fa0 * 40.0f;
            o->f84 |= 2;
            o->f84 = (unsigned int)o->f84 >> 1 << 1;
        }
        return;
    }
    v27 = (S_vv27 *)o->f7c;
    v28 = (int)v27->f8c;
    if (((v28 & 0x20)) != 0) {
        t10 = call_8c10f90c(o, (void *)(&(&frame)->f78));
        if (t10 != 0 && 0x1e > o->f90) {
            *(Vector3 *)&o->fd4 = *(Vector3 *)&(&frame)->f78;
            goto L_8c10e508;
        }
        if (o->f91 > 0xf) {
            o->f90 = 0;
        }
        *(Vector3 *)&o->fd4 = *(Vector3 *)&(&frame)->f90;
    } else {
        if (((v28 & 0x80)) != 0) {
            *(Vector3 *)&o->fd4 = *(Vector3 *)&(&frame)->f90;
        } else {
            if (o->f90 >= 0xf && 0x1e > o->f90) {
                (&frame)->f0c = v27->f94->f3c - v27->f9c;
                (&frame)->f10 = o->f7c->f94->f40 - o->f7c->fa0;
                (&frame)->f14 = o->f7c->f94->f44 - o->f7c->fa4;
                operation_8c10f764((void *)o, (void *)(&o->f7c->f94->f3c), (void *)(&o->fe0), (void *)(&(&frame)->f0c), (void *)(&frame));
                *(Vector3 *)&o->fd4 = *(Vector3 *)&(&frame)->f00;
                goto L_8c10e508;
            }
            if (o->f91 > 0xf) {
                o->f90 = 0;
            }
            *(Vector3 *)&o->fd4 = *(Vector3 *)&(&frame)->f90;
        }
    }
L_8c10e508:;
    o->f84 = (unsigned int)o->f84 >> 1 << 1;
    o->f94 = 0;
}
