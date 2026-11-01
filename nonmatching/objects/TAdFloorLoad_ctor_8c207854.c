/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c207854
 * function: TAdFloorLoad_ctor_8c207854
 * language: c
 * reference size: 324 bytes
 * compiled size: 324 bytes (+0.0%)
 * differing lines: 4 of 138 reference instruction lines
 * differing bytes: 8
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
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
};
struct Frame {
    int f04;
    int f08;
    int f0c;
};
extern int g_8c335d50;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int create_effect_7a48(void *, int, int);
extern int create_effect_794c(void *, void *, int, int);
Object *TAdFloorLoad_ctor_8c207854(Object *o, int a1, int a2)
{
    Object **home = &o;
    int pm12;
    void *pm5;
    float pm2;
    float pm7;
    void *pm13;
    void *pm11;
    int t1;
    Frame frame;
    int pm14;
    int pm9;
    int pm17;
    void *pm3;
    float pm6;
    float *pm10;
    int pm4;
    int pm8;
    int pm15;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2780b0;
    o->tag = (g_8c335d50);
    o->size = (short)0x44;
    switch ((char)a2) {
        case 0:
        o->f2c = 0.0f;
        pm6 = 0.0f;
        o->f30 = -40.0f;
        pm7 = (-50.0f);
        pm2 = -50.0f;
        o->f34 = pm2;
        o->f38 = pm6;
        o->f3c = -40.0f;
        o->f40 = pm7;
        t1 = create_effect_7a48((void *)(&o->f2c), 0xa, 1);
        o->f20 = (t1);
        pm9 = create_effect_7a48((void *)(&o->f2c), 0x1f2, 1);
        a1 = (pm9);
        o->f24 = a1;
        pm8 = 1;
        a1 = create_effect_7a48((void *)(&o->f38), 0x1f3, pm8);
        t1 = a1;
        o->f28 = (t1);
        break;
        case 1:
        pm4 = 0x8000;
        (&frame)->f04 = pm4;
        (&frame)->f08 = 0;
        (&frame)->f0c = 0;
        o->f2c = 0.0f;
        o->f30 = 40.0f;
        o->f34 = -50.0f;
        pm2 = -50.0f;
        o->f38 = 0.0f;
        o->f3c = 45.0f;
        o->f40 = pm2;
        o->f20 = create_effect_794c((void *)(&o->f2c), (void *)(&(&frame)->f04), 0xa, 1);
        a2 = 0x1f2;
        o->f24 = create_effect_794c((void *)(&o->f2c), (void *)(&(&frame)->f04), a2, 1);
        a2 = 0x1f3;
        o->f28 = create_effect_794c((void *)(&o->f38), (void *)(&(&frame)->f04), a2, 1);
    }
    return o;
}
