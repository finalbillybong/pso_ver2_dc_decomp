/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1159f0
 * function: operation_8c1159f0
 * language: c
 * reference size: 464 bytes
 * compiled size: 460 bytes (-0.9%)
 * differing lines: 10 of 145 reference instruction lines
 * differing bytes: 317
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46fec0 S_L8c46fec0;
typedef struct Frame Frame;
typedef struct S_g8c418258 S_g8c418258;
typedef struct S_g8c41bd00 S_g8c41bd00;
struct Frame {
    char unknown0[0x20];
};
struct S_L8c46fec0 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    int f1c;
};
extern S_g8c418258 *g_8c418258;
extern S_g8c41bd00 *g_8c41bd00;
extern int g_8c44be04;
extern int g_8c44be08;
extern int g_8c4d8288;
extern int g_8c510ba4;
extern S_L8c46fec0 g_8c46fec0;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void operation_8c01ba00(void);
extern void operation_8c017ba8(void);
extern void operation_8c02a798(void);
extern void clear_global_render_resources(void);
extern void call_8c041690(void);
extern void reset_controller_state_8c01d9dc(void);
extern void operation_8c01b7e8(void);
extern void wait_vsync_and_flip_8c380516(void);
extern void operation_8c01372c(void *, int);
extern void clear_alternate_scene_context(void);
extern void clear_hierarchy_groups(void *);
extern void clear_group_flag_08(void *);
extern void operation_8c0e75c8(void *);
extern void operation_8c1a9988(void);
extern void call_8c186b34(void);
extern void call_8c09d2bc(void);
extern void operation_8c13f3f0(void);
extern void operation_8c01c2b0(void);
extern void TMapCsnCtrl_create_8c1a18b8(void);
extern void create_descriptor_managers(void);
extern void operation_8c189ca0(int);
extern void call_8c1866d0(int, void *);
extern void operation_8c0e7620(void *);
extern void operation_8c189d60(void);
extern void time_hierarchy_update(void *);
extern void operation_8c17771c(void);
extern void operation_8c115bc0(void);
extern void operation_8c017bd4(void);
extern void operation_8c01ba20(void);
extern void operation_8c02a87c(void);
extern void operation_8c0176bc(int);
extern void TObject_dtor_8c03311c(void *, short);
void operation_8c1159f0(void)
{
    int v1;
    Frame frame;
    TObject_ctor_8c0330e4((void *)(&frame), (void *)0);
    operation_8c01ba00();
    operation_8c017ba8();
    operation_8c02a798();
    clear_global_render_resources();
    call_8c041690();
    reset_controller_state_8c01d9dc();
    operation_8c01b7e8();
    wait_vsync_and_flip_8c380516();
    wait_vsync_and_flip_8c380516();
    operation_8c01372c(((void *)0x8c41825c), (int)g_8c418258);
    clear_alternate_scene_context();
    clear_hierarchy_groups(((void *)0x8c44bec8));
    clear_group_flag_08(((void *)0x8c44bec8));
    operation_8c0e75c8(((void *)&g_8c46fec0));
    v1 = g_8c510ba4 = 0;
    operation_8c1a9988();
    call_8c186b34();
    call_8c09d2bc();
    operation_8c13f3f0();
    operation_8c01c2b0();
    TMapCsnCtrl_create_8c1a18b8();
    create_descriptor_managers();
    operation_8c189ca0(2);
    call_8c1866d0(0xf, ((void *)0x8c310380));
    (&g_8c46fec0)->f04 = 0xf;
    g_8c46fec0.f08 = 0x10;
    g_8c46fec0.f0c = 0x10;
    v1 = (int)g_8c41bd00;
    g_8c46fec0.f10 = v1;
    g_8c46fec0.f14 = 0;
    g_8c46fec0.f18 = 0;
    g_8c46fec0.f00 = -1;
    g_8c46fec0.f1c = 0;
    g_8c46fec0.f0c = 0;
    g_8c44be04 = 0xf;
    g_8c44be08 = (v1);
    operation_8c0e7620(((void *)&g_8c46fec0));
    operation_8c189d60();
    time_hierarchy_update(((void *)0x8c44bec8));
    operation_8c17771c();
    operation_8c115bc0();
    operation_8c017bd4();
    operation_8c01ba20();
    operation_8c02a87c();
    v1 = (int)g_8c41bd00;
    operation_8c0176bc(v1);
    g_8c4d8288 = 0;
    TObject_dtor_8c03311c((void *)(&frame), -1);
}
