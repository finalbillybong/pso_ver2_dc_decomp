/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03fb60
 * function: operation_8c03fb60
 * language: c
 * reference size: 540 bytes
 * compiled size: 544 bytes (+0.7%)
 * differing lines: 186 of 232 reference instruction lines
 * differing bytes: 372
 * provenance: hand pass on a generator draft (behaviour reviewed; address casts converted to
 *   prototypes)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +4 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_L8c46f564 S_L8c46f564;
typedef struct S_L8c5755ac S_L8c5755ac;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x34];
    int f34;
};
struct S_L8c5755ac {
    Block8 f00;
    int f08;
    int f0c;
};
struct S_L8c46f564 {
    Block8 f00;
    int f08;
    int f0c;
};
struct S_vv3 {
    int f00;
};
extern char g_8c466dc2;
extern int g_8c466de4;
extern int g_8c466df4;
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern S_L8c46f564 g_8c46f564;
extern S_L8c5755ac g_8c5755ac;
extern char g_8c2ef854[];
extern void hs_8c37eb1c(void *, int, int, float);
extern void hs_8c38c0f0(void *);
extern void hs_8c37eb1c_1(float, void *, int, int);
void operation_8c03fb60(Object *o)
{
    char *v2;
    char *v1;
    char *v4;
    char *v5;
    S_vv3 *v3;
    if (!((o->f34 * 0x50) > g_8c466df4)) {
        return;
    }
    hs_8c37eb1c((g_8c2ef854 + 0x160), 0xb, 0x20, -10.0f);
    g_8c46f560 = (int)(g_8c575570);
    *(Block8 *)&(&g_8c46f564)->f00 = *(Block8 *)&(&g_8c5755ac)->f00;
    v2 = (char *)(&g_8c5755ac)->f08;
    (&g_8c46f564)->f08 = (int)(v2);
    v1 = (char *)(&g_8c5755ac)->f0c;
    (&g_8c46f564)->f0c = (int)(v1);
    g_8c46f578 = (int)(g_8c5755a8);
    g_8c46f574 = (int)(g_8c5755a4);
    g_8c575570 |= 0x10;
    hs_8c38c0f0(((char *)o + 0x48));
    hs_8c37eb1c((g_8c2ef854 + 0x180), 0xc, 0x22, -10.0f);
    v3 = (S_vv3 *)(void *)&g_8c575570;
    *(Block8 *)&(&g_8c5755ac)->f00 = *(Block8 *)&(&g_8c46f564)->f00;
    v4 = (char *)(&g_8c46f564)->f08;
    (&g_8c5755ac)->f08 = (int)(v4);
    v5 = (char *)(&g_8c46f564)->f0c;
    (&g_8c5755ac)->f0c = (int)(v5);
    v3->f00 = (int)(g_8c46f560);
    hs_8c37eb1c_1(-10.0f, (g_8c2ef854 + 0x1a0), 0xd, 0x20);
    hs_8c37eb1c_1(-10.0f, (g_8c2ef854 + 0x1c0), 0xe, 0x20);
    g_8c46f560 = (int)(v3->f00);
    *(Block16 *)&(&g_8c46f564)->f00 = *(Block16 *)&(&g_8c5755ac)->f00;
    v3->f00 |= 0x10;
    hs_8c38c0f0(((char *)o + 0x38));
    if (g_8c466de4 == 3) {
        hs_8c37eb1c_1(-10.0f, &*(int *)((char *)g_8c2ef854 + (g_8c466dc2 + 0x1b << 5)), 0x1b, 0x22);
        hs_8c37eb1c_1(-10.0f, &*(int *)((char *)g_8c2ef854 + (g_8c466dc2 + 0x1f << 5)), 0x1f, 0x22);
        hs_8c37eb1c_1(-10.0f, &*(int *)((char *)g_8c2ef854 + (g_8c466dc2 + 0x23 << 5)), 0x23, 0x22);
    } else {
        hs_8c37eb1c_1(-10.0f, &*(int *)((char *)g_8c2ef854 + (g_8c466dc2 + 0xf << 5)), 0xf, 0x22);
        hs_8c37eb1c_1(-10.0f, &*(int *)((char *)g_8c2ef854 + (g_8c466dc2 + 0x13 << 5)), 0x13, 0x22);
        hs_8c37eb1c_1(-10.0f, &*(int *)((char *)g_8c2ef854 + (g_8c466dc2 + 0x17 << 5)), 0x17, 0x22);
    }
    *(Block16 *)&(&g_8c5755ac)->f00 = *(Block16 *)&(&g_8c46f564)->f00;
    g_8c575570 = (int)(g_8c46f560);
}
