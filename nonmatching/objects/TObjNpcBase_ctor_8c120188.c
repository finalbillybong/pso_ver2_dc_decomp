/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c120188
 * function: TObjNpcBase_ctor_8c120188
 * language: c
 * reference size: 416 bytes
 * compiled size: 416 bytes (+0.0%)
 * differing lines: 18 of 154 reference instruction lines
 * differing bytes: 10
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
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x14];
    int f34;
    char unknown38[0xa0];
    int fd8;
    char unknowndc[0x22e];
    short f30a;
    char unknown30c[0x68];
    float f374;
    float f378;
    float f37c;
    float f380;
    char unknown384[0x20];
    int f3a4;
    int f3a8;
    int f3ac;
    int f3b0;
    float f3b4;
    float f3b8;
    int f3bc;
    int f3c0;
    int f3c4;
    int f3c8;
    int f3cc;
    int f3d0;
};
extern int g_8c311c34;
extern void TObjEnemy_ctor_8c012008(void *);
extern int get_current_area_8c032b10(void);
Object *TObjNpcBase_ctor_8c120188(Object *o)
{
    Object **home = &o;
    float pm6;
    int t1;
    int pm7;
    int pm5;
    int pm3;
    float pm8;
    int pm4;
    float pm11;
    int pm12;
    TObjEnemy_ctor_8c012008((void *)o);
    o->dispatch = (void *)0x8c26b174;
    o->tag = (g_8c311c34);
    (void)home;
    o->size = (short)0x3d4;
    o->f3a4 = 0;
    o->f3ac = 1;
    pm3 = get_current_area_8c032b10();
    t1 = pm3;
    switch (t1) {
        case 15:
        o->f3b0 = 1;
        break;
        default:
        o->f3b0 = 0;
        break;
    }
    o->f30a = (short)0;
    pm5 = 0x44000000;
    o->f34 = pm5;
    o->f3a8 = 0;
    pm11 = o->f374;
    pm8 = pm11;
    if (!(pm8 < 1000.0f)) {
        o->f3a8 = 1;
        o->f3bc = (int)(o->f374 - 1000.0f);
    } else {
        pm6 = o->f374;
        pm12 = (int)pm6;
        o->f3bc = pm12;
    }
    if (!(o->f378 < 1000.0f)) {
        o->f3a8 = 1;
        o->f3c0 = (int)(o->f378 - 1000.0f);
    } else {
        o->f3c0 = (int)o->f378;
    }
    pm5 = (int)o->f380;
    t1 = pm5;
    o->f3c4 = t1;
    pm5 = (int)o->f37c;
    t1 = pm5;
    pm3 = t1;
    o->f3c8 = pm3;
    o->f3b4 = 400.0f;
    o->f3b8 = 20.0f;
    o->fd8 = 2;
    pm4 = 0;
    pm7 = 0;
    o->f3cc = pm7;
    o->f3d0 = pm4;
    return o;
}
