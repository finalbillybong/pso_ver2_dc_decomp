/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c752c
 * function: TBreakUpMdl_render_8c0c752c
 * language: c
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 4 of 97 reference instruction lines
 * differing bytes: 8
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
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_24_4 Arg0_24_4;
typedef struct Arg0_24_4_0 Arg0_24_4_0;
typedef struct Arg0_28 Arg0_28;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0xc];
} Block_frame_0;
struct Object {
    char unknown0[0x20];
    int f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
    float f2c;
    char unknown30[0x8];
    int f38;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_24 {
    char unknown0[0x4];
    Arg0_24_4 *f04;
};
extern Block16 g_8c30663c;
extern int g_8c46f560;
extern int g_8c575570;
extern void call_8c3827d8(void *);
extern void call_8c38c0e6(int, int);
extern void call_8c38c0f0(Frame *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(int);
extern void call_8c37dc90(int, int);
extern void call_8c3aa702(void *);
extern void njPopMatrixEx_8c38ad10(void);
void TBreakUpMdl_render_8c0c752c(Object *o)
{
    Frame frame;
    int v12;
    char *v13;
    if (o->f28 != 0) {
        call_8c3827d8((void *)(o->f28));
    }
    g_8c46f560 = (int)(g_8c575570);
    if (1.0f > o->f2c) {
        *(Block16 *)&(&frame)->f00 = *(Block16 *)&g_8c30663c;
        g_8c575570 |= 0x810;
        call_8c38c0e6(0xff00, 0x800);
        (&frame)->f00.f00 = o->f2c;
        call_8c38c0f0((Frame *)((&frame)));
    }
    v12 = (int)0;
    while (o->f20 > v12) {
        v13 = (char *)o->f38 + v12 * 0x28;
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((int)v13);
        call_8c37dc90((int)(v13 + 0x18), 0);
        call_8c3aa702((void *)(*(Arg0_24_4_0 **)((char *)((char *)o->f24->f04 + 0x0) + (v12 * 0x1c))));
        njPopMatrixEx_8c38ad10();
        v12 = (int)(v12 + 1);
    }
    call_8c38c0e6(0xff00, 0);
    g_8c575570 = (int)(g_8c46f560);
}
