/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ea8c4
 * function: operation_8c1ea8c4
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 54 of 64 reference instruction lines
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
typedef struct Object Object;
typedef struct S_x48544 S_x48544;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x1e];
    int f110;
    char unknown114[0x1f6];
    short f30a;
    char unknown30c[0xc];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x434];
    float f758;
};
struct S_x48544 {
    float f00;
};
extern void operation_8c1e8e60(int, short, int);
extern void initialize_object_8c1aa948(void *, int, int, int);
extern void operation_8c1eb51c(void *);
extern int operation_02c350(void *);
extern void operation_021f88(void *, int, short);
extern void operation_8c029af4(void *, float);
void operation_8c1ea8c4(Object *o)
{
    int t1;
    operation_8c1e8e60((int)o, o->f30a, 6);
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
    initialize_object_8c1aa948((void *)(((char *)o + 0x754)), (int)o, 0, 0);
    operation_8c1eb51c((void *)o);
    t1 = operation_02c350((void *)o);
    operation_021f88((void *)o, 5, *(short *)((char *)0x8c2e7358 + ((short)t1 << 1)));
    operation_8c029af4((void *)o, ((S_x48544 *)((int)o->f110 + 8 + (o->ff0 << 4)))->f00 * o->f758);
}
