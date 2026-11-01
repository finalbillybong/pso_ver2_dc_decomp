/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1097a0
 * function: operation_8c1097a0
 * language: c
 * reference size: 260 bytes
 * compiled size: 260 bytes (+0.0%)
 * differing lines: 2 of 95 reference instruction lines
 * differing bytes: 4
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
typedef struct S_g8c4d7c54 S_g8c4d7c54;
typedef struct Object Object;
typedef struct Arg0_38c Arg0_38c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22];
    int f28;
    char unknown2c[0x38];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x266];
    short f358;
    char unknown35a[0x32];
    Arg0_38c *f38c;
    char unknown390[0x8];
    int f398;
};
extern S_g8c4d7c54 *g_8c4d7c54;
extern void refresh_follow_effect_8c0129f4(void *);
extern void operation_8c10849c(int, int, float);
extern void operation_8c01c5f0(Object *);
extern void TBreakUpMdl_create_8c108644(int, int, int, int, int);
extern void operation_8c09e6d0(void *);
extern void operation_8c1083c4(int);
extern int call_8c24e644(int, void *);
extern void play_se_8c05fbf8(unsigned int, void *, int, unsigned int);
void operation_8c1097a0(Object *o)
{
    int t1;
    switch (o->f398) {
        case -1:
        break;
        case 0:
        o->ff0 = 4;
        refresh_follow_effect_8c0129f4((void *)o);
        o->f358 = (short)0x5a;
        operation_8c10849c((int)(((char *)o + 0x324)), 0x5a, 20.0f);
        operation_8c10849c((int)(((char *)o + 0x324)), 0x5a, 20.0f);
        o->f398 = 1;
        case 1:
        operation_8c01c5f0(o);
        *(short *)((char *)o + 0x358) -= 1;
        if (!(0 <= (int)o->f358)) {
            int pm3;
            pm3 = 0x324;
            TBreakUpMdl_create_8c108644((int)g_8c4d7c54, (int)((void *)0x8c30b944), (o->f28), (int)(((char *)o + pm3)), (o->f64));
            operation_8c09e6d0((void *)o);
            operation_8c1083c4((int)(((char *)o + 0x324)));
            t1 = call_8c24e644(0x30010, (void *)(o->f38c));
            play_se_8c05fbf8(t1, (void *)(((char *)o + 0x3c)), 0, 0);
            o->f04 = (short)(1 | o->f04);
        }
    }
}
