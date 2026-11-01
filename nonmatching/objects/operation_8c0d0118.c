/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d0118
 * function: operation_8c0d0118
 * language: c
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 18 of 86 reference instruction lines
 * differing bytes: 33
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
typedef struct S_g8c46fc28 S_g8c46fc28;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22];
    int f28;
    char unknown2c[0x8];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x2f0];
    short f358;
    char unknown35a[0x4a];
    int f3a4;
};
extern S_g8c46fc28 *g_8c46fc28;
extern void operation_8c10849c(int, int, float);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void TBreakUpMdl_create_8c108644(int, int, int, int, int);
extern void refresh_follow_effect_8c0129f4(void *);
extern void operation_8c09e6d0(void *);
extern void operation_8c1083c4(int);
void operation_8c0d0118(Object *o)
{
    int mask;
    mask = 0x4000000;
    if (((o->f3a4 & mask)) == 0) {
        o->f3a4 |= mask;
        o->f3a4 |= 1;
        o->f3a4 &= -0x800001;
        o->f358 = 0x1e;
        operation_8c10849c((int)(((char *)o + 0x324)), (int)(o->f358), 2.0f);
    }
    if (!((short)--o->f358 > 0)) {
        play_se_8c05fbf8(0x30016, (void *)(((char *)o + 0x3c)), 0, 0);
        TBreakUpMdl_create_8c108644((int)g_8c46fc28, (int)((void *)0x8c306bd8), (int)(o->f28), (int)(((char *)o + 0x324)), (int)(o->f64));
        refresh_follow_effect_8c0129f4((void *)o);
        operation_8c09e6d0((void *)o);
        operation_8c1083c4((int)(((char *)o + 0x324)));
        o->f34 |= 0x800;
        o->f04 |= 1;
    }
}
