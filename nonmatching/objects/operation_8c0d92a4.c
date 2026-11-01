/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d92a4
 * function: operation_8c0d92a4
 * language: c
 * reference size: 256 bytes
 * compiled size: 256 bytes (+0.0%)
 * differing lines: 2 of 94 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
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
typedef struct S_L8c46f564 S_L8c46f564;
typedef struct S_L8c46f564_c S_L8c46f564_c;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Block_L8c46f564_0 {
    char unknown0[0xc];
    S_L8c46f564_c *f0c;
} Block_L8c46f564_0;
struct Object {
    char unknown0[0x20];
    int f20;
};
struct S_L8c46f564 {
    Block_L8c46f564_0 f00;
};
extern S_g8c418248 *g_8c418248;
extern int g_8c46f560;
extern int g_8c575570;
extern Block16 g_8c5755ac;
extern S_L8c46f564 g_8c46f564;
extern int lookup_low_id(int);
extern int call_8c1accac(int, int, int);
extern void reset_state_8c391c94(void);
extern void call_8c38c0f0(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void reset_state_8c391cc4(void);
void operation_8c0d92a4(Object *o, int a1, int a2, float f0)
{
    int v1;
    int t1;
    int t2;
    v1 = (int)(((o->f20 & 2)) == 0);
    if (v1 != 0) {
        t1 = lookup_low_id((int)g_8c418248);
        if (t1 != 0) {
            t2 = call_8c1accac((int)(t1 + 0x4c0), a1, a2);
            if (t2 != -1) {
                reset_state_8c391c94();
                g_8c46f560 = (int)(g_8c575570);
                *(Block16 *)&(&g_8c46f564)->f00 = *(Block16 *)&g_8c5755ac;
                g_8c575570 |= 0x10;
                call_8c38c0f0((void *)(&*(int *)((char *)0x8c307354 + (t2 << 4))));
                njPushMatrixEx_8c38ae68();
                njTranslate_8c3829bc(0, 0.0f, f0, 0.0f);
                call_8c3aa716((void *)((void *)0x8c2e295c));
                njPopMatrixEx_8c38ad10();
                *(Block16 *)&g_8c5755ac = *(Block16 *)&(&g_8c46f564)->f00;
                g_8c575570 = (int)(g_8c46f560);
                reset_state_8c391cc4();
            }
        }
    }
}
