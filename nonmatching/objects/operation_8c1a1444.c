/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a1444
 * function: operation_8c1a1444
 * language: c
 * reference size: 600 bytes
 * compiled size: 616 bytes (+2.7%)
 * differing lines: 316 of 273 reference instruction lines
 * differing bytes: 552
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv6 S_vv6;
typedef struct S_vv8 S_vv8;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
};
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x4];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x14];
    int f8c;
};
struct S_vv8 {
    char f00;
};
struct S_vv6 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    char unknown24[0xc];
    float f30;
    float f34;
    float f38;
    float f3c;
    int f40;
};
extern void njPushMatrix_8c38ade4(void *);
extern void njTranslateV_8c382a58(int, void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, int, int);
extern void call_8c3be38c(int, int, void *);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c1a1444(Object *o)
{
    Frame frame;
    int v7;
    int v3;
    S_vv6 *v6;
    int v2;
    char *v5;
    int v1;
    int v9;
    char *v4;
    S_vv8 *v8;
    (&frame)->f00 = -(o->f6c * 0.5f);
    (&frame)->f04 = 0.0f;
    (&frame)->f08 = o->f74 * 0.5f;
    (&frame)->f0c = -(o->f6c * 0.5f);
    (&frame)->f10 = o->f70;
    (&frame)->f14 = o->f74 * 0.5f;
    (&frame)->f18 = o->f6c * 0.5f;
    (&frame)->f1c = o->f70;
    (&frame)->f20 = o->f74 * 0.5f;
    (&frame)->f24 = o->f6c * 0.5f;
    (&frame)->f28 = 0.0f;
    (&frame)->f2c = o->f74 * 0.5f;
    (&frame)->f30 = -(o->f6c * 0.5f);
    (&frame)->f34 = 0.0f;
    (&frame)->f38 = -(o->f74 * 0.5f);
    (&frame)->f3c = -(o->f6c * 0.5f);
    (&frame)->f40 = o->f70;
    (&frame)->f44 = -(o->f74 * 0.5f);
    (&frame)->f48 = o->f6c * 0.5f;
    (&frame)->f4c = o->f70;
    (&frame)->f50 = -(o->f74 * 0.5f);
    (&frame)->f54 = o->f6c * 0.5f;
    (&frame)->f58 = 0.0f;
    v1 = (int)(void *)0x8c31cf8c;
    (&frame)->f5c = -(o->f74 * 0.5f);
    v2 = (int)(void *)0x8c31cfa4;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njTranslateV_8c382a58(0, (void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    v4 = (char *)v1;
    v5 = (char *)v2;
    v6 = (S_vv6 *)((char *)o + 0xe4);
    v3 = (int)0;
    while (8 > v3) {
        v7 = (int)0;
        v8 = (S_vv8 *)v4;
        while (3 > v7) {
            v9 = (int)v6;
            v9 = (int)(v9 + v7 * 0xc);
            call_8c3be280(0, (int)(v8->f00 * 0xc + (int)(&frame)), v9);
            v8 = (S_vv8 *)((char *)v8 + 1);
            v7 = (int)(v7 + 1);
        }
        call_8c3be38c(0, (int)(v5), (void *)((int)v6 + 0x24));
        v6->f30 = (v6->f00 + v6->f0c + v6->f18) / 3.0f;
        v6->f34 = (v6->f04 + v6->f10 + v6->f1c) / 3.0f;
        v6->f38 = (v6->f08 + v6->f14 + v6->f20) / 3.0f;
        if (((v3 & 2)) == 0) {
            v6->f3c = o->f6c * 0.5f * (o->f6c * 0.5f);
        } else {
            v6->f3c = o->f74 * 0.5f * (o->f74 * 0.5f);
        }
        v6->f40 = (int)(o->f8c);
        v4 = (char *)v8;
        v5 = (char *)(v5 + 0xc);
        v3 = (int)(v3 + 1);
        v6 = (S_vv6 *)((char *)v6 + 68);
    }
    njPopMatrixEx_8c38ad10();
}
