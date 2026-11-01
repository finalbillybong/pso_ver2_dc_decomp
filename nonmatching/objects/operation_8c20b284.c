/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20b284
 * function: operation_8c20b284
 * language: c
 * reference size: 384 bytes
 * compiled size: 384 bytes (+0.0%)
 * differing lines: 28 of 163 reference instruction lines
 * differing bytes: 41
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
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct S_g8c46fe00_0 S_g8c46fe00_0;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_vv11 S_vv11;
typedef struct S_vv2 S_vv2;
struct S_g8c46fe00 {
    S_g8c46fe00_0 *f00;
};
struct S_g8c46fe00_0 {
    char unknown0[0x8];
    int f08;
};
struct Frame {
    float f00;
    char unknown4[0x14];
    float f18;
    char unknown1c[0x14];
    float f30;
    char unknown34[0x14];
    float f48;
    char unknown4c[0x14];
    float f60;
    char unknown64[0x14];
    float f78;
    char unknown7c[0x14];
    float f90;
    char unknown94[0x14];
    float fa8;
    char unknownac[0x14];
};
struct Object {
    char unknown0[0x5c];
    float f5c;
};
struct S_vv1 {
    char unknown0[0xc];
    float f0c;
    float f10;
};
struct S_vv2 {
    float f00;
    float f04;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
    float f0c;
    char unknown10[0x18];
    float f28;
    float f2c;
};
struct S_vv11 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x14];
    float f1c;
};
extern int call_8c18e768(int, int);
extern void operation_8c20a89c(Frame *, int, float);
extern void call_8c38d9a0(Frame *, int, int, int, float, float);
void operation_8c20b284(Object *o, Arg1 *a1, int a2, float f0)
{
    Frame frame;
    int v3;
    S_vv1 *v1;
    int t1;
    float v13;
    float v14;
    float v4;
    float v6;
    float v5;
    float v9;
    float v15;
    int v12;
    S_vv11 *v11;
    float v10;
    S_vv2 *v2;
    float s;
    float z;
    float h;
    t1 = call_8c18e768((int)((*(S_g8c46fe00 **)0x8c46fe00)->f00->f08 - *(int *)0x8c3fc180), 0x44);
    operation_8c20a89c((Frame *)((&frame)), -1, -1.0f / (o->f5c + f0 * 0.299f));
    v1 = (S_vv1 *)(&frame);
    v2 = (S_vv2 *)&*(int *)((char *)0x8c504fe0 + (a2 << 6));
    v3 = (int)0;
    while (8 > v3) {
        v1->f0c = v2->f00;
        v1->f10 = v2->f04;
        v1 = (S_vv1 *)((char *)v1 + 24);
        v2 = (S_vv2 *)((char *)v2 + 8);
        v3 = (int)(v3 + 1);
    }
    v14 = (float)(a1->f08 * 0.5f * a1->f28);
    v13 = (float)(a1->f00 + a1->f08 * 0.5f);
    v5 = (float)(v13 - v14);
    v4 = (float)*(float *)0x8c2e1538;
    v6 = (float)(v13 + v14);
    v9 = (float)v4;
    if (v4 > v14) {
        v9 = (float)((v6 - v5) / 3.0f);
    }
    (&frame)->f18 = v5;
    (&frame)->f00 = v5;
    (&frame)->f48 = v5 + v9;
    (&frame)->f30 = v5 + v9;
    (&frame)->f78 = v6 - v9;
    (&frame)->f60 = v6 - v9;
    (&frame)->fa8 = v6;
    (&frame)->f90 = v6;
    s = a1->f2c;
    z = 0.0f;
    v15 = (float)(*(float *)0x8c2e153c * s);
    h = a1->f0c * 0.5f;
    v10 = (float)(a1->f04 + h - h * s + v15 * z);
    v11 = (S_vv11 *)(&frame);
    v12 = (int)0;
    while (4 > v12) {
        v11->f04 = v10;
        v11->f1c = v10 + v15;
        v11 = (S_vv11 *)((char *)v11 + 48);
        v12 = (int)(v12 + 1);
    }
    call_8c38d9a0((Frame *)((&frame)), 8, t1, 1, s, v10);
}
