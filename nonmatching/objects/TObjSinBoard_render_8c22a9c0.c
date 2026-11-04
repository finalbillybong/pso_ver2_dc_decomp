/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22a9c0
 * function: TObjSinBoard_render_8c22a9c0
 * language: c
 * reference size: 328 bytes
 * compiled size: 328 bytes (+0.0%)
 * differing lines: 26 of 126 reference instruction lines
 * differing bytes: 31
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, stack frame and spills, instruction or operand order; review found and
 *   fixed behaviour defects of the generator draft; not proven equivalent to the original
 * class header: src/include/classes/TObjSinBoard.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct Block48 {
    int words[12];
} Block48;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
struct Frame {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    int f10;
    int f14;
    int f18;
    int f1c;
    Block16 f20;
    Block48 f30;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x18];
    Arg0_60 *f60;
    Arg0_64 *f64;
    Arg0_68 *f68;
    float f6c;
    float f70;
    float f74;
};
extern Block48 g_8c338134;
extern Block16 g_8c338164;
extern int g_8c5062a0;
extern void restore_child_blend(void);
extern void call_8c3827d8(void *);
extern void call_8c382820(int);
extern void reset_state_8c391c94(void);
extern void njPushMatrixEx_8c38ae68(void);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void njRotateZ_8c37e02c(int, void *);
extern void njRotateX_8c37dd28(int, void *);
extern void njRotateY_8c37df90(int, void *);
extern void njScale_8c37e2e4(int, float, float, float);
extern void call_8c38f810(void *, int, int);
extern void njPopMatrixEx_8c38ad10(void);
extern void reset_state_8c391cc4(void);
void TObjSinBoard_render_8c22a9c0(Object *o)
{
    Frame frame;
    if (g_8c5062a0 != 0) {
        *(Block48 *)&(&frame)->f30 = *(Block48 *)&g_8c338134;
        *(Block16 *)&(&frame)->f20 = *(Block16 *)&g_8c338164;
        (&frame)->f00 = 0;
        (&frame)->f10 = (int)(&(&frame)->f30);
        (&frame)->f02 = 0;
        (&frame)->f14 = (int)(&(&frame)->f20);
        (&frame)->f04 = 0;
        (&frame)->f18 = (int)(&frame);
        (&frame)->f06 = 0xff;
        (&frame)->f1c = 4;
        (&frame)->f0a = (&frame)->f08 = 0xff;
        (&frame)->f0c = 0xff;
        (&frame)->f0e = 0;
        restore_child_blend();
        call_8c3827d8((void *)((void *)0x8c5062b0));
        call_8c382820(0);
        reset_state_8c391c94();
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, o->f3c, o->f40, o->f44);
        njRotateZ_8c37e02c(0, (void *)(o->f68));
        njRotateX_8c37dd28(0, (void *)(o->f60));
        njRotateY_8c37df90(0, (void *)(o->f64));
        njScale_8c37e2e4(0, o->f6c, o->f70, o->f74);
        call_8c38f810((void *)(&(&frame)->f10), 4, -0x7fffffa0);
        njPopMatrixEx_8c38ad10();
        reset_state_8c391cc4();
    }
}
