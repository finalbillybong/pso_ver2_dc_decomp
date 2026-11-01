/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c241d88
 * function: operation_8c241d88
 * language: c
 * reference size: 592 bytes
 * compiled size: 600 bytes (+1.4%)
 * differing lines: 120 of 251 reference instruction lines
 * differing bytes: 263
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
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
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv11 S_vv11;
typedef struct S_x2832 S_x2832;
typedef struct S_x3856 S_x3856;
typedef struct S_x784 S_x784;
typedef struct S_x9136 S_x9136;
struct Frame {
    Block8 f00;
    Block16 f08;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x4];
    unsigned short fe4;
    char unknowne6[0xe];
    float ff4;
    char unknownf8[0x4];
    float ffc;
    unsigned short f100;
};
struct Arg0_dc {
    char unknown0[0x8];
    float f08;
};
struct S_vv11 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    float f3c;
    float f40;
    float f44;
};
struct S_x784 {
    float f00;
};
struct S_x2832 {
    float f00;
};
struct S_x3856 {
    Block8 f00;
};
struct S_x9136 {
    Block8 f00;
};
extern Block16 g_8c33a9fc;
extern int g_8c467874;
extern float njScalor_8c37e480(void *);
extern void operation_8c05426c(void *, int, int);
extern void operation_8c241fd8(Object *);
extern int operation_8c052648(void *, void *, float);
extern float njScalor2_8c37e494(void *);
extern void operation_8c05428c(void *, int, int);
extern int lookup_object_by_id(unsigned short);
extern void operation_8c0c5478(int, void *, float);
int operation_8c241d88(Object *o)
{
    Frame frame;
    int v13;
    S_vv11 *v11;
    int v1;
    int v8;
    int v14;
    int v10;
    char *v28;
    int v25;
    int v26;
    int v29;
    float v27;
    int v9;
    float t1;
    int t2;
    float t3;
    int t4;
    (&frame)->f24 = o->ff4 - o->f3c;
    (&frame)->f28 = 0.0f;
    (&frame)->f2c = o->ffc - o->f44;
    v1 = (int)0;
    if (o->fdc != 0) {
        t1 = njScalor_8c37e480((void *)(&(&frame)->f24));
        o->fdc->f08 = t1 * 0.5f;
    }
    operation_8c05426c((void *)o, 0, 1);
    operation_8c241fd8(o);
    v8 = (int)0x100;
    v10 = (int)0;
    v9 = (int)0x104;
    while (g_8c467874 > v10) {
        v11 = (S_vv11 *)*(S_g8c467240 **)((char *)0x8c467240 + (v10 << 2));
        if (v11 != 0 && (o->fe4 & 0xffff) != v11->f20) {
            t2 = operation_8c052648((void *)o, (void *)v11, 10000.0f);
            if (t2 != 0) {
                (&frame)->f18 = o->f3c - v11->f3c;
                (&frame)->f1c = o->f40 - v11->f40;
                v13 = (int)(v1 << 3);
                (&frame)->f20 = o->f44 - v11->f44;
                *(short *)((char *)((char *)((int)o + v8) + 0x0) + (v13)) = v11->f20;
                t3 = njScalor2_8c37e494((void *)(&(&frame)->f18));
                ((S_x784 *)((int)o + v9 + v13))->f00 = t3;
                if ((v1 + 1) >= 0x10) {
                    v14 = (int)0xf;
                    goto L_8c241eaa;
                }
                v1 = (int)(v1 + 1);
            }
        }
        v10 = (int)(v10 + 1);
    }
    v14 = (int)v1;
L_8c241eaa:;
    operation_8c05428c((void *)o, 0, 1);
    if (v14 == 0) {
        return 0xffff;
    }
    if (v14 == 1) {
        *(Block16 *)&(&frame)->f08 = *(Block16 *)&g_8c33a9fc;
        t4 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)((char *)o + 0xf8) + (v14 << 3))));
        operation_8c0c5478((int)(t4 + 0x3c), (void *)(&(&frame)->f08), 10.0f);
    }
    v25 = (int)-1;
    v26 = (int)0;
    while ((v14 + v25) > v26) {
        v27 = (float)((S_x2832 *)((char *)(int *)((char *)o + 0x104) + (v14 << 3)))->f00;
        v28 = (char *)v26;
        v29 = (int)(v26 + 1);
        while (v14 > v29) {
            if (v27 > ((S_x2832 *)((char *)(int *)((char *)o + 0x104) + (v14 << 3)))->f00) {
                v28 = (char *)v29;
            }
            v29 = (int)(v29 + 1);
        }
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&((S_x3856 *)(&o->f100 + (v26 << 3)))->f00;
        *(Block8 *)&((S_x3856 *)(&o->f100 + (v26 << 3)))->f00 = *(Block8 *)&((S_x9136 *)(&o->f100 + ((int)(v28) << 3)))->f00;
        *(Block8 *)&((S_x9136 *)(&o->f100 + ((int)(v28) << 3)))->f00 = *(Block8 *)&(&frame)->f00;
        v26 = (int)(v26 + 1);
    }
    return o->f100;
}
