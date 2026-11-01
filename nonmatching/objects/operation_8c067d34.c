/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c067d34
 * function: operation_8c067d34
 * language: c
 * reference size: 104 bytes
 * compiled size: 104 bytes (+0.0%)
 * differing lines: 28 of 41 reference instruction lines
 * differing bytes: 27
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
typedef struct Arg0_73c Arg0_73c;
typedef struct Arg0_73c_dc Arg0_73c_dc;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x73c];
    Arg0_73c *f73c;
};
struct Arg0_73c {
    char unknown0[0xdc];
    Arg0_73c_dc *fdc;
};
struct Arg0_73c_dc {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x8];
    int f18;
};
struct Arg2 {
    char unknown0[0x8];
    float f08;
};
extern void set_position_8c0f3504(void *, void *);
extern void call_8c0f363c(Arg0_73c *, void *, int);
void operation_8c067d34(Object *o, int a1, Arg2 *a2, int a3)
{
    Arg0_73c_dc *p;
    set_position_8c0f3504((void *)(o->f73c), (void *)a1);
    p = o->f73c->fdc;
    p->f0c = a2->f08;
    o->f73c->fdc->f18 = 0x13a03;
    call_8c0f363c((Arg0_73c *)(o->f73c), (void *)(((char *)a2 + 0xc)), a3);
}
