/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22d348
 * function: operation_8c22d348
 * language: c
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 4 of 88 reference instruction lines
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
typedef struct S_L8c5064f0 S_L8c5064f0;
typedef struct S_L8c5064f0_4 S_L8c5064f0_4;
typedef struct S_g8c5064f0 S_g8c5064f0;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    int tag;
};
struct S_vv1 {
    int f00;
};
struct S_L8c5064f0 {
    S_g8c5064f0 *f00;
    S_L8c5064f0_4 *f04;
};
extern S_L8c5064f0 g_8c5064f0;
extern int next_random_state(void *);
extern int operation_8c22d4f0(Object *, int);
extern void seed_random_state(void *, unsigned int);
extern void call_8c037eb8(void *, S_vv1 *, int);
extern void call_8c03809c(void *, Object *, int);
extern int game_malloc_buffer_8c011e9c(int);
extern void call_8c3889a4(int, Object *, int);
extern void call_8c037f20(void *);
extern void call_8c037fa4(void *, int, int, int);
extern void game_free_8c011ec0(int);
void operation_8c22d348(Object *o, int a1)
{
    int t4;
    int t1;
    int t2;
    S_vv1 *v1;
    int t3;
    v1 = (S_vv1 *)((char *)o + 0x4);
    t1 = next_random_state((void *)((void *)0x8c506408));
    o->tag = (int)(t1);
    v1->f00 = 0;
    t2 = operation_8c22d4f0(o, a1);
    v1->f00 = (int)(t2);
    seed_random_state((void *)((void *)0x8c506408), (unsigned int)(o->tag));
    call_8c037eb8((void *)((void *)0x8c506408), v1, (int)(a1 + -4));
    seed_random_state((void *)((void *)0x8c506408), (unsigned int)((&g_8c5064f0)->f00));
    call_8c03809c((void *)((void *)0x8c506408), o, a1);
    t3 = game_malloc_buffer_8c011e9c(a1);
    t4 = game_malloc_buffer_8c011e9c(a1);
    call_8c3889a4(t3, o, a1);
    seed_random_state((void *)((void *)0x8c506408), (unsigned int)((&g_8c5064f0)->f04));
    call_8c037f20((void *)((void *)0x8c506408));
    call_8c037fa4((void *)((void *)0x8c506408), t3, t4, a1);
    call_8c3889a4((int)o, (Object *)t4, a1);
    game_free_8c011ec0(t4);
    game_free_8c011ec0(t3);
}
