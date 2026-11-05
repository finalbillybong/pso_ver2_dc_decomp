/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c014498
 * function: create_standard_task_tree_8c014498
 * language: c
 * reference size: 484 bytes
 * compiled size: 488 bytes (+0.8%)
 * differing lines: 106 of 215 reference instruction lines
 * differing bytes: 431
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c418280 S_L8c418280;
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
    float f0c;
    float f10;
    float f14;
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
    float f0c;
    float f10;
    float f14;
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
extern S_g8c44be8c *g_8c44be8c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c418280 g_8c418280;
extern float njScalor_8c37e480(Frame *);
extern void njUnitVector_8c37b630(Frame *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void initialize_input_manager_8c014694(void *, void *);
extern void initialize_menu_manager_8c014814(void *, void *);
extern void initialize_field_manager_8c014948(void *, void *);
extern void initialize_manager_8c014a7c(void *, void *);
extern void initialize_session_manager_8c014c1c(void *, void *);
extern void initialize_audio_manager_8c014f74(void *, void *);
void create_standard_task_tree_8c014498(Object *o, int a1)
{
    Frame frame;
    float t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
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
    (&g_8c418280)->f0c = o->f0c;
    (&g_8c418280)->f10 = o->f10;
    (&g_8c418280)->f14 = o->f14;
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x178);
    if (t2 != 0) {
        initialize_input_manager_8c014694((void *)t2, g_8c44be8c);
    }
    if (((a1 & 2)) != 0) {
        t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
        if (t3 != 0) {
            initialize_menu_manager_8c014814((void *)t3, g_8c44be8c);
        }
    }
    if (((a1 & 4)) != 0) {
        t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
        if (t4 != 0) {
            initialize_field_manager_8c014948((void *)t4, g_8c44be8c);
        }
    }
    if (((a1 & 8)) != 0) {
        t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
        if (t5 != 0) {
            initialize_manager_8c014a7c((void *)t5, g_8c44be8c);
        }
    }
    if (((a1 & 0x10)) != 0) {
        t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
        if (t6 != 0) {
            initialize_session_manager_8c014c1c((void *)t6, g_8c44be8c);
        }
    }
    if (((a1 & 0x20)) != 0) {
        t7 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
        if (t7 != 0) {
            initialize_audio_manager_8c014f74((void *)t7, g_8c44be8c);
        }
    }
}
