/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c235a20
 * function: operation_8c235a20
 * language: c
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 6 of 97 reference instruction lines
 * differing bytes: 5
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
typedef struct Block_p0_54 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_54;
typedef struct Block_p0_360 {
    float f00;
    float f04;
    float f08;
} Block_p0_360;
struct Object {
    char unknown0[0x54];
    Block_p0_54 f54;
    char unknown60[0x2f0];
    int f350;
    char unknown354[0xc];
    Block_p0_360 f360;
    char unknown36c[0x14];
    float f380;
    float f384;
    float f388;
    float f38c;
    float f390;
};
extern char g_8c510b2c[];
extern char g_8c510b80[];
extern float njScalor_8c37e480(void *);
extern void rotate_vector_xz(void *, void *, int);
void operation_8c235a20(Object *o, int a1)
{
    float pm3;
    float t1;
    Block_p0_54 *pm4;
    char *pm5;
    Block_p0_54 *pm2;
    Block_p0_360 *pm8;
    o->f380 = *(float *)(g_8c510b2c + 0xc);
    pm5 = g_8c510b2c + 0x10;
    o->f384 = *(float *)(pm5);
    if (!(1 != *(char *)(0x18 + g_8c510b80))) {
        float *pm7;
        pm7 = (float *)(0x4c + g_8c510b2c);
        o->f380 = *pm7;
        pm5 = 0x50 + g_8c510b2c;
        o->f384 = *(float *)(pm5);
    }
    o->f388 = 0.1f;
    o->f38c = 0.1f;
    o->f360.f00 = 0.0f;
    o->f360.f04 = o->f384;
    o->f360.f08 = o->f380;
    pm3 = njScalor_8c37e480((void *)(&o->f360));
    t1 = pm3;
    pm8 = &o->f360;
    o->f390 = t1;
    rotate_vector_xz((void *)(pm8), (void *)(&o->f360), a1);
    pm2 = &o->f54;
    o->f350 = a1;
    pm4 = pm2;
    *(Vector3 *)pm4 = *(Vector3 *)&o->f360;
    o->f54.f04 = 0.0f;
}
