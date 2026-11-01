/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c1370
 * function: operation_8c0c1370
 * language: c
 * reference size: 364 bytes
 * compiled size: 364 bytes (+0.0%)
 * differing lines: 18 of 139 reference instruction lines
 * differing bytes: 36
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
typedef struct Arg0_36c Arg0_36c;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x34];
    float f6c;
    float f70;
    char unknown74[0x7c];
    short ff0;
    char unknownf2[0xb0];
    short f1a2;
    char unknown1a4[0x6];
    short f1aa;
    char unknown1ac[0x1c0];
    Arg0_36c *f36c;
    char unknown370[0x20];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    short f3a8;
    char unknown3aa[0x4a];
    float f3f4;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
};
extern void create_effect_777c(void *, int);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void operation_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
extern void refresh_follow_effect_8c052180(void *);
void operation_8c0c1370(Object *o)
{
    float v26;
    float v27;
    switch (o->f398) {
    case 0:
        if (((o->f34 & 0x1000000)) == 0) {
            if (4 > o->f3a8) {
                o->f3a8 += 1;
                o->ff0 = 5;
                o->f398 = 1;
                o->f70 = o->f6c + 0.1f;
                create_effect_777c((void *)(((char *)o + 0x324)), 0xfa);
                {
                    float *p = &o->f3f4;
                    *p = o->f36c->f04 * o->f6c;
                }
                play_se_8c05fbf8(0x30024, (void *)(((char *)o + 0x3c)), 0, 0);
                o->f1aa += 8;
                o->f1a2 += 8;
                goto L_8c0c141a;
            }
        }
        o->f70 = o->f6c;
        o->f398 = -1;
    case 1:
L_8c0c141a:;
        operation_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        refresh_follow_effect_8c052180((void *)o);
        v26 = (float)(o->f6c + 0.00160000008f);
        if (o->f70 > v26) {
            v27 = (float)v26;
        } else {
            v27 = (float)o->f70;
        }
        o->f6c = v27;
        if (o->ff0 == 5) {
            return;
        }
        o->f398 = -1;
        return;
    case -1:
        o->f6c = o->f70;
        o->f3a4 &= -0x20002;
        o->f390 = 1;
    }
}
