/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03b154
 * function: operation_8c03b154
 * language: c
 * reference size: 316 bytes
 * compiled size: 316 bytes (+0.0%)
 * differing lines: 6 of 112 reference instruction lines
 * differing bytes: 11
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
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
typedef struct Block_L8c46f564_0 {
    char unknown0[0xc];
    S_L8c46f564_c *f0c;
} Block_L8c46f564_0;
struct Object {
    char unknown0[0x22];
    unsigned short f22;
    int f24;
};
struct S_g8c46ee80 {
    char unknown0[0xac];
    int fac;
};
struct S_L8c46f564 {
    Block_L8c46f564_0 f00;
};
extern S_g8c46ee80 *g_8c46ee80;
extern int g_8c46f560;
extern int g_8c575570;
extern Block16 g_8c5755ac;
extern S_L8c46f564 g_8c46f564;
extern int lookup_low_id(int);
extern int hierarchy_is_active(void *);
extern int operation_8c03b290(Object *);
extern int object_blocked(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void reset_state_8c391c94(void);
extern void call_8c38c0f0(void *);
extern void njTranslateV_8c382a58(int, int);
extern void njRotateY_8c37df90(int, int);
extern void njScale_8c37e2e4(int, float, float, float);
extern void call_8c3aa716(void *);
extern void reset_state_8c391cc4(void);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c03b154(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = lookup_low_id((int)(o->f22));
    if (t1 != 0) {
        t2 = hierarchy_is_active((void *)t1);
        if (t2 != 0) {
            t3 = operation_8c03b290(o);
            if ((unsigned char)t3 != 0) {
                t4 = object_blocked((void *)t1);
                if (t4 == 0) {
                    njPushMatrixEx_8c38ae68();
                    reset_state_8c391c94();
                    g_8c46f560 = (int)(g_8c575570);
                    *(Block16 *)&(&g_8c46f564)->f00 = *(Block16 *)&g_8c5755ac;
                    g_8c575570 |= 0x10;
                    t5 = operation_8c03b290(o);
                    call_8c38c0f0((void *)(&*(int *)((char *)0x8c284788 + ((unsigned char)t5 << 4))));
                    njTranslateV_8c382a58(0, (int)(t1 + 0x7d4));
                    njRotateY_8c37df90(0, (int)(g_8c46ee80->fac + (int)o->f24));
                    njScale_8c37e2e4(0, 1.3f, 1.3f, 1.3f);
                    call_8c3aa716((void *)((void *)0x8c2e295c));
                    *(Block16 *)&g_8c5755ac = *(Block16 *)&(&g_8c46f564)->f00;
                    g_8c575570 = (int)(g_8c46f560);
                    reset_state_8c391cc4();
                    njPopMatrixEx_8c38ad10();
                }
            }
        }
    }
}
