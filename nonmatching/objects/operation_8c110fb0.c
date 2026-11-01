/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c110fb0
 * function: operation_8c110fb0
 * language: c
 * reference size: 648 bytes
 * compiled size: 648 bytes (+0.0%)
 * differing lines: 60 of 309 reference instruction lines
 * differing bytes: 30
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
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg0_7c_7c Arg0_7c_7c;
typedef struct Arg0_7c_94 Arg0_7c_94;
typedef struct Arg0_7c_94_s754 Arg0_7c_94_s754;
typedef struct S_vv10 S_vv10;
typedef struct S_vv10_s4 S_vv10_s4;
typedef struct S_vv17 S_vv17;
typedef struct S_vv17_s4 S_vv17_s4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_s4 S_vv3_s4;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x34];
    short f60;
    short f62;
    char unknown64[0x18];
    Arg0_7c *f7c;
    char unknown80[0x4];
    int f84;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    char f08;
    char f09;
    short f0a;
    short f0c;
    short f0e;
    char f10;
    char f11;
    short f12;
    short f14;
    short f16;
};
struct Arg0_7c {
    char unknown0[0x7c];
    Arg0_7c_7c *f7c;
    char unknown80[0x4];
    int f84;
    char unknown88[0x2];
    volatile unsigned short f8a;
    char unknown8c[0x8];
    Arg0_7c_94 *f94;
};
struct Arg0_7c_94_s754 {
    char unknown0[0x30];
    int f30;
};
struct S_vv3 {
    char unknown0[0x4];
    short f04;
};
struct S_vv3_s4 {
    char unknown0[0x2];
    short f02;
};
struct S_vv10 {
    char unknown0[0x4];
    short f04;
};
struct S_vv10_s4 {
    char unknown0[0x2];
    short f02;
};
struct S_vv17 {
    char unknown0[0x4];
    short f04;
};
struct S_vv17_s4 {
    char unknown0[0x2];
    short f02;
};
extern int lookup_object_by_id(unsigned short);
extern int angle_between_xz(void *, void *);
extern void operation_8c036840(int);
void operation_8c110fb0(Object *o)
{
    Frame frame;
    int v1;
    S_vv3 *v3;
    int v2;
    int v7;
    int v8;
    S_vv10 *v10;
    int v9;
    int v14;
    int v15;
    S_vv17 *v17;
    int v16;
    int v21;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    if (o->f62 != 0) {
        if (o->f62 == 1) {
            goto L_8c1110a2;
        }
        if (o->f62 == 2) {
            goto L_8c111154;
        }
        return;
    }
    (&frame)->f10 = 0x1a;
    (&frame)->f11 = 1;
    (&frame)->f10 = 0x3d;
    (&frame)->f11 = 1;
    (&frame)->f14 = 0;
    (&frame)->f16 = 0;
    (&frame)->f10 = 0x43;
    (&frame)->f11 = 2;
    if (o->f7c == 0) {
        return;
    }
    (&frame)->f12 = o->f7c->f8a & 0xffff;
    (&frame)->f16 = 0;
    t1 = lookup_object_by_id((unsigned short)(o->f7c->f7c));
    if (t1 == 0) {
        return;
    }
    t2 = angle_between_xz((void *)((char *)o->f7c->f94 + 0x3c), (void *)(t1 + 0x3c));
    (&frame)->f14 = t2;
    v1 = (int)((int)((int)o->f7c->f94 + 0x754) + 0x30);
    *(int *)v1 = 1;
    v7 = (int)0;
    goto L_8c111088;
    v2 = (int)0;
L_8c11106c:;
    v3 = (S_vv3 *)v1;
    v3 = (S_vv3 *)((int)v3 + (v2 << 2));
    v3->f04 = (int)(o->f7c->f7c);
    ((S_vv3_s4 *)((char *)v3 + 0x4))->f02 = o->f7c->f84;
    v7 = (int)(v2 + 1);
L_8c111088:;
    v2 = (int)v7;
    if (1 > v7) {
        goto L_8c11106c;
    }
    operation_8c036840((int)(&(&frame)->f10));
    o->f62 += 1;
    return;
L_8c1110a2:;
    (&frame)->f08 = 0x1a;
    (&frame)->f09 = 1;
    (&frame)->f08 = 0x3d;
    (&frame)->f09 = 1;
    (&frame)->f0c = 0;
    (&frame)->f0e = 0;
    (&frame)->f08 = 0x44;
    (&frame)->f09 = 2;
    if (o->f7c == 0) {
        return;
    }
    (&frame)->f0a = o->f7c->f8a & 0xffff;
    (&frame)->f0e = 1;
    t3 = lookup_object_by_id((unsigned short)(o->f7c->f7c));
    if (t3 == 0) {
        return;
    }
    t4 = angle_between_xz((void *)((char *)o->f7c->f94 + 0x3c), (void *)(t3 + 0x3c));
    (&frame)->f0c = t4;
    v8 = (int)((int)((int)o->f7c->f94 + 0x754) + 0x30);
    *(int *)v8 = 1;
    v14 = (int)0;
    goto L_8c11113a;
    v9 = (int)0;
L_8c11111e:;
    v10 = (S_vv10 *)v8;
    v10 = (S_vv10 *)((int)v10 + (v9 << 2));
    v10->f04 = (int)(o->f7c->f7c);
    ((S_vv10_s4 *)((char *)v10 + 0x4))->f02 = o->f7c->f84;
    v14 = (int)(v9 + 1);
L_8c11113a:;
    v9 = (int)v14;
    if (1 > v14) {
        goto L_8c11111e;
    }
    operation_8c036840((int)(&(&frame)->f08));
    o->f62 += 1;
    return;
L_8c111154:;
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x3d;
    (&frame)->f01 = 1;
    (&frame)->f04 = 0;
    (&frame)->f06 = 0;
    (&frame)->f00 = 0x45;
    (&frame)->f01 = 2;
    if (o->f7c != 0) {
        (&frame)->f02 = o->f7c->f8a & 0xffff;
        (&frame)->f06 = 1;
        t5 = lookup_object_by_id((unsigned short)(o->f7c->f7c));
        if (t5 != 0) {
            t6 = angle_between_xz((void *)((char *)o->f7c->f94 + 0x3c), (void *)(t5 + 0x3c));
            (&frame)->f04 = t6;
            v15 = (int)((int)((int)o->f7c->f94 + 0x754) + 0x30);
            *(int *)v15 = 1;
            v21 = (int)0;
            goto L_8c1111e4;
            v16 = (int)0;
L_8c1111c8:;
            v17 = (S_vv17 *)v15;
            v17 = (S_vv17 *)((int)v17 + (v16 << 2));
            v17->f04 = (int)(o->f7c->f7c);
            ((S_vv17_s4 *)((char *)v17 + 0x4))->f02 = o->f7c->f84;
            v21 = (int)(v16 + 1);
L_8c1111e4:;
            v16 = (int)v21;
            if (1 > v21) {
                goto L_8c1111c8;
            }
            operation_8c036840((int)(&frame));
            o->f62 = 0;
            o->f60 = 0;
            if (o->f28 != 0xd) {
                o->f28 = 0xd;
                o->f84 |= 4;
            }
        }
    }
}
