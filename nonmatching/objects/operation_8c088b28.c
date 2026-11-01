/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c088b28
 * function: operation_8c088b28
 * language: c
 * reference size: 440 bytes
 * compiled size: 440 bytes (+0.0%)
 * differing lines: 38 of 164 reference instruction lines
 * differing bytes: 47
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
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_88 Arg0_88;
typedef struct S_x29536 S_x29536;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x20];
    Arg0_88 *f88;
};
struct S_x29536 {
    Vector3 f00;
};
extern Vector3 g_8c2fff84;
extern char g_8c2fff44[];
extern char g_8c2fffb0[];
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
extern void njPushMatrix_8c38ade4(void *);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, int, int);
extern void njPopMatrixEx_8c38ad10(void);
extern void operation_8c0c5488(void *, Frame *, int, int);
extern void operation_8c0c5484(int, float);
void operation_8c088b28(Object *o)
{
    Frame frame;
    int v4;
    int v3;
    int v2;
    int v1;
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001a, (void *)((g_8c2fffb0 + 0xfc)));
    debug_print_at_8c38cf80(0x13001b, (void *)((g_8c2fffb0 + 0x109)));
    debug_print_at_8c38cf80(0x13001c, (void *)((g_8c2fffb0 + 0x116)));
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c2fffb0 + 0x123)));
    njPrintColor_8c38c5b6(-0xf0f10);
    v1 = (int)-0x10000;
    v2 = (int)0;
    while (4 > v2) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c2fff84;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x6c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        v3 = (int)(v2 * 0xc);
        v4 = (int)((int)o + v3 + 0xf0);
        call_8c3be280(0, (int)(v3 + g_8c2fff44), v4);
        njPopMatrixEx_8c38ad10();
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        translate_current_matrix_v_8c382a40((void *)v4);
        njRotateY_8c37df90(0, (void *)(o->f88));
        call_8c3be280(0, (int)(&frame), (int)(&frame));
        njPopMatrixEx_8c38ad10();
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x29536 *)(((char *)o + 0xf0) + v3))->f00;
        (&frame)->f0c.f04 += 5.0f;
        (&frame)->f00.f04 += 5.0f;
        operation_8c0c5488((void *)(&(&frame)->f0c), (Frame *)((&frame)), v1, v1);
        operation_8c0c5484(v4, 15.0f);
        v2 = (int)(v2 + 1);
    }
}
