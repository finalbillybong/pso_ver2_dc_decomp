/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c150ce0
 * function: operation_8c150ce0
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 2 of 56 reference instruction lines
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
typedef struct S_g8c4da6b0 S_g8c4da6b0;
typedef struct S_g8c4da6b0_42c S_g8c4da6b0_42c;
typedef struct S_g8c4da6bc S_g8c4da6bc;
typedef struct Object Object;
struct S_g8c4da6b0 {
    char unknown0[0x42c];
    S_g8c4da6b0_42c *f42c;
};
struct S_g8c4da6b0_42c {
    char unknown0[0x10c];
    int f10c;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x130];
    short f198;
    char unknown19a[0x196];
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x48];
    int f3a4;
};
extern S_g8c4da6b0 *g_8c4da6b0;
extern S_g8c4da6bc *g_8c4da6bc;
extern void TBreakUpMdl_create_8c108644(int, int, int, int, int);
extern void operation_8c1083c4(int);
extern void play_se_8c05fbf8(unsigned int, void *, int, unsigned int);
extern void request_actor_mode_seven(void *);
void operation_8c150ce0(Object *o)
{
    int pm2;
    int pm3;
    pm3 = 0x324;
    TBreakUpMdl_create_8c108644((int)g_8c4da6bc, (int)((void *)0x8c315830), (g_8c4da6b0->f42c->f10c), (int)(((char *)o + pm3)), (o->f64));
    pm2 = (int)((0x324 + (char *)o));
    operation_8c1083c4(pm2);
    play_se_8c05fbf8(0x10012, (void *)(((char *)o + 0x3c)), 0, 0);
    o->f3a4 = (int)((unsigned int)o->f3a4 >> 1 << 1);
    o->f330 = o->f35a = (int)(int)o->f198;
    o->f34 = -0xa01 & o->f34;
    request_actor_mode_seven((void *)o);
}
