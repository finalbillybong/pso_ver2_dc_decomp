/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f87e8
 * function: TObjEneSlimeOne_update_8c0f87e8
 * language: c++
 * reference size: 340 bytes
 * compiled size: 340 bytes (+0.0%)
 * differing lines: 2 of 122 reference instruction lines
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
typedef struct S_L8c30a484 S_L8c30a484;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct S_x24112 S_x24112;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x13c];
    Arg0_184 *f184;
    char unknown188[0x19c];
    Block_p0_324 f324;
    char unknown330[0x70];
    int f3a0;
    Arg0_3a4 *f3a4;
    char unknown3a8[0x60];
    int f408;
    int f40c;
};
struct Frame {
    Vector3 f00;
};
struct S_L8c30a484 {
    char unknown0[0xc];
    int f0c;
};
struct S_x24112 {
    Vector3 f00;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c30a484 g_8c30a484;
extern "C" int operation_8c03d338(void);
extern "C" int hierarchy_is_active(void *);
extern "C" void call_8c0f8a80(Object *, int);
extern "C" void set_child_flag_8c0f8acc(void *);
extern "C" void call_8c18e6fc(Frame *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void operation_8c027090(Object *);
extern "C" void operation_8c100024(void *);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void operation_8c0fac9c(void *);
extern "C" void operation_8c0f8adc(void *);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void TObjEneSlimeOne_update_8c0f87e8(Object *o)
{
    Frame frame;
    char *v56;
    int t1;
    int t2;
    t1 = operation_8c03d338();
    if (t1 == 0) {
        if (o->f3a0 != 0xd) {
            v56 = (char *)o->f40c;
            if (v56 != 0) {
                t2 = hierarchy_is_active((void *)v56);
                if (t2 != 0) {
                    goto L_8c0f881c;
                }
            }
            call_8c0f8a80(o, 0xd);
        }
L_8c0f881c:;
        set_child_flag_8c0f8acc((void *)o);
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x24112 *)((char *)&g_8c30a484.f0c + o->f3a0 * 0x18))->f00;
        call_8c18e6fc((Frame *)((&frame)));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
        if (o->f184 != 0) {
            o->f324.f04 += o->f184->f10 * 0.5f;
        }
        refresh_follow_effect_8c052180((void *)o);
        if (o->f408 != 0) {
            operation_8c027090(o);
        }
        operation_8c100024((void *)(o->f3a4));
        call_8c05fd7c(0x3001c, o, (void *)(&o->f3c), 0, 0);
        operation_8c0fac9c((void *)o);
        operation_8c0f8adc((void *)o);
        if (o->f3a0 != 0xd) {
            minimap_add_marker_8c102cd0((void *)(&o->f324), -0x5db4, 1, 0);
        }
    }
}
