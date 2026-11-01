/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1084fc
 * function: operation_8c1084fc
 * language: c
 * reference size: 116 bytes
 * compiled size: 120 bytes (+3.4%)
 * differing lines: 30 of 42 reference instruction lines
 * differing bytes: 77
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    Vector3 tag;
};
extern int select_effect_kind(unsigned int);
extern void play_se_8c05fbf8(int, Object *, int, int);
extern void create_effect_7cc0(void *, int, int, int);
extern void create_effect_777c(void *, int);
void operation_8c1084fc(Object *o)
{
    Vector3 v;
    int t1;
    t1 = select_effect_kind((unsigned int)0x30037);
    play_se_8c05fbf8(t1, o, 0, 0);
    v = *(Vector3 *)&o->tag;
    create_effect_7cc0((void *)o, 0xea, 0xa, 0x1e);
    v.y += 30.0f;
    create_effect_777c((void *)&v, 0xe9);
}
