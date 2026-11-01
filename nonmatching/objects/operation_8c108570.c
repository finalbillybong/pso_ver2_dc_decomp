/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c108570
 * function: operation_8c108570
 * language: c
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 20 of 42 reference instruction lines
 * differing bytes: 33
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
extern void create_effect_7cc0(void *, int, int, int);
extern void create_effect_777c(void *, int);
void operation_8c108570(Object *o)
{
    Vector3 *pm9;
    int pm5;
    int pm2;
    Frame frame;
    float pm6;
    Vector3 *pm3;
    int pm4;
    int pm8;
    pm8 = select_effect_kind((unsigned int)0x30020);
    pm2 = pm8;
    pm5 = pm2;
    play_se_8c05fbf8(pm5, o, 0, 0);
    pm9 = (Vector3 *)(&(&frame)->f00);
    pm3 = pm9;
    pm9 = &o->tag;
    *pm3 = *(pm9);
    pm4 = 0xea;
    create_effect_7cc0((void *)o, pm4, 0xa, 0x1e);
    ((float *)&frame)[1] += 30.0f;
    create_effect_777c((void *)(&frame), 0xe9);
}
