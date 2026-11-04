/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15e24c
 * function: TObjEnePanBARA_update_8c15e24c
 * language: c++
 * reference size: 748 bytes
 * compiled size: 752 bytes (+0.5%)
 * differing lines: 84 of 296 reference instruction lines
 * differing bytes: 597
 * provenance: generator draft (mode ccastext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TObjEnePanBARA.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c316c90 S_L8c316c90;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_398 Arg0_398;
typedef struct Arg0_3bc Arg0_3bc;
typedef struct S_x93984 S_x93984;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
typedef struct Block_p0_3c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3c;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    char unknown48[0xb0];
    float ff8;
    char unknownfc[0x88];
    Arg0_184 *f184;
    char unknown188[0x19c];
    Block_p0_324 f324;
    char unknown330[0x64];
    int f394;
    Arg0_398 *f398;
    char unknown39c[0x4];
    int f3a0;
    int f3a4;
    char unknown3a8[0x14];
    Arg0_3bc *f3bc;
    char unknown3c0[0x24];
    float f3e4;
    float f3e8;
    float f3ec;
    int f3f0;
    float f3f4;
    char unknown3f8[0x2c];
    int f424;
};
struct Arg0_3bc {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct Frame {
    Block_frame_0 f00;
    float f0c;
    char unknown10[0x4];
    float f14;
    Vector3 f18;
};
struct S_L8c316c90 {
    char unknown0[0xc];
    int f0c;
};
struct S_x93984 {
    Vector3 f00;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct Arg0_398 {
    char unknown0[0x18];
    int f18;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c316c90 g_8c316c90;
extern "C" void TObjEnePanBARA_update_8c15e24c(Object *o)
{
    Frame frame;
    float v19;
    float v20;
    int t1;
    float t2;
    float t3;
    int t4;
    if (o->f394 != 0) {
        t1 = ((int (*)(void))0x8c03d338)();
        if (t1 != 0) {
            ((void (*)(Object *, int))0x8c15e92c)(o, 0);
        }
    }
    o->f3e4 = o->f3bc->f3c - o->f3c.f00;
    o->f3e8 = 0.0f;
    o->f3ec = o->f3bc->f44 - o->f3c.f08;
    t2 = ((float (*)(float, float))0x8c130334)(o->f3e4, o->f3ec);
    o->f3f0 = (int)(t2 * 65536.0f / 6.28318405f);
    t3 = ((float (*)(void *))0x8c37e480)(&o->f3e4);
    o->f3f4 = t3;
    o->f424 += 1;
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((S_x93984 *)((char *)&g_8c316c90.f0c + o->f394 * 0x18))->f00;
    t4 = ((int (*)(void *))0x8c18e6fc)(&(&frame)->f18);
    if (t4 == 0) {
        return;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f18)))();
    if (o->f3a0 != 0) {
        o->f34 &= -0x2000001;
    } else {
        o->f34 |= 0x2000000;
    }
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    if (o->f184 != 0) {
        o->f324.f04 += o->f184->f10 * 0.5f;
    }
    if (o->f394 == 0) {
        return;
    }
    ((void (*)(void *))0x8c1780b4)(((char *)o + 0x408));
    if (o->f3a0 != 0) {
        if (o->f394 != 7) {
            ((void (*)(Object *))0x8c027090)(o);
        }
        ((void (*)(Object *))0x8c01c5f0)(o);
        if (o->f394 != 1) {
            if (o->f394 == 5) {
                goto L_8c15e40c;
            }
            if (o->f394 == 7) {
                goto L_8c15e47e;
            }
        } else {
            v19 = (float)o->ff8;
            v19 = (float)(v19 / 35.0f);
            ((void (*)(Object *, void *, int))0x8c15e9b4)(o, &(&frame)->f0c, 0);
            ((void (*)(void *, void *))0x8c37f6f0)(&(&frame)->f0c, &o->f324);
            (&frame)->f0c *= v19;
            (&frame)->f14 *= v19;
            ((void (*)(void *, void *))0x8c3bdf60)(&(&frame)->f0c, &o->f324);
            ((void (*)(void *, int, int, int))0x8c102cd0)(&(&frame)->f0c, -0x5db4, 1, 0);
            goto L_8c15e47e;
L_8c15e40c:;
            v20 = (float)o->ff8;
            v20 = (float)(v20 / 45.0f);
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f324;
            ((void (*)(Frame *, void *))0x8c37f6f0)((&frame), ((char *)o + 0x3a8));
            (&frame)->f00.f00 *= v20;
            (&frame)->f00.f08 *= v20;
            ((void (*)(Frame *, void *))0x8c3bdf60)((&frame), ((char *)o + 0x3a8));
            ((void (*)(Frame *, int, int, int))0x8c102cd0)((&frame), -0x5db4, 1, 0);
            goto L_8c15e47e;
        }
        ((void (*)(void *, int, int, int))0x8c102cd0)(&o->f324, -0x5db4, 1, 0);
    }
L_8c15e47e:;
    if (o->f3a4 == 0) {
        o->f398->f18 = (unsigned int)o->f398->f18 >> 1 << 1;
    }
}
