/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0258b0
 * function: operation_8c0258b0
 * language: c
 * reference size: 328 bytes
 * compiled size: 352 bytes (+7.3%)
 * differing lines: 136 of 145 reference instruction lines
 * differing bytes: 342
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +24 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_130 Arg0_130;
typedef struct Arg0_130_0 Arg0_130_0;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_vv16 S_vv16;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x90];
    float ff8;
    char unknownfc[0x4];
    float f100;
    char unknown104[0x2c];
    Arg0_130 *f130;
    char unknown134[0x1e4];
    float f318;
    float f31c;
    float f320;
};
struct Arg0_130 {
    Arg0_130_0 *f00;
};
struct Arg0_130_0 {
    int f00;
    char unknown4[0x4];
    int f08;
};
struct S_vv5 {
    int f00;
    char unknown4[0x8];
    float f0c;
    int f10;
    char unknown14[0x8];
    float f1c;
};
struct S_vv16 {
    int f00;
    char unknown4[0x8];
    float f0c;
    int f10;
    char unknown14[0x8];
    float f1c;
};
struct Arg1 {
    float f00;
};
struct Arg2 {
    float f00;
};
extern float njSin_8c37eb0c(void *, float, float);
extern float njCos_8c38c154(void *);
void operation_8c0258b0(Object *o, Arg1 *a1, Arg2 *a2)
{
    int v2;
    int v3;
    int v4;
    S_vv5 *v5;
    float v1;
    int v6;
    float v13;
    float v10;
    float v9;
    float v14;
    int v17;
    S_vv16 *v16;
    float v18;
    int v19;
    float v23;
    float v26;
    float v22;
    float v15;
    float v33;
    float v34;
    float t1;
    float t2;
    v1 = (float)o->ff8;
    v3 = (int)(o->f130->f00->f08 + -1);
    v2 = (int)o->f130->f00->f00;
    v4 = (int)0;
    v5 = (S_vv5 *)v2;
    while (v3 > v4) {
        if ((unsigned int)v5->f10 > (unsigned int)(int)v1) {
            goto L_8c0258ea;
        }
        v5 = (S_vv5 *)((char *)v5 + 16);
        v4 = (int)(v4 + 1);
    }
L_8c0258ea:;
    if (v4 >= v3) {
        o->f320 = 0.0f;
        o->f31c = 0.0f;
        o->f318 = 0.0f;
        return;
    }
    v6 = (int)v5->f00;
    v9 = (float)(float)(unsigned int)(v5->f10 - v6);
    v10 = (float)(v5->f1c - v5->f0c);
    v13 = (float)(float)(unsigned int)v6;
    v14 = (float)((v1 - v13) * v10 / v9);
    v1 = (float)(v1 + o->f100);
    v15 = (float)(v14 + v5->f0c);
    v16 = (S_vv16 *)v5;
    v17 = (int)v4;
    while (v3 > v17) {
        if ((unsigned int)v16->f10 >= (unsigned int)(int)v1) {
            goto L_8c025964;
        }
        v16 = (S_vv16 *)((char *)v16 + 16);
        v17 = (int)(v17 + 1);
    }
L_8c025964:;
    if (v17 >= v3) {
        v18 = (float)v16->f0c;
        v33 = (float)v5->f0c;
        v34 = (float)v18;
    } else {
        v19 = (int)v16->f00;
        v22 = (float)(float)(unsigned int)(v16->f10 - v19);
        v23 = (float)(v16->f1c - v16->f0c);
        v26 = (float)(float)(unsigned int)v19;
        v33 = (float)v23;
        v34 = (float)((v1 - v26) * v23 / v22 + v16->f0c);
    }
    t1 = njSin_8c37eb0c(o->f64, v15, v33);
    a1->f00 = (v34 - v15) * t1;
    t2 = njCos_8c38c154(o->f64);
    a2->f00 = (v34 - v15) * t2;
}
