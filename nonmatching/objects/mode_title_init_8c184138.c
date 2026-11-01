/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c184138
 * function: mode_title_init_8c184138
 * language: c
 * reference size: 600 bytes
 * compiled size: 600 bytes (+0.0%)
 * differing lines: 12 of 206 reference instruction lines
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
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_c8c122700_20 S_c8c122700_20;
typedef struct Frame Frame;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_x9456 S_x9456;
struct Frame {
    Vector3 f04;
    Vector3 f10;
    int f1c;
    char unknown20[0x1fc];
};
struct S_x9456 {
    float f00;
};
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x4];
    S_c8c122700_20 *f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
};
extern Vector3 g_8c3199b4;
extern Vector3 g_8c3199c0;
extern S_g8c44be88 *g_8c44be88;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4dbb08;
extern S_c8c122700 *g_8c4dbb24;
extern S_c8c122700 *g_8c4dbb28;
extern S_c8c122700 *g_8c4dbb2c;
extern int g_8c4dbb30;
extern int g_8c4dbb34;
extern int g_8c4dbb38;
extern int g_8c4dbb3c;
extern void set_elems_8c3806f6(int, int, int);
extern void forward_8c37e7d4(void *);
extern void reset_controller_state_8c01d9dc(void);
extern void call_8c0a1bf8(void);
extern void operation_8c0a2a4c(void);
extern void load_assets_ad_f_moyouring_8c1980b0(void);
extern void operation_8c1beb98(void);
extern void create_standard_task_tree_8c014498(void *, int);
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void TCameraCtrl_ctor_8c0a1448(S_c8c122700 *, void *);
extern void call_8c0a1a78(int);
extern void operation_8c0a237c(void *, void *);
extern void TAdBack_ctor_8c198294(void *, int);
extern void TWindowCtrlMain_ctor_8c1bec9c(void *, int);
extern void TObject_ctor_8c0330e4(void *, void *);
extern int game_malloc_8c011ecc(int);
extern int operation_8c19b054(void);
extern int game_malloc_buffer_8c011e9c(int);
extern void memset_8c12b880(void *, int, int);
extern void operation_8c191504(int);
extern void operation_8c01c250(int);
extern void call_8c1003d0(void *);
extern void call_8c060724(int);
extern void operation_8c04c270(void);
extern void call_8c238fd4(void *);
extern void wait_vsync_and_flip_8c380516(void);
void mode_title_init_8c184138(void)
{
    S_c8c122700 *t4;
    Frame frame;
    int t5;
    unsigned int v1;
    S_c8c122700 *t1;
    S_c8c122700 *t2;
    S_c8c122700 *t3;
    int t6;
    int t7;
    int t8;
    unsigned int pm9;
    set_elems_8c3806f6(0, 0, 0);
    pm9 = (unsigned int)0;
    v1 = pm9;
    while ((unsigned int)0x80 > v1) {
        ((S_x9456 *)((v1 << 2) + (char *)&(&frame)->f1c))->f00 = 0.0f;
        v1 = 1 + v1;
    }
    forward_8c37e7d4((void *)(&(&frame)->f1c));
    reset_controller_state_8c01d9dc();
    call_8c0a1bf8();
    operation_8c0a2a4c();
    load_assets_ad_f_moyouring_8c1980b0();
    operation_8c1beb98();
    create_standard_task_tree_8c014498((void *)((void *)0x8c2e2e84), 4);
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xf8);
    if (0 != t1) {
        TCameraCtrl_ctor_8c0a1448(t1, g_8c44be88);
    }
    *(Vector3 *)&(&frame)->f10 = *(&g_8c3199b4);
    *(&(&frame)->f04) = *(Vector3 *)&g_8c3199c0;
    call_8c0a1a78(6);
    operation_8c0a237c((void *)(&(&frame)->f10), (void *)(&(&frame)->f04));
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
    if (t2 != 0) {
        TAdBack_ctor_8c198294((void *)t2, (int)g_8c44be88);
    }
    g_8c4dbb28 = t2;
    t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
    if (0 != t3) {
        TWindowCtrlMain_ctor_8c1bec9c((void *)t3, (int)g_8c44be88);
    }
    g_8c4dbb2c = t3;
    t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x38);
    if (t4 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t4;
        S_c8c122700 **home = &self;
        TObject_ctor_8c0330e4((void *)t4, g_8c44be88);
        self->f18 = (void *)0x8c271fe0;
        t5 = game_malloc_8c011ecc(0x38);
        (void)home;
        self->f24 = (int)(t5);
        t6 = game_malloc_8c011ecc(0x14);
        self->f28 = (int)(t6);
        t5 = operation_8c19b054();
        t7 = t5;
        self->f2c = (char)t7;
        t5 = (int)(g_8c4dbb08);
        self->f30 = t5;
        t8 = game_malloc_buffer_8c011e9c(0x3c00);
        self->f20 = (S_c8c122700_20 *)t8;
        memset_8c12b880((void *)(self->f20), 0, 0x3c00);
        operation_8c191504(0);
        self->f34 = 0;
    }
    g_8c4dbb24 = t4;
    g_8c4dbb30 = 0;
    g_8c4dbb34 = 0;
    operation_8c01c250(2);
    g_8c4dbb38 = 0;
    g_8c4dbb3c = 0;
    call_8c1003d0((void *)((void *)0x8c3199e4));
    call_8c060724(-0x384);
    operation_8c04c270();
    call_8c238fd4((void *)((void *)0x8c41ce5c));
    wait_vsync_and_flip_8c380516();
}
