/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c098894
 * function: operation_8c098894
 * language: c
 * reference size: 852 bytes
 * compiled size: 852 bytes (+0.0%)
 * differing lines: 8 of 341 reference instruction lines
 * differing bytes: 5
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, constant loading; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float sq;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x4];
    int f28;
    char unknown2c[0x8];
    int f34;
    int f38;
    char unknown3c[0x4];
    int f40;
    char unknown44[0x4];
    float f48;
};
struct Arg0_20 {
    char unknown0[0x34];
    int f34;
};
struct Frame {
    Block8 f00;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
};
extern Block8 g_8c3011cc;
extern int g_8c46ec14;
extern void operation_195990(int, void *, float, float);
extern float njSin_8c37eb0c(int);
extern void operation_195984(int, void *, void *, float);
extern float call_8c12c714(float);
extern void operation_8c098be8(void *);
extern void operation_8c098ca0(void *);
void operation_8c098894(Object *o)
{
    Frame frame;
    int v2;
    int v4;
    int i;
    int v22;
    float v5;
    float v8;
    float v9;
    float v14;
    float v20;
    float v27;
    float x;
    float sq;
    switch (o->f28) {
    case 0:
        v2 = 0xf;
        break;
    case 1:
        if ((o->f20->f34 & 0x10) != 0) {
            v2 = 0x11;
        } else {
            v2 = 0x10;
        }
        break;
    case 2:
        v2 = 0xd;
        break;
    case 3:
        v2 = 0xc;
        break;
    default:
        return;
    }
    sq = o->f48;
    sq = sq * sq;
    *(Block8 *)&frame.f00 = g_8c3011cc;
    operation_195990(v2, (void *)&frame, -1.6f, sq);
    v5 = njSin_8c37eb0c(o->f40 << 0xa) * 0.25f + 1.0f;
    v4 = o->f38 - 1;
    if (!(v4 >= 0)) {
        v4 = 0;
    } else {
        if (v4 >= 0xa) {
            v4 = 9;
        }
    }
    v9 = *(float *)((char *)0x8c285020 + (v4 << 2));
    v8 = o->f48;
    if (v8 > 0.0f) {
        if (!(0.33f > v8)) {
            v8 = 1.0f;
        } else {
            v8 = v8 / 0.33f;
        }
        operation_195990(0x16, (void *)0x8c3011d8, -3.4f, v8);
    }
    v14 = o->f48;
    if (v14 > 0.33f) {
        if (!(0.66f > v14)) {
            v14 = 1.0f;
        } else {
            v14 = v14 - 0.33f;
            v14 = v14 / 0.33f;
        }
        frame.f1c = 1.0f;
        frame.f24 = 146.0f;
        v14 = v14 * (v9 - 75.0f) + 75.0f;
        frame.f20 = 75.0f;
        frame.f20 += njSin_8c37eb0c(o->f40 << 0xa) * 9.0f;
        frame.f18 = (v14 - frame.f20) / 48.0f;
        operation_195984(0x1e, (void *)&frame.f20, (void *)&frame.f18, -3.5f);
        frame.f20 = v14;
        frame.f18 = 1.0f;
        operation_195984(0x1f, (void *)&frame.f20, (void *)&frame.f18, -3.5f);
    }
    v20 = o->f48;
    if (v20 > 0.66f) {
        v20 = v20 - 0.66f;
        v20 = v20 / 0.339999974f;
        v20 = v20 * v20;
        frame.f10 = 103.0f;
        frame.f14 = 150.0f;
        for (i = 0; o->f38 > i; i++) {
            v22 = 0x6b;
            v27 = v20;
            if (i == o->f34) {
                v22 = 0x6c;
                if (g_8c46ec14 != 2) {
                    v27 = v20 * (call_8c12c714(njSin_8c37eb0c(o->f40 << 0xc)) * 0.2f + 0.2f);
                } else {
                    v27 = v20 * v5;
                }
            }
            operation_195990(v22, (void *)&frame.f10, -3.4f, v27);
            frame.f10 += 17.0f;
        }
        x = v9 - 347.0f;
        frame.f08 = x + 299.0f;
        frame.f0c = 149.0f;
        operation_195990(o->f34 + 0x60, (void *)&frame.f08, -3.4f, v20 * v5);
        frame.f08 = x + 305.0f;
        frame.f0c = 150.0f;
        operation_195990(0x6a, (void *)&frame.f08, -3.4f, v20);
        frame.f08 = x + 324.0f;
        frame.f0c = 167.0f;
        operation_195990(o->f38 + 0x5f, (void *)&frame.f08, -3.4f, v20);
    }
    switch (o->f28) {
    case 0:
        operation_8c098be8((void *)o);
        break;
    case 1:
        if ((o->f20->f34 & 0x10) != 0) {
            operation_8c098be8((void *)o);
        } else {
            operation_8c098ca0((void *)o);
        }
        break;
    }
}
