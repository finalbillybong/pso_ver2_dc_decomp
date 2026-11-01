/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04f1b4
 * function: operation_8c04f1b4
 * language: c
 * reference size: 220 bytes
 * compiled size: 220 bytes (+0.0%)
 * differing lines: 10 of 73 reference instruction lines
 * differing bytes: 60
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
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2f8];
    short f330;
    char unknown332[0x24];
    short f356;
    short f358;
    short f35a;
    char unknown35c[0x30];
    Arg0_38c *f38c;
};
extern void operation_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
extern void refresh_follow_effect_8c052180(void *);
extern int call_8c24e644(int, void *);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern void update_last_effect(int);
extern void minimap_add_marker_8c102cd0(void *, int, int, int);
void operation_8c04f1b4(Object *o)
{
    short *pf1;
    int t1;
    o->f34 &= -0x4040001;
    operation_8c01c5f0(o);
    if (((o->f34 & 0x800000)) == 0) {
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
    }
    refresh_follow_effect_8c052180((void *)o);
    t1 = call_8c24e644(0x30001, (void *)(o->f38c));
    call_8c05fd7c(t1, o, (void *)(((char *)o + 0x3c)), 0, 0);
    update_last_effect(-0x200);
    pf1 = (short *)((char *)o + 0x358);
    if (!(((*pf1)--) >= 0)) {
        o->f34 &= -0x101;
        o->f358 = o->f356;
        o->f35a = o->f330;
    }
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}
