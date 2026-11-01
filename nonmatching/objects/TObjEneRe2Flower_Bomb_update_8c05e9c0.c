/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05e9c0
 * function: TObjEneRe2Flower_Bomb_update_8c05e9c0
 * language: c
 * reference size: 664 bytes
 * compiled size: 664 bytes (+0.0%)
 * differing lines: 36 of 264 reference instruction lines
 * differing bytes: 39
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
typedef struct S_c8c011290 S_c8c011290;
typedef struct S_c8c011290_4 S_c8c011290_4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_134 Arg0_134;
typedef struct Arg0_dc Arg0_dc;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
typedef struct Block_p0_ec {
    float f00;
    float f04;
    float f08;
} Block_p0_ec;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x8];
    unsigned short fe8;
    char unknownea[0x2];
    Block_p0_ec fec;
    float ff8;
    char unknownfc[0x4];
    float f100;
    char unknown104[0xc];
    Vector3 f110;
    char unknown11c[0x4];
    int f120;
    int f124;
    float f128;
    int f12c;
    int f130;
    Arg0_134 *f134;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    Block_frame_c f0c;
};
struct S_c8c011290 {
    char unknown0[0x4];
    S_c8c011290_4 *f04;
};
struct S_c8c011290_4 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
    Vector3 f0c;
};
struct Arg0_dc {
    char unknown0[0x4];
    float f04;
    char unknown8[0x10];
    int f18;
};
extern void call_8c3bdf60(void *, void *);
extern int operation_8c011214(int, int, int);
extern S_c8c011290 *operation_8c011290(int, int);
extern int operation_8c0f3630(int, int, int);
extern int lookup_object_by_id(unsigned short);
extern void word_operation_8c05e354(void *);
extern int create_effect_78d0(void *, void *, int, int);
extern void set_effect_bit0(void *);
extern void call_8c0a7608(void *, void *);
void TObjEneRe2Flower_Bomb_update_8c05e9c0(Object *o)
{
    Frame frame;
    int v37;
    float v7;
    int t1;
    S_c8c011290 *t2;
    int t3;
    int t4;
    int t5;
    if (o->f130 != 0) {
        if (o->f130 == 1) {
            goto L_8c05eb82;
        }
    } else {
        *(int *)((char *)o + 0x12c) += 1;
        v37 = (int)o->f12c;
        if (!(150.0f > (float)v37)) {
            o->f04 |= 1;
            return;
        }
        if (v37 >= 0x12) {
            o->f128 -= 0.1f;
        }
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->fec;
        call_8c3bdf60((void *)(&(&frame)->f0c), (void *)(((char *)o + 0x104)));
        (&frame)->f0c.f04 = o->f128 - 3.0f + (&frame)->f0c.f04;
        t1 = operation_8c011214((int)(&o->fec), (int)(&(&frame)->f0c), 0x1eff);
        if (t1 != 0) {
            o->f04 |= 1;
            return;
        }
        o->fec.f00 += o->ff8;
        o->fec.f04 += o->f128;
        o->fec.f08 += o->f100;
        t2 = operation_8c011290((int)(&o->fec), 0x16ef);
        if (t2 != 0) {
            o->f40 = t2->f04->f04;
            *(Vector3 *)&o->f110 = *(Vector3 *)&t2->f04->f0c;
        }
        o->f3c = o->fec.f00;
        o->f44 = o->fec.f08;
        v7 = (float)(o->fec.f04 - o->f40);
        if (v7 > 20.0f) {
            o->fdc->f18 |= 4;
            o->fdc->f18 &= -3;
        } else {
            o->fdc->f18 &= -5;
            o->fdc->f18 |= 2;
        }
        o->fdc->f04 = v7;
        if (o->f12c >= 0x14) {
            o->f120 |= 2;
        }
        t3 = operation_8c0f3630((int)o, (int)(((char *)o + 0x11c)), (int)((void *)0x8c284c20));
        if (t3 != 0) {
            t4 = lookup_object_by_id((unsigned short)(o->fe8));
            word_operation_8c05e354((void *)t4);
            o->f04 |= 1;
            return;
        }
    }
L_8c05eb82:;
    if (o->f134 == 0) {
        (&frame)->f00 = 0x8000;
        (&frame)->f04 = (int)(o->f124);
        (&frame)->f08 = 0;
        t5 = create_effect_78d0((void *)(&o->fec), (void *)(&frame), 0xd0, 0x40);
        o->f134 = (Arg0_134 *)t5;
        if (o->f134 == 0) {
            return;
        }
        set_effect_bit0((void *)(o->f134));
        return;
    }
    call_8c0a7608((void *)(o->f134), (void *)(&o->fec));
}
