/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e0edc
 * function: operation_8c0e0edc
 * language: c
 * reference size: 144 bytes
 * compiled size: 144 bytes (+0.0%)
 * differing lines: 14 of 58 reference instruction lines
 * differing bytes: 18
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
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Arg2 {
    float f00;
    float f04;
};
struct Object {
    char unknown0[0x40];
    float f40;
    float f44;
};
extern float g_8c4e2ba8;
extern float g_8c4e2bac;
extern float g_8c4e2bb0;
extern float g_8c4e2bb4;
extern int rand(void);
extern int operation_8c0dc92c(int, int, int);
int operation_8c0e0edc(Object *o, int a1, Arg2 *a2)
{
    float v1;
    float v2;
    int v3;
    int t1;
    int t2;
    int t3;
    float f;
    v1 = (float)g_8c4e2ba8;
    t1 = rand();
    a2->f00 = (g_8c4e2bb0 - v1 - o->f40) * ((float)t1 / 32768.0f) + v1;
    v2 = (float)g_8c4e2bac;
    t2 = rand();
    f = o->f44;
    a2->f04 = (g_8c4e2bb4 - v2 - f) * ((float)t2 / 32768.0f) + v2;
    t3 = operation_8c0dc92c((int)o, (int)a2, (int)(&o->f40));
    v3 = (int)(t3 == 0);
    return (int)(v3);
}
