/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c259ba0
 * function: operation_8c259ba0
 * language: c
 * reference size: 928 bytes
 * compiled size: 928 bytes (+0.0%)
 * differing lines: 68 of 368 reference instruction lines
 * differing bytes: 50
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_280 S_g8c467180_2c_280;
typedef struct S_g8c467180_2c_284 S_g8c467180_2c_284;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_54 S_g8c46fe20_54;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_194 Arg0_194;
typedef struct Arg0_198 Arg0_198;
typedef struct Arg0_e8 Arg0_e8;
struct Object {
    char unknown0[0xe8];
    Arg0_e8 *fe8;
    char unknownec[0x22];
    short f10e;
    char unknown110[0x84];
    Arg0_194 *f194;
    Arg0_198 *f198;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    Block8 f18;
    float f20;
    float f24;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x280];
    S_g8c467180_2c_280 *f280;
    S_g8c467180_2c_284 *f284;
};
struct Arg0_e8 {
    char unknown0[0x80];
    unsigned short f80;
};
struct Arg0_198 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x32];
    S_g8c46fe20_54 *f54;
};
struct S_g8c46fe20_54 {
    char unknown0[0x22];
    short f22;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_0 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_c8c021ef8 {
    char unknown0[0x350];
    int f350;
};
extern Block8 g_8c340344;
extern S_g8c467180 *g_8c467180;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d59d8 *g_8c4d59d8;
extern int operation_8c156c24(int, int);
extern void call_8c156d48(Arg0_e8 *, void *, int, int, int);
extern void operation_8c156f50(Arg0_e8 *);
extern void operation_8c157138(void *);
extern int operation_8c156c6c(int);
extern void operation_8c1571d4(void *, int);
extern int operation_8c1d0224(int, int);
extern void operation_8c1d02c0(int, int, int);
extern void operation_8c1d02fc(void *, int, int);
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c1d0364(void *, int, int);
void operation_8c259ba0(Object *o)
{
    Frame frame;
    int v74;
    int flag;
    int v39;
    int i3;
    int v40;
    int color;
    int v38;
    int i2;
    int v68;
    int t6;
    Arg0_e8 *e;
    S_c8c021ef8 *t7;
    switch (o->f10e) {
    case 0:
        if (o->fe8 == 0) {
            (&frame)->f20 = 244.0f;
            (&frame)->f24 = 224.0f;
            o->fe8 = (Arg0_e8 *)operation_8c156c24((int)(&(&frame)->f20), 7);
            if ((e = o->fe8) != 0) {
                call_8c156d48(e, (void *)(g_8c467180->f2c->f280), 0, 0, -1);
                o->fe8->f80 = (o->fe8->f80 & 0xffff) | 0x40;
                operation_8c156f50(o->fe8);
                operation_8c157138((void *)(o->fe8));
            }
        }
        if (o->f198 != 0) {
            break;
        }
        *(Block8 *)&(&frame)->f18 = *(Block8 *)&g_8c340344;
        o->f198 = (Arg0_198 *)operation_8c156c6c((int)(&(&frame)->f18));
        operation_8c1571d4((void *)(o->f198), 1);
        o->f198->f80 = (o->f198->f80 & 0xffff) | 0x10;
        if (g_8c46fe20 != 0) {
            g_8c46fe20->f20 |= 0x20;
        }
        if (g_8c46fe20 != 0 && g_8c46fe20->f54 != 0) {
            g_8c46fe20->f54->f22 |= 8;
        }
        if (g_8c46fe20 == 0) {
            break;
        }
        g_8c46fe20->f20 |= 1;
        if (g_8c4d59d8 != 0) {
            g_8c4d59d8->f04 |= 0x10;
        }
        break;
    case 1:
        if (o->fe8 == 0) {
            (&frame)->f10 = 244.0f;
            (&frame)->f14 = 224.0f;
            o->fe8 = (Arg0_e8 *)operation_8c156c24((int)(&(&frame)->f10), 7);
            if ((e = o->fe8) != 0) {
                call_8c156d48(e, (void *)(g_8c467180->f2c->f284), 0, 0, -1);
                o->fe8->f80 = (o->fe8->f80 & 0xffff) | 0x40;
                operation_8c156f50(o->fe8);
                operation_8c157138((void *)(o->fe8));
            }
        }
        break;
    }
    if (o->f194 == 0) {
        (&frame)->f08 = 17.0f;
        (&frame)->f0c = 224.0f;
        (&frame)->f00 = 229.0f;
        (&frame)->f04 = 104.0f;
        t6 = operation_8c1d0224((int)(&(&frame)->f08), (int)(&frame));
        v38 = 0x194;
        *(int *)((char *)o + v38) = t6;
        if (*(int *)((char *)o + v38) != 0) {
            i2 = 0;
            v39 = 0x114;
            (*(Arg0_0 **)((char *)o + v38))->f80 = ((*(Arg0_0 **)((char *)o + v38))->f80 & 0xffff) | 0x40;
            v40 = 0x184;
            (*(Arg0_0 **)((char *)o + v38))->f80 = ((*(Arg0_0 **)((char *)o + v38))->f80 & 0xffff) | 0x80;
            while (i2 < *(int *)((char *)o + v40)) {
                operation_8c1d02c0((int)(*(Arg0_0 **)((char *)o + v38)), (int)o + i2 * 0x18 + v39, i2);
                i2++;
            }
        }
        if (g_8c46fe20 != 0 && g_8c46fe20->f54 != 0) {
            g_8c46fe20->f54->f22 |= 8;
        }
    }
    if (o->f194 != 0) {
        v68 = 0x184;
        v38 = 0x194;
        for (i3 = 0; i3 < *(int *)((char *)o + v68); i3++) {
            flag = *(int *)((char *)((char *)o + 0x174) + (i3 << 2)) != 0;
            operation_8c1d02fc(*(void **)((char *)o + v38), flag, i3);
            color = -0xf0f10;
            if (o->f10e == 1) {
                t7 = lookup_low_id(i3);
                if (t7 != 0) {
                    v74 = (t7->f350 & 1) != 0;
                    if (v74 != 0) {
                        color = -0x100;
                    }
                }
            }
            operation_8c1d0364(*(void **)((char *)o + v38), color, i3);
        }
    }
}
