/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c098178
 * function: operation_8c098178
 * language: c
 * reference size: 628 bytes
 * compiled size: 632 bytes (+0.6%)
 * differing lines: 92 of 273 reference instruction lines
 * differing bytes: 312
 * provenance: generator draft (mode extern)
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
typedef struct S_L8c300de0 S_L8c300de0;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_0 Arg0_28_0;
typedef struct S_x15056 S_x15056;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    int f2c;
    char unknown30[0x4];
    int f34;
    char unknown38[0x4];
    int f3c;
    float f40;
    float f44;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
struct S_L8c300de0 {
    char unknown0[0x4];
    int f04;
};
struct S_x15056 {
    float f00;
};
extern S_L8c300de0 g_8c300de0;
extern int operation_8c09b33c(void);
extern void operation_195990(int, void *, float, float);
extern float njSin_8c37eb0c(int);
extern void operation_195984(int, void *, void *, float);
void operation_8c098178(Object *o)
{
    Frame frame;
    float v1;
    float v2;
    float v3;
    int v6;
    int v18;
    int v5;
    float v4;
    int v20;
    float v19;
    float v17;
    int v7;
    float v61;
    float v37;
    float v62;
    int t1;
    int t2;
    float t3;
    int t4;
    float t5;
    v1 = (float)o->f40;
    if (o->f44 > v1) {
        v3 = (float)v1;
    } else {
        v2 = (float)o->f44;
        v3 = (float)v2;
    }
    v4 = (float)/* ? fr15 */ 0;
    if (v3 > 0.0f) {
        if (!(0.33f > v3)) {
            v4 = (float)1.0f;
        } else {
            v4 = (float)(v3 / 0.33f);
        }
        v5 = (int)-1;
        (&frame)->f18 = 95.0f;
        (&frame)->f1c = 80.0f;
        v6 = (int)0;
        while (o->f2c > v6) {
            v7 = (int)0;
            t1 = operation_8c09b33c();
            if (t1 != 0) {
                v7 = (int)0;
                if (v6 == o->f34) {
                    v7 = (int)v5;
                }
            }
            operation_195990((int)(v7 + 0x17), (void *)(&(&frame)->f18), -2.4f, v4);
            (&frame)->f1c += 44.0f;
            v6 = (int)(v6 + 1);
        }
    }
    if (v3 > 0.33f) {
        if (!(0.66f > v3)) {
            v17 = (float)1.0f;
        } else {
            v17 = (float)((v3 - 0.33f) / 0.33f);
        }
        (&frame)->f0c = 1.0f;
        (&frame)->f14 = 80.0f;
        v18 = (int)0;
        while (o->f2c > v18) {
            v19 = (float)((S_x15056 *)(*(int *)((char *)((char *)o->f28 + 0x0) + (v18 << 2)) * 0x14 + (char *)&g_8c300de0.f04))->f00;
            v19 = (float)(v19 - 115.0f);
            v19 = (float)(v19 * v17 + 115.0f);
            (&frame)->f10 = 115.0f;
            v20 = (int)0;
            t2 = operation_8c09b33c();
            if (t2 != 0) {
                if (v18 == o->f34) {
                    v20 = (int)2;
                    t3 = njSin_8c37eb0c((int)(o->f3c << 0xa));
                    (&frame)->f10 += t3 * 9.0f;
                }
            }
            (&frame)->f08 = (v19 - (&frame)->f10) / 48.0f;
            operation_195984((int)(v20 + 0x1c), (void *)(&(&frame)->f10), (void *)(&(&frame)->f08), -2.5f);
            (&frame)->f10 = v19;
            (&frame)->f08 = 1.0f;
            operation_195984((int)(v20 + 0x1d), (void *)(&(&frame)->f10), (void *)(&(&frame)->f08), -2.5f);
            (&frame)->f14 += 44.0f;
            v18 = (int)(v18 + 1);
        }
        v5 = (int)(v20 + 0x1d);
        v4 = (float)v19;
    }
    if (v3 > 0.66f) {
        v3 = (float)(v3 - 0.66f);
        v5 = (int)0;
        v3 = (float)(v3 / 0.339999974f);
        v3 = (float)(v3 * v3);
        (&frame)->f00 = 144.0f;
        (&frame)->f04 = 93.0f;
        v62 = (float)(v3 * 0.6f);
        while (o->f2c > v5) {
            t4 = operation_8c09b33c();
            if (t4 != 0 && v5 == o->f34) {
                t5 = njSin_8c37eb0c((int)(o->f3c << 0xa));
                v61 = (float)(t5 * 0.25f + 1.0f);
                v37 = (float)v61;
                if (v61 > 1.0f) {
                    v37 = (float)1.0f;
                }
                operation_195990((int)(*(Arg0_28_0 **)((char *)((char *)o->f28 + 0x0) + (v5 << 2))), (void *)(&frame), -2.4f, v37 * v3);
            } else {
                operation_195990((int)(*(Arg0_28_0 **)((char *)((char *)o->f28 + 0x0) + (v5 << 2))), (void *)(&frame), -2.4f, v62);
            }
            (&frame)->f04 += 44.0f;
            v5 = (int)(v5 + 1);
        }
        v4 = (float)v62;
    }
}
