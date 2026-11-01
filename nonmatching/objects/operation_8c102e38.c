/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c102e38
 * function: operation_8c102e38
 * language: c
 * reference size: 180 bytes
 * compiled size: 184 bytes (+2.2%)
 * differing lines: 10 of 80 reference instruction lines
 * differing bytes: 60
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d5958 S_L8c4d5958;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x36112 S_x36112;
typedef struct S_x4272 S_x4272;
typedef struct S_x67728 S_x67728;
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct S_L8c4d5958 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct S_x36112 {
    float f00;
};
struct Object {
    float tag;
    char unknown4[0x4];
    float f08;
};
struct S_x4272 {
    float f00;
};
struct S_x67728 {
    float f00;
};
extern int g_8c4d5948;
extern S_L8c4d5958 g_8c4d5958;
extern char g_8c4d5448[];
extern float distance_xz(void *, void *);
int operation_8c102e38(Object *o, int a1, int a2, int a3, float f0)
{
    char *pm1;
    Frame frame;
    int v6;
    S_L8c4d5958 *pm3;
    char pm4;
    if (g_8c4d5948 > 0x3f) {
        return 0;
    }
    if ((((short)a3 & 1)) == 0) {
        S_L8c4d5958 *pm5;
        float pm2;
        pm5 = &g_8c4d5958;
        (&frame)->f00 = (pm5)->f00;
        pm3 = &g_8c4d5958;
        (&frame)->f08 = (pm3)->f08;
        pm2 = distance_xz((void *)o, (void *)(&frame));
        if (pm2 > 90000.0f) {
            return 0;
        }
    }
    a3 = 0x14 * g_8c4d5948;
    v6 = (a3);
    ((S_x36112 *)(v6 + g_8c4d5448))->f00 = o->tag;
    ((S_x4272 *)(v6 + (char *)(g_8c4d5448 + 0x4)))->f00 = o->f08;
    pm1 = g_8c4d5448 + 0x8;
    ((S_x67728 *)(v6 + (char *)(pm1)))->f00 = f0;
    *(int *)((char *)(g_8c4d5448 + 0x10) + (v6)) = a1;
    *(short *)((char *)(g_8c4d5448 + 0xe) + (v6)) = (short)a2;
    pm1 = g_8c4d5448 + 0xc;
    pm4 = 0;
    *(short *)((char *)(pm1) + (v6)) = (short)pm4;
    g_8c4d5948 += 1;
    return 1;
}
