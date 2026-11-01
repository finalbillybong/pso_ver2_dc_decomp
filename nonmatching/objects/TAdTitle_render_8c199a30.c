/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c199a30
 * function: TAdTitle_render_8c199a30
 * language: c
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 44 of 85 reference instruction lines
 * differing bytes: 57
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
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_48 S_g8c467180_48;
typedef struct S_g8c467180_48_0 S_g8c467180_48_0;
typedef struct S_g8c4dc440 S_g8c4dc440;
typedef struct Object Object;
struct Object {
    char unknown0[0x9c];
    unsigned char f9c;
    char unknown9d[0x3];
    int fa0;
    float fa4;
    float fa8;
};
struct S_g8c467180 {
    char unknown0[0x48];
    S_g8c467180_48 *f48;
};
extern S_g8c467180 *g_8c467180;
extern S_g8c4dc440 *g_8c4dc440;
extern void call_8c380ab8(int, int);
extern void call_8c3827d8(void *);
extern void sq_select_8c38aeb4(int);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(float, void *);
extern void sq_flush_8c38af12(void);
extern void operation_8c04b230(int, int, float, float);
void TAdTitle_render_8c199a30(Object *o)
{
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 0xa);
    call_8c3827d8(g_8c4dc440);
    sq_select_8c38aeb4(1);
    sq_header_8c38af22((int)(o->f9c), (int)(o->fa0 << 0x18 | 0xffffff));
    sq_quad_8c38b09e(1.0f, (void *)(((char *)o + 0x2c)));
    sq_quad_8c38b09e(1.0f, (void *)(((char *)o + 0x4c)));
    sq_quad_8c38b09e(1.0f, (void *)(((char *)o + 0x6c)));
    sq_flush_8c38af12();
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
    operation_8c04b230((int)(*(S_g8c467180_48_0 **)((char *)((char *)g_8c467180->f48 + 0x0) + (o->f9c << 2))), (int)(o->fa0 << 0x18 | 0xffffff), o->fa4, o->fa8);
}
