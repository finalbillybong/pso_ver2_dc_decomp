/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1052b4
 * function: operation_8c1052b4
 * language: c
 * reference size: 108 bytes
 * compiled size: 108 bytes (+0.0%)
 * differing lines: 2 of 46 reference instruction lines
 * differing bytes: 4
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
    int f04;
};
struct Frame {
    char unknown0[0xe8];
};
extern void construct_random_state(void *);
extern void seed_random_state(void *, unsigned int);
extern void call_8c037eb8(Frame *, void *, int);
extern void call_8c0787cc(void *, int);
int operation_8c1052b4(Object *o, int a1, int a2, unsigned int a3)
{
    Frame frame;
    unsigned int v1;
    char *v2;
    v1 = (unsigned int)o->tag;
    v2 = (char *)o->f04;
    if (v1 > a3) {
        return 0;
    }
    construct_random_state((void *)(&frame));
    seed_random_state((void *)(&frame), (unsigned int)v2);
    a1 -= 8;
    call_8c037eb8(&frame, (void *)((char *)o + 0x8), a1);
    call_8c0787cc((void *)(((char *)o + 0x8)), a2);
    return (int)(v1);
}
