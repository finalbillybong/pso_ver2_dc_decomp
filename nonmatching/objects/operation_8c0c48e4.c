/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c48e4
 * function: operation_8c0c48e4
 * language: c
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 22 of 93 reference instruction lines
 * differing bytes: 27
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, instruction or operand
 *   order; review found and fixed behaviour defects of the generator draft; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object {
    char unknown0[0x20];
    float f20;
    int f24;
} Object;
typedef struct Frame {
    int col[4];
    float pos[8];
    float *pp;
    int *cp;
    int f38;
    int f3c;
} Frame;
extern void backup_render_state(void);
extern void call_8c380ab8(int, int);
extern void call_8c38ef2c(void *, int, int, float);
extern void restore_render_state(void);
void operation_8c0c48e4(Object *o)
{
    Frame frame;
    int v1;
    backup_render_state();
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
    v1 = 4;
    frame.pp = frame.pos;
    frame.cp = frame.col;
    frame.f38 = 0;
    frame.f3c = v1;
    *(unsigned char *)((char *)o + 0x27) = (int)o->f20;
    frame.pp[0] = 0.0f;
    frame.pp[1] = 0.0f;
    frame.cp[0] = o->f24;
    frame.pp[2] = 640.0f;
    frame.pp[3] = 0.0f;
    frame.cp[1] = o->f24;
    frame.pp[4] = 640.0f;
    frame.pp[5] = 480.0f;
    frame.cp[2] = o->f24;
    frame.pp[6] = 0.0f;
    frame.pp[7] = 480.0f;
    frame.cp[3] = o->f24;
    if ((float)*(unsigned char *)((char *)o + 0x27) != 0.0f) {
        call_8c38ef2c((void *)&frame.pp, v1, 0x62, -0.9f);
    }
    restore_render_state();
}
