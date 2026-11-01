/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1422b8
 * function: operation_8c1422b8
 * language: c
 * reference size: 544 bytes
 * compiled size: 556 bytes (+2.2%)
 * differing lines: 194 of 234 reference instruction lines
 * differing bytes: 503
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv20 S_vv20;
typedef struct S_x47584 S_x47584;
typedef struct S_x49152 S_x49152;
typedef struct S_x49824 S_x49824;
typedef struct S_x50160 S_x50160;
typedef struct S_x50272 S_x50272;
typedef struct S_x51280 S_x51280;
typedef struct S_x64400 S_x64400;
typedef struct S_x80656 S_x80656;
struct Object {
    char unknown0[0x4c];
    float f4c;
    float f50;
    float f54;
    char unknown58[0x8c];
    int fe4;
    char unknowne8[0x1c];
    int f104;
    int f108;
    char unknown10c[0x30];
    float f13c;
    float f140;
    char unknown144[0x4];
    float f148;
    char unknown14c[0x8];
    float f154;
};
struct S_x80656 {
    float f00;
};
struct S_x64400 {
    float f00;
};
struct S_x47584 {
    float f00;
};
struct S_x50272 {
    float f00;
};
struct S_x49152 {
    float f00;
};
struct S_x49824 {
    float f00;
};
struct S_x50160 {
    float f00;
};
struct S_vv20 {
    float f00;
};
struct S_x51280 {
    float f00;
};
extern char g_8c4da184[];
extern void operation_8c1424d8(Object *, float, float, float, float);
extern float call_8c130334(float, float);
extern float signed_sqrt_8c37f6c0(int, float);
void operation_8c1422b8(Object *o, float f0)
{
    float v16;
    float v37;
    int v11;
    float v1;
    int v4;
    float v36;
    int v3;
    float v38;
    float v35;
    float v6;
    int v7;
    float v12;
    float v9;
    float v13;
    float v10;
    float v39;
    int v5;
    float v14;
    float v15;
    float v2;
    int v19;
    int v18;
    S_vv20 *v20;
    float v17;
    char *v21;
    int v22;
    float t1;
    float t2;
    v1 = (float)(60.0f - o->f148);
    v2 = (float)(o->f13c / 9.0f);
    v3 = (int)((char *)o + 0x38);
    v4 = (int)((char *)o + 0x34);
    v5 = (int)0;
    v38 = (float)-(v1 / (v37 * v37));
    v37 = (float)(f0 * 0.5f);
    while (0xa > v5) {
        v36 = (float)(v2 * (float)v5);
        ((S_x80656 *)(v4 + (v5 + 2) * 0xc))->f00 = v36 * 0.5f;
        v35 = (float)(v36 - v37);
        ((S_x64400 *)(v3 + (v5 + 2) * 0xc))->f00 = (v38 * v35 * v35 + v1) * 0.5f;
        v5 = (int)(v5 + 1);
    }
    operation_8c1424d8(o, v37, v1, v38, v2);
    v6 = (float)0.0f;
    o->f4c = v6;
    o->f50 = v6;
    o->f54 = v6;
    v7 = (int)0;
    v9 = (float)v6;
    v10 = (float)v6;
    v5 = (int)3;
    while (0xb >= v5) {
        v11 = (int)(v5 * 0xc);
        v12 = (float)((S_x47584 *)((char *)(int *)((char *)o + 0x34) + v11))->f00;
        v12 = (float)(v12 - v9);
        v13 = (float)((S_x50272 *)((char *)(int *)((char *)o + 0x38) + v11))->f00;
        v13 = (float)(v13 - v10);
        v14 = (float)((S_x47584 *)((char *)(int *)((char *)o + 0x34) + v11))->f00;
        v15 = (float)((S_x50272 *)((char *)(int *)((char *)o + 0x38) + v11))->f00;
        t1 = call_8c130334(v13, v12);
        v39 = (float)(t1 * 65536.0f / 6.28318405f);
        *(int *)((char *)((char *)o + 0xd8) + (v5 << 2)) = (int)v39 - v7;
        t2 = signed_sqrt_8c37f6c0((int)((int)v39), v13 * v13 + v12 * v12);
        ((S_x49152 *)((char *)(int *)((char *)o + 0x34) + v11))->f00 = t2;
        ((S_x49824 *)((char *)(int *)((char *)o + 0x38) + v11))->f00 = 0.0f;
        ((S_x50160 *)((char *)(int *)((char *)o + 0x3c) + v11))->f00 = 0.0f;
        v9 = (float)v14;
        v10 = (float)v15;
        v7 = (int)(int)v39;
        v5 = (int)(v5 + 1);
    }
    o->f108 = (int)(o->f104);
    ((void (*)(Object *))operation_8c1424d8)(o);
    v16 = (float)o->f140;
    if (1.0f > v16) {
        v17 = (float)((1.0f - v16) * o->f154);
        v18 = (int)((char *)o + 0x34);
        v19 = (int)2;
        while (0xb >= v19) {
            v20 = (S_vv20 *)v18;
            v20 = (S_vv20 *)((int)v20 + v19 * 0xc);
            v20->f00 = v20->f00 * v16 + v17 * ((S_x51280 *)(v19 * 0xc + g_8c4da184))->f00;
            v19 = (int)(v19 + 1);
        }
        v21 = (char *)o->fe4;
        o->fe4 = (int)((float)(int)v21 * v16 + (1.0f - o->f140) * 16384.0f);
        v22 = (int)3;
        while (0xb >= v22) {
            *(int *)((char *)((char *)o + 0xdc) + (v22 << 2)) = (int)((float)*(int *)((char *)((char *)o + 0xdc) + (v22 << 2)) * v16);
            v22 = (int)(v22 + 1);
        }
    }
}
