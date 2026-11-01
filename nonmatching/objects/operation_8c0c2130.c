/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c2130
 * function: operation_8c0c2130
 * language: c
 * reference size: 352 bytes
 * compiled size: 352 bytes (+0.0%)
 * differing lines: 10 of 141 reference instruction lines
 * differing bytes: 42
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
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x8];
} Block_frame_0;
struct Arg1 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
extern Vector3 g_8c305de4;
extern Vector3 g_8c305df0;
extern float call_8c130334(float, float);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be280(int, void *, int);
extern void call_8c3bdf60(int, int);
extern S_c8c011214 *operation_8c011214(int, int, int);
extern float distance_xz_root(void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c0c2130(int a0, Arg1 *a1)
{
    Frame frame;
    int v8;
    float v1;
    int v7;
    int v2;
    char *v5;
    float v4;
    int v3;
    int v6;
    S_c8c011214 *t1;
    float t2;
    float t3;
    t3 = call_8c130334(a1->f00, a1->f08);
    v1 = (float)0.0f;
    v2 = (int)(int)(t3 * 65536.0f / 6.28318405f);
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c305de4;
    njRotateY_8c37df90(0, v2);
    v4 = (float)v1;
    v5 = (char *)v2;
    v6 = (int)0;
    v3 = (int)0x5555;
    while (3 > v6) {
        v7 = (int)(a0 + 0x3ac);
        call_8c3be280(0, (void *)(&(&frame)->f0c), v7);
        v8 = (int)(a0 + 0x324);
        call_8c3bdf60(v7, v8);
        t1 = operation_8c011214(v8, v7, -1);
        if (t1 == 0) {
            return;
        }
        t2 = distance_xz_root((void *)(a0 + 0x3c), (void *)(t1->f04));
        if ((t2 - 20.0f) > v4) {
            v5 = (char *)v2;
            v4 = (float)(t2 - 20.0f);
        }
        njRotateY_8c37df90(0, v3);
        v2 = (int)(v2 + v3);
        v6 = (int)(v6 + 1);
    }
    njPopMatrixEx_8c38ad10();
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c305df0;
    (&frame)->f00.f00 = v4;
    njRotateY_8c37df90(0, (int)(v5));
    call_8c3be280(0, (void *)(&frame), (int)(a0 + 0x3ac));
    call_8c3bdf60((int)(a0 + 0x3ac), (int)(a0 + 0x324));
    njPopMatrixEx_8c38ad10();
}
