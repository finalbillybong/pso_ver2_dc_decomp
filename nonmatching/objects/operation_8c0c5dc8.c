/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c5dc8
 * function: operation_8c0c5dc8
 * language: c
 * reference size: 584 bytes
 * compiled size: 584 bytes (+0.0%)
 * differing lines: 6 of 194 reference instruction lines
 * differing bytes: 18
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c418254 S_g8c418254;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c44be8c S_g8c44be8c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
struct Frame {
    float f00;
    float f04;
    float f08;
    char unknownc[0xc];
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
};
extern S_g8c418254 *g_8c418254;
extern S_g8c44be84 *g_8c44be84;
extern S_g8c44be88 *g_8c44be88;
extern S_g8c44be8c *g_8c44be8c;
extern int g_8c44be9c;
extern int g_8c4689e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4db9e0 *g_8c4db9e0;
extern char g_8c306344[];
extern void operation_8c04c270(void);
extern void TFog_create_8c0134f0(int);
extern void call_8c03096c(void);
extern void operation_8c01e648(void);
extern void operation_8c0731f4(void);
extern void operation_8c051f7c(void);
extern void operation_8c01217c(void);
extern void call_8c0a1bf8(void);
extern void run_current_resource_start(void);
extern void run_current_resource_start_8c03c3ac(void);
extern void operation_8c078868(void);
extern void operation_8c08710c(void);
extern void operation_8c087770(void);
extern void operation_8c051a90(void);
extern void call_8c0142d8(Frame *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TCameraCtrl_ctor_8c0a1448(int, void *);
extern void TScene_ctor_8c031358(void *, void *);
extern void call_8c0788a4(void);
extern void create_descriptor_managers(void);
extern void operation_8c01e790(int, int, int);
extern int lookup_low_id(int);
extern void operation_8c0a1b78(void *);
extern void call_8c05f87c(void *);
extern void call_8c1003d0(void *);
extern void operation_8c09cd50(void *, int, int);
extern void initialize_color_fall(int, void *, int);
void operation_8c0c5dc8(void)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    operation_8c04c270();
    TFog_create_8c0134f0((int)((void *)0x8c3060e4));
    call_8c03096c();
    operation_8c01e648();
    operation_8c0731f4();
    operation_8c051f7c();
    operation_8c01217c();
    call_8c0a1bf8();
    run_current_resource_start();
    run_current_resource_start_8c03c3ac();
    operation_8c078868();
    operation_8c08710c();
    operation_8c087770();
    operation_8c051a90();
    (&frame)->f00 = -1.45f;
    (&frame)->f04 = 2.8f;
    (&frame)->f08 = -0.4f;
    (&frame)->f18 = 1.0f;
    (&frame)->f1c = 0.96f;
    (&frame)->f20 = 0.3f;
    (&frame)->f34 = 1.0f;
    (&frame)->f38 = 0.1f;
    (&frame)->f3c = 0.24f;
    (&frame)->f40 = 0.4f;
    (&frame)->f24 = 1.0f;
    (&frame)->f28 = 1.0f;
    (&frame)->f2c = 0.51f;
    (&frame)->f30 = 0.4f;
    call_8c0142d8((Frame *)((&frame)));
    g_8c4689e0 = (int)(g_8c44be9c);
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xf8);
    if (t1 != 0) {
        TCameraCtrl_ctor_8c0a1448(t1, g_8c44be88);
    }
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x44);
    if (t2 != 0) {
        TScene_ctor_8c031358((void *)t2, g_8c44be8c);
    }
    call_8c0788a4();
    create_descriptor_managers();
    operation_8c01e790(0, 0, (int)g_8c4db9e0);
    t3 = lookup_low_id((int)g_8c418254);
    operation_8c0a1b78((void *)t3);
    call_8c05f87c((void *)((g_8c306344 + 0x22)));
    call_8c1003d0((void *)((g_8c306344 + 0x91)));
    t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x24);
    if (t4 != 0) {
        operation_8c09cd50((void *)t4, (int)g_8c44be84, (int)((void *)0x8c0c5b6c));
    }
    t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x2c);
    if (t5 != 0) {
        initialize_color_fall(t5, g_8c44be84, 0);
    }
}
