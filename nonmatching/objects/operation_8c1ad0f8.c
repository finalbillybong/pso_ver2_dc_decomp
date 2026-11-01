/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ad0f8
 * function: operation_8c1ad0f8
 * language: c
 * reference size: 412 bytes
 * compiled size: 412 bytes (+0.0%)
 * differing lines: 4 of 149 reference instruction lines
 * differing bytes: 7
 * provenance: generator draft (mode extern)
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
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_g8c4e1af4 S_g8c4e1af4;
typedef struct S_vv3 S_vv3;
typedef struct Block_frame_1c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_1c;
typedef struct Block_frame_10 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_10;
typedef struct Block_vv3_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_vv3_0;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    Block_frame_10 f10;
    Block_frame_1c f1c;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    Vector3 f90;
};
struct S_vv3 {
    Block_vv3_0 f00;
    int f0c;
    int f10;
};
extern S_g8c46ee80 *g_8c46ee80;
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern S_g8c4e1af4 *g_8c4e1af4;
extern int g_8c4e2278;
extern int g_8c4e227c;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern void call_8c38c0e6(int, int);
extern int call_8c18e768(int, int);
extern float call_8c38d7d8(S_vv3 *, void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c38c0f0(Frame *);
extern void call_8c3aa702(void *);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c1ad0f8(void)
{
    Frame frame;
    int v2;
    S_vv3 *v3;
    int t2;
    float v5;
    float v6;
    float t1;
    int v4;
    g_8c46f560 = (int)(g_8c575570);
    g_8c46f574 = (int)(g_8c5755a4);
    g_8c46f578 = (int)(g_8c5755a8);
    g_8c575570 = g_8c575570 & -0x11 | 0x82c;
    call_8c38c0e6(0xff00, 0x900);
    v2 = (int)(void *)0x8c4e1af8;
    t2 = call_8c18e768((int)(g_8c4e227c << 0x10), 0x10);
    *(Vector3 *)&(&frame)->f1c = *(Vector3 *)&g_8c46ee80->f90;
    (&frame)->f1c.f04 = 0.5f;
    v3 = (S_vv3 *)v2;
    v4 = (int)0;
    while (g_8c4e2278 > v4) {
        if (v3->f0c == 0 && !(-9.5f > v3->f00.f04)) {
            t1 = call_8c38d7d8(v3, (void *)(&(&frame)->f1c));
            if (75.0f > t1) {
                v5 = (float)1.0f;
                v6 = (float)(v5 - t1 / 75.0f * (t1 / 75.0f) * (t1 / 75.0f));
                njPushMatrixEx_8c38ae68();
                *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&v3->f00;
                (&frame)->f10.f04 = 0.5f;
                translate_current_matrix_v_8c382a40((void *)(&(&frame)->f10));
                njRotateY_8c37df90(0, (int)(v3->f10 + t2));
                (&frame)->f00 = v6 * 0.5f + -1.0f;
                (&frame)->f0c = -1.0f;
                (&frame)->f08 = -1.0f;
                (&frame)->f04 = -1.0f;
                call_8c38c0f0((Frame *)((&frame)));
                call_8c3aa702(g_8c4e1af4);
                njPopMatrixEx_8c38ad10();
            }
        }
        v4 = (int)(v4 + 1);
        v3 = (S_vv3 *)((char *)v3 + 20);
    }
    g_8c5755a4 = (int)(g_8c46f574);
    g_8c5755a8 = (int)(g_8c46f578);
    g_8c575570 = (int)(g_8c46f560);
}
