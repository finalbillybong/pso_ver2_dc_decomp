/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c105230
 * function: operation_8c105230
 * language: c
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 2 of 55 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    int f04;
};
struct Frame {
    char unknown0[0xe8];
};
struct Arg2 {
    int f00;
};
extern int game_malloc_buffer_8c011e9c(int);
extern void construct_random_state(void *);
extern void seed_random_state(void *, unsigned int);
extern void call_8c037eb8(Frame *, void *, int);
extern void call_8c0787cc(void *, int);
int operation_8c105230(Object *o, int a1, Arg2 *a2)
{
    Frame frame;
    char *v1;
    char *v2;
    int t1;
    v1 = (char *)o->tag;
    v2 = (char *)o->f04;
    t1 = game_malloc_buffer_8c011e9c((int)(v1));
    if (t1 == 0) {
        return 0;
    }
    construct_random_state((void *)(&frame));
    seed_random_state((void *)(&frame), (unsigned int)v2);
    call_8c037eb8((Frame *)((&frame)), (void *)(((char *)o + 0x8)), (int)(a1 + -8));
    call_8c0787cc((void *)(((char *)o + 0x8)), t1);
    if (a2 != 0) {
        a2->f00 = (int)(v1);
    }
    return (int)(t1);
}
