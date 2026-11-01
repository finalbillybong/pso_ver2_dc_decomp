/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05bb30
 * function: operation_8c05bb30
 * language: c
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 6 of 46 reference instruction lines
 * differing bytes: 13
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
typedef struct Block_p1_0 {
    float f00;
    float f04;
    float f08;
} Block_p1_0;
struct Arg1 {
    Block_p1_0 f00;
};
struct Object {
    Vector3 tag;
};
extern void vector_sub_in_place_8c37f6f0(Arg1 *, int);
extern float normalize_vector_checked(void *);
extern void call_8c3bdf60(Arg1 *, int);
void operation_8c05bb30(Object *o, Arg1 *a1, float f0)
{
    float v1;
    float t1;
    *(Vector3 *)&a1->f00 = *(Vector3 *)&o->tag;
    vector_sub_in_place_8c37f6f0(a1, (int)(*(int *)0x8c46ee80 + 0x90));
    t1 = normalize_vector_checked((void *)a1);
    v1 = (float)(t1 * f0);
    {
        float *p;
        p = &a1->f00.f00;
        p[0] *= v1;
        p[1] *= v1;
        p[2] *= v1;
    }
    call_8c3bdf60(a1, (int)(*(int *)0x8c46ee80 + 0x90));
}
