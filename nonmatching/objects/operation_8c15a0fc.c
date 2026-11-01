/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15a0fc
 * function: operation_8c15a0fc
 * language: c
 * reference size: 400 bytes
 * compiled size: 400 bytes (+0.0%)
 * differing lines: 96 of 157 reference instruction lines
 * differing bytes: 220
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
typedef struct S_g8c4dab08 S_g8c4dab08;
typedef struct S_g8c4dab10 S_g8c4dab10;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x5e];
    int f64;
    char unknown68[0x2bc];
    float f324;
    float f328;
    float f32c;
    char unknown330[0x28];
    short f358;
    char unknown35a[0x3e];
    int f398;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern S_g8c4dab08 *g_8c4dab08;
extern S_g8c4dab10 *g_8c4dab10;
extern void play_se_8c05fbf8(int, void *, int, int);
extern void TBreakUpMdl_create_8c108644(int, int, int, int, int);
extern void operation_8c1083c4(int);
extern int rand(void);
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern void create_effect_777c(void *, int);
void operation_8c15a0fc(Object *o)
{
    Frame frame;
    float t1;
    int t2;
    float t3;
    int t4;
    if (o->f398 == -1) {
        return;
    }
    switch (o->f398) {
    case 0:
        play_se_8c05fbf8(0x10012, (void *)(((char *)o + 0x3c)), 0, 0);
        TBreakUpMdl_create_8c108644((int)g_8c4dab08, (int)((void *)0x8c31651c), (int)g_8c4dab10, (int)(&o->f324), (int)(o->f64));
        TBreakUpMdl_create_8c108644((int)g_8c4dab08, (int)((void *)0x8c31651c), (int)g_8c4dab10, (int)(&o->f324), (int)(o->f64));
        operation_8c1083c4((int)(&o->f324));
        o->f358 = 0xc;
        o->f04 |= 0x10;
        o->f398 = 1;
        return;
    case 1:
        if (((o->f358 & 1)) != 0) {
            int v1;
            t4 = rand();
            v1 = (int)(int)((float)t4 / 32768.0f * 360.0f * 65536.0f / 360.0f);
            t1 = njCos_8c38c154(v1);
            (&frame)->f00 = o->f324 + t1 * 20.0f;
            t2 = rand();
            (&frame)->f04 = o->f328 + (float)t2 / 32768.0f * 20.0f;
            t3 = njSin_8c37eb0c(v1);
            (&frame)->f08 = o->f32c + t3 * 20.0f;
            create_effect_777c((void *)(&frame), 0xfb);
        }
        if (!((short)--o->f358 > 0)) {
            o->f04 |= 1;
        }
    }
}
