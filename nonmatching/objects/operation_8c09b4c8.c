/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09b4c8
 * function: operation_8c09b4c8
 * language: c
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 14 of 38 reference instruction lines
 * differing bytes: 23
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c2f5714 S_g8c2f5714;
typedef struct S_g8c460900 S_g8c460900;
typedef struct Object Object;
typedef struct Arg0_134 Arg0_134;
struct Object {
    char unknown0[0x134];
    Arg0_134 *f134;
    int f138;
};
extern S_g8c460900 *g_8c460900;
extern int game_malloc_buffer_8c011e9c(int);
extern int operation_8c034c7c(void *);
extern int create_file_read_task(void *, void *, void *, void *);
void operation_8c09b4c8(Object *o)
{
    int t1;
    int t2;
    int t3;
    t1 = game_malloc_buffer_8c011e9c(0x44000);
    o->f134 = (Arg0_134 *)t1;
    t2 = operation_8c034c7c(g_8c460900);
    t3 = create_file_read_task((void *)(*(S_g8c2f5714 **)((char *)0x8c2f5714 + (t2 << 2))), (void *)(o->f134), (void *)(((char *)o + 0x13c)), (void *)0);
    o->f138 = (int)(t3);
    if (t3 < 0) {
        return;
    }
    if (o->f138 > 0x44000) {
        return;
    }
}
