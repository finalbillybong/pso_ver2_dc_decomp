/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1085e4
 * function: operation_8c1085e4
 * language: c
 * reference size: 96 bytes
 * compiled size: 96 bytes (+0.0%)
 * differing lines: 4 of 35 reference instruction lines
 * differing bytes: 2
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
extern void create_effect_777c(void *, int);
void operation_8c1085e4(Object *o)
{
    Frame frame;
    int t1;
    float k;
    t1 = select_effect_kind((unsigned int)0x30006);
    play_se_8c05fbf8(t1, o, 0, 0);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->tag;
    k = 30.0f;
    (&frame)->f00.f04 = k + (&frame)->f00.f04;
    create_effect_777c((void *)(&frame), 0xe6);
}
