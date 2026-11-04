/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19117c
 * function: operation_8c19117c
 * language: c
 * reference size: 304 bytes
 * compiled size: 304 bytes (+0.0%)
 * differing lines: 30 of 110 reference instruction lines
 * differing bytes: 59
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
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_10 S_g8c467180_10;
typedef struct S_g8c467180_10_0 S_g8c467180_10_0;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    int f10;
    char unknown14[0xc];
};
struct Object {
    char unknown0[0x22];
    char f22;
    char unknown23[0x9];
    Arg0_2c *f2c;
};
struct S_g8c467180 {
    char unknown0[0x10];
    S_g8c467180_10 *f10;
    char unknown14[0x18];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x2ac];
    int f2ac;
    char unknown2b0[0x74];
    int f324;
};
extern S_g8c467180 *g_8c467180;
extern void initialize_fields_8c207358(void *);
extern void call_8c1c8ce4(void *, void *);
extern int call_8c207378(void *, int);
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern void operation_8c18ecb8(void);
extern int operation_8c04b8dc(void *);
extern int call_8c1196d4(void *, Frame *, int);
extern void operation_8c119764(int, int, int);
extern void operation_8c0dc610(void *, float);
int operation_8c19117c(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    Frame *pm4;
    initialize_fields_8c207358((void *)(&(&frame)->f10));
    call_8c1c8ce4((void *)(o->f2c), (void *)(&(&frame)->f10));
    t1 = call_8c207378((void *)(&(&frame)->f10), (int)(o->f22));
    if (t1 == -1) {
        return 0;
    }
    reset_text_cursor_8c18ea38();
    operation_8c18ea4c((int)(g_8c467180->f2c->f324));
    operation_8c18ecb8();
    operation_8c18ea4c((int)(*(S_g8c467180_10_0 **)((char *)((char *)g_8c467180->f10 + 0x0) + (t1 << 2))));
    operation_8c18ea4c((int)(g_8c467180->f2c->f2ac));
    t2 = operation_8c04b8dc((void *)((void *)0x8c4dbe40));
    (&frame)->f08 = 320.0f - (float)t2 * 0.5f - 9.0f;
    (&frame)->f0c = 337.0f;
    (&frame)->f00 = (float)t2 + 18.0f;
    (&frame)->f04 = 46.0f;
    pm4 = &frame;
    t3 = call_8c1196d4((void *)(&(pm4)->f08), (Frame *)((&frame)), 1);
    operation_8c119764(t3, (int)((void *)0x8c4dbe40), 2);
    operation_8c0dc610((void *)t3, 20.0f);
    return (int)(t3);
}
