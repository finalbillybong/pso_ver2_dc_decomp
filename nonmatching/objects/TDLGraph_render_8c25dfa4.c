/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25dfa4
 * function: TDLGraph_render_8c25dfa4
 * language: c
 * reference size: 496 bytes
 * compiled size: 496 bytes (+0.0%)
 * differing lines: 22 of 200 reference instruction lines
 * differing bytes: 30
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TDLGraph.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_4 {
    int f00;
    int f04;
    char unknown8[0x8];
} Block_frame_4;
struct Frame {
    char unknown0[0x4];
    Block_frame_4 f04;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    int f34;
    int f38;
    int f3c;
    int f40;
};
struct Object {
    char unknown0[0x24];
    float f24;
    char unknown28[0x4];
    int f2c;
    char unknown30[0xc];
    int f3c;
};
extern Block16 g_8c34059c;
extern char g_8c3405ac[];
extern void restore_child_blend(void);
extern void call_8c38ef2c(float, void *, int, int);
extern void sprintf_8c12b048(Frame *, void *, ...);
extern int operation_8c04b8dc(void *);
extern void operation_8c04b230(int, int, float, float);
void TDLGraph_render_8c25dfa4(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int v4;
    float v9;
    int t1;
    restore_child_blend();
    {
        Block16 *p_ = (Block16 *)&g_8c34059c;
        *(Block16 *)&(&frame)->f04 = *p_;
    }
    v1 = (int)(&(&frame)->f14);
    v2 = (int)(&(&frame)->f34);
    (&frame)->f3c = (&frame)->f40 = -0x1000000;
    (&frame)->f04.f00 = v1;
    (&frame)->f38 = -0x1000000;
    (&frame)->f04.f04 = v2;
    (&frame)->f34 = -0x1000000;
    (&frame)->f2c = 471.0f;
    (&frame)->f14 = 471.0f;
    (&frame)->f24 = 617.0f;
    (&frame)->f1c = 617.0f;
    (&frame)->f20 = 438.0f;
    (&frame)->f18 = 438.0f;
    (&frame)->f30 = 450.0f;
    (&frame)->f28 = 450.0f;
    call_8c38ef2c(-2.0f, (void *)(&(&frame)->f04), 4, 0x20);
    (&frame)->f3c = (&frame)->f40 = -0xbfbf01;
    (&frame)->f34 = (&frame)->f38 = -0xbfbf01;
    (&frame)->f2c = 473.0f;
    (&frame)->f14 = 473.0f;
    (&frame)->f1c = (&frame)->f24 = o->f24 * 142.0f + 473.0f;
    (&frame)->f20 = 440.0f;
    (&frame)->f18 = 440.0f;
    (&frame)->f30 = 448.0f;
    (&frame)->f28 = 448.0f;
    call_8c38ef2c(-1.0f, (void *)(&(&frame)->f04), 4, 0x20);
    (&frame)->f3c = (&frame)->f40 = -0x3f3f40;
    (&frame)->f34 = (&frame)->f38 = -0x3f3f40;
    (&frame)->f2c = 615.0f;
    (&frame)->f14 = 615.0f;
    call_8c38ef2c(-1.0f, (void *)(&(&frame)->f04), 4, 0x20);
    if (o->f3c != 0) {
        v1 = (int)o->f2c;
        if (v1 > 0) {
            v4 = (int)((float)v1 / 30.0f);
            if (1 > v4) {
                v4 = 1;
            } else if (v4 > 0x63) {
                v4 = 0x63;
            }
            sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c3405ac + 0x9)), v4);
            t1 = operation_8c04b8dc((void *)(&frame));
            v9 = (float)(float)(unsigned int)t1;
            operation_8c04b230((int)(&frame), -1, 615.0f - v9, 418.0f);
        }
    }
}
