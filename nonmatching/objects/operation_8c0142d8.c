/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0142d8
 * function: operation_8c0142d8
 * language: c
 * reference size: 448 bytes
 * compiled size: 448 bytes (+0.0%)
 * differing lines: 54 of 191 reference instruction lines
 * differing bytes: 52
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c418280 S_L8c418280;
typedef struct S_c8c122700 S_c8c122700;
typedef struct Frame Frame;
typedef struct S_g8c44be8c S_g8c44be8c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Object {
    float tag;
    float f04;
    float f08;
    char unknownc[0xc];
    float dispatch;
    float f1c;
    float f20;
    char unknown24[0x4];
    float f28;
    float f2c;
    float f30;
    char unknown34[0x4];
    float f38;
    float f3c;
    float f40;
};
struct S_L8c418280 {
    float f00;
    float f04;
    float f08;
    char unknownc[0xc];
    float f18;
    float f1c;
    float f20;
    char unknown24[0x4];
    float f28;
    float f2c;
    float f30;
    char unknown34[0x4];
    float f38;
    float f3c;
    float f40;
};
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
};
extern S_g8c44be8c *g_8c44be8c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c418280 g_8c418280;
extern float njScalor_8c37e480(Frame *);
extern void njUnitVector_8c37b630(Frame *);
extern void call_8c013814(void);
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void initialize_input_manager_8c014694(void *, void *);
extern void initialize_menu_manager_8c014814(void *, void *);
extern void initialize_field_manager_8c014948(void *, void *);
extern void initialize_manager_8c014a7c(void *, void *);
extern void initialize_session_manager_8c014c1c(void *, void *);
extern void initialize_audio_manager_8c014f74(void *, void *);
extern void TObject_ctor_8c0330e4(void *, void *);
void operation_8c0142d8(Object *o)
{
    Frame frame;
    float t1;
    S_c8c122700 *t2;
    S_c8c122700 *t3;
    S_c8c122700 *t4;
    S_c8c122700 *t5;
    S_c8c122700 *t6;
    S_c8c122700 *t7;
    S_c8c122700 *t8;
    (&frame)->f00 = o->tag;
    (&frame)->f04 = o->f04;
    (&frame)->f08 = o->f08;
    t1 = njScalor_8c37e480((Frame *)((&frame)));
    if (t1 == 0.0f) {
        njUnitVector_8c37b630((Frame *)((&frame)));
    }
    (&g_8c418280)->f00 = (&frame)->f00;
    (&g_8c418280)->f04 = (&frame)->f04;
    (&g_8c418280)->f08 = (&frame)->f08;
    (&g_8c418280)->f18 = o->dispatch;
    (&g_8c418280)->f1c = o->f1c;
    (&g_8c418280)->f20 = o->f20;
    (&g_8c418280)->f28 = o->f28;
    (&g_8c418280)->f2c = o->f2c;
    (&g_8c418280)->f30 = o->f30;
    (&g_8c418280)->f38 = o->f38;
    (&g_8c418280)->f3c = o->f3c;
    (&g_8c418280)->f40 = o->f40;
    call_8c013814();
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x178);
    if (t2 != 0) {
        initialize_input_manager_8c014694((void *)t2, g_8c44be8c);
    }
    t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
    if (t3 != 0) {
        initialize_menu_manager_8c014814((void *)t3, g_8c44be8c);
    }
    t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
    if (t4 != 0) {
        initialize_field_manager_8c014948((void *)t4, g_8c44be8c);
    }
    t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
    if (t5 != 0) {
        initialize_manager_8c014a7c((void *)t5, g_8c44be8c);
    }
    t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
    if (t6 != 0) {
        initialize_session_manager_8c014c1c((void *)t6, g_8c44be8c);
    }
    t7 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
    if (t7 != 0) {
        initialize_audio_manager_8c014f74((void *)t7, g_8c44be8c);
    }
    t8 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
    if (t8 != 0) {
        TObject_ctor_8c0330e4((void *)t8, g_8c44be8c);
        t8->f18 = (void *)0x8c261224;
    }
}
