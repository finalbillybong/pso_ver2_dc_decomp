/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22c6c8
 * function: operation_8c22c6c8
 * language: c
 * reference size: 528 bytes
 * compiled size: 548 bytes (+3.8%)
 * differing lines: 114 of 209 reference instruction lines
 * differing bytes: 511
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +20 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_L8c2e1b38 S_L8c2e1b38;
typedef struct S_L8c338374 S_L8c338374;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    float f28;
};
struct S_L8c2e1b38 {
    float f00;
    float f04;
    float f08;
};
struct S_L8c338374 {
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
};
struct Frame {
    Block16 f00;
};
extern float g_8c2e1b44;
extern float g_8c2e1b48;
extern float g_8c2e1b4c;
extern float g_8c2e1b50;
extern float g_8c2e1b54;
extern float g_8c2e1b58;
extern Block16 g_8c3383d4;
extern char g_8c506324;
extern char g_8c506325;
extern char g_8c506326;
extern char g_8c506327;
extern char g_8c506328;
extern char g_8c506329;
extern char g_8c50632a;
extern S_L8c2e1b38 g_8c2e1b38;
extern S_L8c338374 g_8c338374;
extern void call_8c38f810(void *, int, int);
extern void call_8c38ef2c(Frame *, int, int, float);
void operation_8c22c6c8(Object *o)
{
    Frame frame;
    int v31;
    int v30;
    if (!(1.0f > o->f28)) {
        return;
    }
    if (g_8c506324 == 0) {
        g_8c2e1b44 = (&g_8c2e1b38)->f00 - 50.0f;
        g_8c506324 = 1;
    }
    if (g_8c506325 == 0) {
        g_8c2e1b48 = (&g_8c2e1b38)->f00 + 50.0f;
        g_8c506325 = 1;
    }
    if (g_8c506326 == 0) {
        g_8c2e1b4c = (&g_8c2e1b38)->f04 - 1.0f + -8.75f;
        g_8c506326 = 1;
    }
    if (g_8c506327 == 0) {
        g_8c2e1b50 = (&g_8c2e1b38)->f04 - 1.0f + 0.025f;
        g_8c506327 = 1;
    }
    if (g_8c506328 == 0) {
        g_8c2e1b54 = (&g_8c2e1b38)->f08;
        g_8c506328 = 1;
    }
    if (g_8c506329 == 0) {
        g_8c2e1b58 = (&g_8c2e1b38)->f08 + 50.0f;
        g_8c506329 = 1;
    }
    if (g_8c50632a == 0) {
        (&g_8c338374)->f00 = g_8c2e1b44;
        (&g_8c338374)->f04 = g_8c2e1b50;
        (&g_8c338374)->f08 = g_8c2e1b54;
        (&g_8c338374)->f0c = g_8c2e1b48;
        (&g_8c338374)->f10 = g_8c2e1b50;
        (&g_8c338374)->f14 = g_8c2e1b54;
        (&g_8c338374)->f18 = g_8c2e1b48;
        (&g_8c338374)->f1c = g_8c2e1b4c;
        (&g_8c338374)->f20 = g_8c2e1b58;
        (&g_8c338374)->f24 = g_8c2e1b44;
        (&g_8c338374)->f28 = g_8c2e1b4c;
        (&g_8c338374)->f2c = g_8c2e1b58;
        g_8c50632a = 1;
    }
    call_8c38f810((void *)((void *)0x8c3383a4), 4, 0x60);
    if (o->f28 > 0.0f) {
        *(Block16 *)&(&frame)->f00 = *(Block16 *)&g_8c3383d4;
        v30 = (int)(unsigned int)(o->f28 * 255.0f);
        v31 = (int)0;
        while (4 > v31) {
            *(int *)((char *)0x8c50632c + (v31 << 2)) = v30 << 0x18;
            v31 = (int)(v31 + 1);
        }
        call_8c38ef2c((Frame *)((&frame)), 4, 0x60, -2.0f);
    }
}
