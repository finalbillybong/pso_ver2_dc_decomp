/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04f2cc
 * function: operation_8c04f2cc
 * language: c
 * reference size: 428 bytes
 * compiled size: 428 bytes (+0.0%)
 * differing lines: 8 of 148 reference instruction lines
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
typedef struct Object Object;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    Arg0_dc *fdc;
    char unknowne0[0xc];
    int fec;
    char unknownf0[0x68];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x28];
    short f198;
    char unknown19a[0x17e];
    float f318;
    char unknown31c[0x4];
    float f320;
    Vector3 f324;
    short f330;
    char unknown332[0x2];
    int f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x4];
    short f35a;
    char unknown35c[0x14];
    float f370;
    char unknown374[0x18];
    Arg0_38c *f38c;
    char unknown390[0x24];
    float f3b4;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern void operation_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, void *, float);
extern void refresh_follow_effect_8c052180(void *);
extern int check_range_8c01cf68(void *, float);
extern int call_8c24e644(int, void *);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void update_last_effect(int);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern void minimap_add_marker_8c102cd0(void *, int, int, int);
void operation_8c04f2cc(Object *o)
{
    int t2;
    void *pm7;
    int t3;
    int t1;
    int pm6;
    int pm9;
    o->f34 = o->f34 & -0x4040001;
    operation_8c01c5f0(o);
    o->f320 = 0.0f;
    o->f318 = 0.0f;
    operation_8c04a43c((void *)o, (void *)0, 0.0f);
    refresh_follow_effect_8c052180((void *)o);
    t1 = check_range_8c01cf68((void *)o, 0.0f);
    if (0 != t1) {
        t2 = call_8c24e644(0x30003, (void *)(o->f38c));
        play_se_8c05fbf8(t2, (void *)((0x3c + (char *)o)), 0, 0);
        update_last_effect((-0x200));
    }
    if (8 != o->fec) {
        float pm8;
        o->f34 = -0x601 & o->f34;
        t1 = o->fdc->f18;
        o->fdc->f18 = t1 & -0x8000001;
        pm8 = (float)o->f330;
        if (((float)(int)o->f198 * o->f370) > pm8) {
            o->f34 = o->f34 | 0x2000;
            o->f334 = 0;
            o->f354 = (unsigned short)0xffff;
            *(&o->f158) = *(&o->f324);
            *(Vector3 *)&o->f164 = *(&o->f324);
            o->f3b4 = 0.0f;
        }
        o->f35a = (int)(short)((int)o->f330);
    }
    t3 = call_8c24e644(0x30001, (void *)(o->f38c));
    call_8c05fd7c(t3, o, (void *)((0x3c + (char *)o)), 0, 0);
    update_last_effect(-0x200);
    pm6 = 1;
    pm7 = (void *)(((char *)o + 0x3c));
    pm9 = -0x5db4;
    t3 = pm9;
    minimap_add_marker_8c102cd0(pm7, t3, pm6, 0);
}
