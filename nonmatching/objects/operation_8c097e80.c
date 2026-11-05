/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c097e80
 * function: operation_8c097e80
 * language: c
 * reference size: 492 bytes
 * compiled size: 500 bytes (+1.6%)
 * differing lines: 34 of 200 reference instruction lines
 * differing bytes: 303
 * provenance: hand pass on a generator draft (address casts converted to prototypes)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x4];
    float f48;
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
    float f20;
    float f24;
};
extern int g_8c461ac4;
extern char g_8c3011ac[];
extern char g_8c3011bc[];
extern void operation_195984(float, int, void *, void *);
extern void operation_195978(float, int, void *);
extern void operation_1959b0(int, void *, Frame *, float, float);
void operation_8c097e80(Object *o)
{
    Frame frame;
    float v1;
    int v3;
    float v2;
    float v17;
    float v21;
    float v27;
    float v26;
    float v28;
    float v29;
    float v38;
    int v37;
    float v36;
    v1 = (float)o->f40;
    v2 = (float)v1;
    if (v1 > 0.4f) {
        if (!(0.8f > v1)) {
            v2 = (float)1.0f;
        } else {
            v2 = (float)((v1 - 0.4f) / 0.4f);
        }
        v3 = (int)(g_8c461ac4 == 0);
        if (v3 != 0) {
            v2 = (float)(v2 * 338.0f - 44.0f);
        } else {
            v2 = (float)(v2 * 274.0f);
            v2 = (float)(v2 - 44.0f);
        }
        (&frame)->f24 = 37.0f;
        if (v2 > 0.0f) {
            (&frame)->f20 = 0.0f;
            (&frame)->f18 = v2 / 32.0f;
            (&frame)->f1c = 1.0f;
            operation_195984(-1.8f, 0x26, &(&frame)->f20, &(&frame)->f18);
        }
        (&frame)->f20 = v2;
        operation_195978(-1.8f, 0x27, &(&frame)->f20);
    }
    v17 = (float)o->f40;
    if (v17 > 0.7f) {
        if (!(1.0f > v17)) {
            v21 = (float)1.0f;
        } else {
            v21 = (float)((v17 - 0.7f) / 0.3f);
        }
        (&frame)->f10 = 62.0f;
        (&frame)->f0c = v21;
        (&frame)->f14 = 67.0f;
        (&frame)->f08 = v21;
        operation_195984(-1.7f, 0x28, &(&frame)->f10, &(&frame)->f08);
    }
    v26 = (float)o->f40;
    v27 = (float)1.0f;
    if (v27 > v26) {
        (&frame)->f04 = (v27 - v26) * 4.0f + v27;
        (&frame)->f00 = (v27 - v26) * 4.0f + v27;
        v28 = (float)o->f40;
        v36 = (float)v28;
    } else {
        v29 = (float)o->f48;
        if (v27 > v29) {
            (&frame)->f00 = (v27 - v29) * 0.5f + v27;
            v38 = (float)o->f48;
            (&frame)->f04 = v38 * v38;
        } else {
            (&frame)->f04 = v27;
            (&frame)->f00 = v27;
        }
        v36 = (float)v27;
    }
    v37 = (int)(g_8c461ac4 == 0);
    if (v37 != 0) {
        operation_1959b0(0x29, (void *)g_8c3011ac, (&frame), -1.62f, v36);
        operation_1959b0(0x2a, (g_8c3011ac + 0x8), (&frame), -1.61f, v36);
        return;
    }
    operation_1959b0(0x2b, (void *)g_8c3011bc, (&frame), -1.62f, v36);
    operation_1959b0(0x2c, (g_8c3011bc + 0x8), (&frame), -1.61f, v36);
}
