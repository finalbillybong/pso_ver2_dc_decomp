/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01c9e8
 * function: operation_8c01c9e8
 * language: c
 * reference size: 680 bytes
 * compiled size: 676 bytes (-0.6%)
 * differing lines: 78 of 283 reference instruction lines
 * differing bytes: 299
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_130 Arg0_130;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0xe8];
    int fe8;
    int fec;
    char unknownf0[0x2];
    short ff2;
    short ff4;
    char unknownf6[0x2];
    float ff8;
    float ffc;
    float f100;
    float f104;
    float f108;
    float f10c;
    Arg0_110 *f110;
    char unknown114[0x8];
    Arg0_130 *f11c;
    Arg0_130 *f120;
    float f124;
    float f128;
    short f12c;
    short f12e;
    Arg0_130 *f130;
};
struct S_vv1 {
    short f00;
    char unknown2[0x6];
    float f08;
    int f0c;
};
struct Arg0_130 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x2];
    short f0a;
};
extern void select_actor_animation(void *, int);
void operation_8c01c9e8(Object *o, int a1)
{
    S_vv1 *v1;
    int v2;
    int v12;
    float v24;
    float v23;
    float v25;
    int v30;
    int s;
    s = (short)a1;
    v1 = (S_vv1 *)&*(int *)((char *)((char *)o->f110 + 0x0) + (s << 4));
    o->fe8 &= -0x11;
    o->fec = (int)(v1->f0c);
    v2 = (int)o->fe8;
    if (((v2 & 1)) == 0 && ((v2 & 0x80)) == 0 && ((o->fec & -0x80000000)) == 0 && ((*(int *)((char *)((char *)o->f110 + 0xc) + (o->ff2 << 4)) & 0x40000000)) == 0) {
        goto L_8c01cb20;
    }
    o->fe8 &= -5;
    select_actor_animation((void *)o, s);
    v12 = (int)(((o->fe8 & 0x100)) != 0);
    if (v12 != 0) {
        o->fe8 &= -0x101;
        o->f100 = o->f108;
    } else {
        o->f100 = v1->f08;
    }
    o->f12c = v1->f00;
    o->ffc = (float)(unsigned int)o->f130->f04;
    if (((o->fec & 0x20000000)) != 0) {
        o->f130->f0a |= 0x80;
    }
    if (((o->fe8 & 0x80)) != 0) {
        o->fe8 &= -0x81;
        o->ff8 = o->f124;
        v23 = (float)o->ff8;
        v24 = (float)o->ffc;
        if (v24 > (v23 + 1.0f)) {
            goto L_8c01cc0e;
        }
        o->ff8 = v23 - v24;
    } else {
        o->ff8 = 0.0f;
        goto L_8c01cc0e;
L_8c01cb20:;
        v25 = (float)o->ff8;
        if (!((o->ffc - 1.0f) > v25)) {
            o->ff8 = v25 - 1.0f;
        }
        o->f12c = 4;
        o->fe8 |= 6;
        o->f11c = o->f130;
        o->f124 = o->ff8;
        o->ff4 = o->ff2;
        select_actor_animation((void *)o, s);
        o->f120 = o->f130;
        o->f128 = 0.0f;
        o->f12e = v1->f00;
        o->ff8 = 0.0f;
        o->ffc = (float)(unsigned int)o->f130->f04;
        v30 = (int)(((o->fe8 & 0x200)) != 0);
        if (v30 != 0) {
            o->fe8 &= -0x201;
            o->f100 = o->f10c;
        } else {
            o->f100 = o->f104;
        }
        if (((o->fec & 0x20000000)) != 0) {
            o->f130->f0a |= 0x80;
        }
    }
L_8c01cc0e:;
    o->ff2 = a1;
}
