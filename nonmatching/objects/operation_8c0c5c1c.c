/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c5c1c
 * function: operation_8c0c5c1c
 * language: c
 * reference size: 268 bytes
 * compiled size: 268 bytes (+0.0%)
 * differing lines: 6 of 88 reference instruction lines
 * differing bytes: 6
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
typedef struct S_g8c418250 S_g8c418250;
typedef struct S_g8c418254 S_g8c418254;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
struct Frame {
    Vector3 f00;
};
extern Vector3 g_8c3060d8;
extern S_g8c418250 *g_8c418250;
extern S_g8c418254 *g_8c418254;
extern S_g8c44be84 *g_8c44be84;
extern S_g8c44be98 *g_8c44be98;
extern int g_8c44be9c;
extern int g_8c4689e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4db9e0 *g_8c4db9e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TFog_ctor_8c013528(void *, int, void *);
extern void call_8c0142d8(void *);
extern void create_descriptor_managers(void);
extern void TCameraCtrl_create_8c0a2c74(void);
extern void TScene_create_8c031328(void);
extern void TSceneSora_create_8c09f220(void);
extern void operation_8c01e790(int, int, int);
extern int lookup_low_id(int);
extern void operation_8c0a1b78(void *);
extern void operation_8c09cd50(void *, int, int);
extern void initialize_color_fall(int, void *, int);
void operation_8c0c5c1c(void)
{
    int t2;
    int t1;
    Frame frame;
    int t3;
    int t4;
    int pm5;
    int pm6;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c3060d8;
    pm5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
    t1 = pm5;
    if (t1 != 0) {
        TFog_ctor_8c013528((void *)t1, (int)g_8c44be98, (void *)(&frame));
    }
    call_8c0142d8((void *)((void *)0x8c2e2e84));
    create_descriptor_managers();
    g_8c4689e0 = (int)(g_8c44be9c);
    TCameraCtrl_create_8c0a2c74();
    TScene_create_8c031328();
    TSceneSora_create_8c09f220();
    pm6 = (int)g_8c418250;
    operation_8c01e790(0, pm6, (int)g_8c4db9e0);
    t2 = lookup_low_id((int)g_8c418254);
    operation_8c0a1b78((void *)t2);
    t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x24);
    if (!(t3 == 0)) {
        t1 = (int)((void *)0x8c0c5b6c);
        operation_8c09cd50((void *)t3, (int)g_8c44be84, t1);
    }
    t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x2c);
    if (0 != t4) {
        initialize_color_fall(t4, g_8c44be84, 0);
    }
}
