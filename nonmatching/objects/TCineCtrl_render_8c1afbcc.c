/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1afbcc
 * function: TCineCtrl_render_8c1afbcc
 * language: c
 * reference size: 336 bytes
 * compiled size: 336 bytes (+0.0%)
 * differing lines: 34 of 153 reference instruction lines
 * differing bytes: 59
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * class header: src/include/classes/TCineCtrl.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_30 S_frame_30;
typedef struct S_frame_34 S_frame_34;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    int f28;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    char unknown14[0x1c];
    S_frame_30 *f30;
    Frame *f34;
    int f38;
    int f3c;
};
struct S_frame_30 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
struct S_frame_34 {
    int f00;
    int f04;
    int f08;
    int f0c;
};
extern void backup_render_state(void);
extern void call_8c380ab8(int, int);
extern void call_8c38ef2c(float, void *, int, int);
extern void restore_render_state(void);
void TCineCtrl_render_8c1afbcc(Object *o)
{
    Frame frame;
    if (!(o->f20 > 0.0f)) {
        return;
    }
    backup_render_state();
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
    (&frame)->f30 = (S_frame_30 *)&(&frame)->f10;
    (&frame)->f34 = (&frame);
    (&frame)->f38 = 0;
    (&frame)->f3c = 4;
    *(char *)((char *)o + 0x2b) = (int)o->f20;
    (&frame)->f30->f00 = 0.0f;
    (&frame)->f30->f04 = 0.0f;
    (&frame)->f34->f00 = (int)(o->f28);
    (&frame)->f30->f08 = 640.0f;
    (&frame)->f30->f0c = 0.0f;
    (&frame)->f34->f04 = (int)(o->f28);
    (&frame)->f30->f10 = 640.0f;
    (&frame)->f30->f14 = o->f24;
    (&frame)->f34->f08 = (int)(o->f28);
    (&frame)->f30->f18 = 0.0f;
    (&frame)->f30->f1c = o->f24;
    (&frame)->f34->f0c = (int)(o->f28);
    call_8c38ef2c(-0.9f, (void *)(&(&frame)->f30), 4, 0x60);
    (&frame)->f30->f00 = 0.0f;
    (&frame)->f30->f04 = 480.0f - o->f24;
    (&frame)->f34->f00 = (int)(o->f28);
    (&frame)->f30->f08 = 640.0f;
    (&frame)->f30->f0c = 480.0f - o->f24;
    (&frame)->f34->f04 = (int)(o->f28);
    (&frame)->f30->f10 = 640.0f;
    (&frame)->f30->f14 = 480.0f;
    (&frame)->f34->f08 = (int)(o->f28);
    (&frame)->f30->f18 = 0.0f;
    (&frame)->f30->f1c = 480.0f;
    (&frame)->f34->f0c = (int)(o->f28);
    call_8c38ef2c(-0.9f, (void *)(&(&frame)->f30), 4, 0x60);
    restore_render_state();
}
