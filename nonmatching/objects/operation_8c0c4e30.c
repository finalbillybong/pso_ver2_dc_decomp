/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c4e30
 * function: operation_8c0c4e30
 * language: c
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 22 of 93 reference instruction lines
 * differing bytes: 27
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in code
 *   generation (unclassified); review found and fixed behaviour defects of the generator draft;
 *   not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Object Object;
typedef struct Desc {
    float *v;
    int *c;
    int f08;
    int f0c;
} Desc;
typedef struct Frame {
    int c[4];
    float v[8];
    Desc d;
} Frame;
struct Object {
    char unknown0[0x20];
    float f20;
    int f24;
};
extern void backup_render_state(void);
extern void call_8c380ab8(int, int);
extern void call_8c38ef2c(void *, int, int, float);
extern void restore_render_state(void);
void operation_8c0c4e30(Object *o)
{
    Frame frame;
    backup_render_state();
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
    frame.d.v = frame.v;
    frame.d.c = frame.c;
    frame.d.f08 = 0;
    frame.d.f0c = 4;
    *(char *)((char *)o + 0x27) = (int)o->f20;
    frame.d.v[0] = 0.0f;
    frame.d.v[1] = 0.0f;
    frame.d.c[0] = o->f24;
    frame.d.v[2] = 640.0f;
    frame.d.v[3] = 0.0f;
    frame.d.c[1] = o->f24;
    frame.d.v[4] = 640.0f;
    frame.d.v[5] = 480.0f;
    frame.d.c[2] = o->f24;
    frame.d.v[6] = 0.0f;
    frame.d.v[7] = 480.0f;
    frame.d.c[3] = o->f24;
    if ((float)*(unsigned char *)((char *)o + 0x27) != 0.0f) {
        call_8c38ef2c((void *)&frame.d, 4, 0x62, -0.9f);
    }
    restore_render_state();
}
