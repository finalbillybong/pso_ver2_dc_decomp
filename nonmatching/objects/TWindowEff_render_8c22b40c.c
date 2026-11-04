/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22b40c
 * function: TWindowEff_render_8c22b40c
 * language: c
 * reference size: 292 bytes
 * compiled size: 292 bytes (+0.0%)
 * differing lines: 48 of 119 reference instruction lines
 * differing bytes: 193
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * class header: src/include/classes/TWindowEff.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2efec8 S_L8c2efec8;
typedef struct S_L8c3381d4 S_L8c3381d4;
typedef struct S_L8c3381d4_8 S_L8c3381d4_8;
typedef struct Frame Frame;
typedef struct S_g8c2efecc S_g8c2efecc;
typedef struct S_g8c2efed0 S_g8c2efed0;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct S_x39184 S_x39184;
typedef struct S_x87520 S_x87520;
typedef struct Block_L8c3381d4_0 {
    char unknown0[0x8];
    S_L8c3381d4_8 *f08;
} Block_L8c3381d4_0;
struct Frame {
    Vector3 f00;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
};
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
    float f2c;
    Arg0_30 *f30;
    char unknown34[0x10];
    int f44;
};
struct S_L8c3381d4 {
    Block_L8c3381d4_0 f00;
};
struct S_L8c2efec8 {
    char unknown0[0x4];
    S_g8c2efecc *f04;
    S_g8c2efed0 *f08;
    char unknownc[0x8];
    int f14;
    int f18;
};
struct S_x87520 {
    float f00;
};
struct S_x39184 {
    float f00;
};
extern S_L8c2efec8 g_8c2efec8;
extern S_L8c3381d4 g_8c3381d4;
extern void reset_state_8c391c94(void *);
extern void backup_render_state(void);
extern void set_child_blend(void);
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(void *, int);
extern void sq_header3_8c38b02e(void *);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
extern void reset_state_8c391cc4(void);
extern void restore_render_state(void);
void TWindowEff_render_8c22b40c(Object *o)
{
    Frame frame;
    char *v1;
    int v2;
    float v5;
    float v3;
    float v4;
    float v6;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&(&g_8c3381d4)->f00;
    v1 = (char *)*(int *)((char *)&(&frame)->f00 + (o->f44 << 2));
    reset_state_8c391c94((void *)((&g_8c3381d4)->f00.f08));
    backup_render_state();
    set_child_blend();
    sq_select_8c38aeb4(1);
    v2 = (int)((int)(v1) * 0x28);
    call_8c3827d8((void *)(*(S_g8c2efecc **)((char *)&g_8c2efec8.f04 + (v2))));
    sq_header_8c38af22((void *)(*(S_g8c2efed0 **)((char *)&g_8c2efec8.f08 + (v2))), -1);
    v5 = (float)o->f20;
    v3 = (float)(((S_x87520 *)(v2 + (char *)&g_8c2efec8.f14))->f00 * v5);
    v4 = (float)(o->f24 - v3);
    (&frame)->f0c = v4;
    v6 = (float)((S_x39184 *)(v2 + (char *)&g_8c2efec8.f18))->f00;
    (&frame)->f14 = o->f24 + v3;
    (&frame)->f10 = o->f28 - v6 * v5;
    (&frame)->f18 = o->f28 + v6 * v5;
    (&frame)->f1c = 0.0f;
    (&frame)->f20 = 0.0f;
    (&frame)->f24 = 1.0f;
    (&frame)->f28 = 1.0f;
    sq_header3_8c38b02e((void *)(o->f30));
    sq_quad_8c38b09e((void *)(&(&frame)->f0c), o->f2c);
    sq_flush_8c38af12();
    reset_state_8c391cc4();
    restore_render_state();
}
