/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08a680
 * function: TeneFakeTecThunderEff_update_8c08a680
 * language: c
 * reference size: 400 bytes
 * compiled size: 392 bytes (-2.0%)
 * differing lines: 158 of 159 reference instruction lines
 * differing bytes: 265
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -8 bytes
 * class header: src/include/classes/TeneFakeTecThunderEff.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469d80 S_g8c469d80;
typedef struct Object Object;
typedef struct S_vv11 S_vv11;
typedef struct S_x13920 S_x13920;
typedef struct S_x14144 S_x14144;
typedef struct S_x14368 S_x14368;
typedef struct S_x14592 S_x14592;
typedef struct S_x14704 S_x14704;
typedef struct S_x14816 S_x14816;
typedef struct S_x15152 S_x15152;
typedef struct S_x15376 S_x15376;
typedef struct S_x15488 S_x15488;
typedef struct S_x34544 S_x34544;
struct Object {
    char unknown0[0x3c];
    int f3c;
    char unknown40[0x2ec];
    int f32c;
    char unknown330[0x4];
    int f334;
    char unknown338[0xc];
    int f344;
};
struct S_x34544 {
    float f00;
};
struct S_vv11 {
    float f00;
};
struct S_x14368 {
    float f00;
};
struct S_x14144 {
    float f00;
};
struct S_x13920 {
    float f00;
};
struct S_x14816 {
    float f00;
};
struct S_x14592 {
    float f00;
};
struct S_x14704 {
    float f00;
};
struct S_x15152 {
    float f00;
};
struct S_x15376 {
    float f00;
};
struct S_x15488 {
    float f00;
};
extern int g_8c3fc180;
extern S_g8c469d80 *g_8c469d80;
extern int g_8c469d88;
extern void call_8c08ab24(Object *);
extern int call_8c18e768(int, int);
extern float njSin_8c37eb0c(int);
void TeneFakeTecThunderEff_update_8c08a680(Object *o)
{
    int v4;
    int v1;
    int v2;
    int v3;
    int v10;
    int v5;
    int v8;
    int v6;
    int v9;
    S_vv11 *v11;
    float v12;
    int v7;
    int t1;
    float t2;
    if (o->f344 == 0) {
        return;
    }
    call_8c08ab24(o);
    t1 = call_8c18e768((int)(*(int *)((char *)((char *)g_8c469d80 + 0x8) + (o->f334 * 0xc)) - g_8c3fc180), 0x44);
    g_8c469d88 = (int)(t1);
    v1 = (int)0x32c;
    v2 = (int)0x1800;
    v3 = (int)0x2e8;
    v4 = (int)0;
    while (o->f3c > v4) {
        t2 = njSin_8c37eb0c((int)(*(int *)((char *)((char *)o + 0x0) + (v1)) * v2));
        ((S_x34544 *)((int)o + v3 + (v4 << 2)))->f00 = (t2 * 0.1f + 0.2f) * 4.0f;
        v4 = (int)(v4 + 1);
    }
    v5 = (int)((char *)o + 0x2e8);
    v6 = (int)((char *)o + 0x10c);
    v7 = (int)((char *)o + 0x110);
    v8 = (int)((char *)o + 0x1d8);
    v9 = (int)((char *)o + 0x40);
    v10 = (int)0;
    while (o->f3c > v10) {
        v11 = (S_vv11 *)v5;
        v11 = (S_vv11 *)((int)v11 + (v10 << 2));
        v12 = (float)v11->f00;
        ((S_x14368 *)(v6 + v10 * 0xc))->f00 = ((S_x14144 *)(v9 + v10 * 0xc))->f00 + ((S_x13920 *)(v8 + v10 * 0xc))->f00 * v12;
        ((S_x14816 *)(v7 + v10 * 0xc))->f00 = ((S_x14592 *)((char *)(int *)((char *)o + 0x44) + v10 * 0xc))->f00 + ((S_x14704 *)(((char *)o + 0x1dc) + v10 * 0xc))->f00 * v12;
        ((S_x15152 *)(((char *)o + 0x114) + v10 * 0xc))->f00 = ((S_x15376 *)(((char *)o + 0x48) + v10 * 0xc))->f00 + ((S_x15488 *)(((char *)o + 0x1e0) + v10 * 0xc))->f00 * v12;
        v10 = (int)(v10 + 1);
    }
    o->f32c += 1;
}
