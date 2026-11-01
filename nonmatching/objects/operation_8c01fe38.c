/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01fe38
 * function: operation_8c01fe38
 * language: c
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 4 of 37 reference instruction lines
 * differing bytes: 11
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
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x326];
    int f348;
    char unknown34c[0x38];
    short f384;
    char unknown386[0x842];
    int fbc8;
};
struct Arg1 {
    char unknown0[0x13c];
    int f13c;
};
extern void operation_8c023d38(void *);
extern void operation_8c023df0(void *, int, int);
void operation_8c01fe38(Object *o, Arg1 *a1)
{
    o->fbc8 = 0;
    operation_8c023d38((void *)o);
    o->f384 = 0;
    operation_8c023df0((void *)o, (int)(((char *)a1 + 0x140)), (int)(a1->f13c));
    o->f348 = (int)&((struct { char b[0x280]; } *)0x8c428f80)[o->f20];
}
