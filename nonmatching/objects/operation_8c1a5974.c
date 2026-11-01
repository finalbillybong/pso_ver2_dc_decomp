/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a5974
 * function: operation_8c1a5974
 * language: c
 * reference size: 1272 bytes
 * compiled size: 1272 bytes (+0.0%)
 * differing lines: 210 of 485 reference instruction lines
 * differing bytes: 106
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
typedef struct S_g8c467180_34 S_g8c467180_34;
typedef struct S_g8c467180_34_0 S_g8c467180_34_0;
typedef struct Object Object;
typedef struct Arg0_274 Arg0_274;
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
    float f2c;
    char unknown30[0x10];
    float f40;
    float f44;
    float f48;
    float f4c;
    char unknown50[0x210];
    char f260;
    char unknown261[0x13];
    Arg0_274 *f274;
    int f278;
};
struct Arg0_274 {
    char unknown0[0x5c];
    float f5c;
};
struct S_g8c467180 {
    char unknown0[0x34];
    S_g8c467180_34 *f34;
};
struct S_g8c467180_34 {
    char unknown0[0xc];
    int f0c;
    int f10;
    int f14;
    int f18;
    int f1c;
};
extern S_g8c467180 *g_8c467180;
extern char g_8c31df44[];
extern void call_8c3827d8(void *);
extern void call_8c37eb1c(void *, int, int, float);
extern void set_child_blend(void);
extern void sq_select_8c38aeb4(int);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
extern void restore_child_blend(void);
extern void operation_8c04b244(float, float, int, float, int);
void operation_8c1a5974(Object *o)
{
    call_8c3827d8((void *)((void *)0x8c31ddfc));
    call_8c37eb1c((void *)((g_8c31df44 + 0x100)), 8, 0, -65535.0f);
    call_8c37eb1c((void *)((g_8c31df44 + 0x120)), 9, 0, -65535.0f);
    call_8c37eb1c((void *)((g_8c31df44 + 0x140)), 0xa, 0, -65535.0f);
    call_8c37eb1c((void *)((g_8c31df44 + 0x160)), 0xb, 0, -65535.0f);
    call_8c37eb1c((void *)((g_8c31df44 + 0x180)), 0xc, 0, -65535.0f);
    call_8c37eb1c((void *)((g_8c31df44 + 0x1a0)), 0xd, 0, -65535.0f);
    call_8c37eb1c((void *)((g_8c31df44 + 0x1c0)), 0xe, 0, -65535.0f);
    call_8c37eb1c((void *)((g_8c31df44 + 0x1e0)), 0xf, 0, -65535.0f);
    set_child_blend();
    sq_select_8c38aeb4(1);
    sq_header_8c38af22(9, -1);
    o->f40 = 69.0f;
    o->f20 = 69.0f;
    o->f44 = 124.0f;
    o->f24 = 124.0f;
    o->f48 = 197.0f;
    o->f28 = 197.0f;
    o->f4c = 252.0f;
    o->f2c = 252.0f;
    if (o->f260 == 0) {
        sq_quad_8c38b09e((void *)(&o->f20), 0.5f);
        sq_quad_8c38b09e((void *)(((char *)o + 0x60)), 0.5f);
    } else {
        sq_quad_8c38b09e((void *)(&o->f40), 0.5f);
        sq_quad_8c38b09e((void *)(((char *)o + 0x80)), 0.5f);
    }
    o->f40 = 255.0f;
    o->f20 = 255.0f;
    o->f44 = 124.0f;
    o->f24 = 124.0f;
    o->f48 = 383.0f;
    o->f28 = 383.0f;
    o->f4c = 252.0f;
    o->f2c = 252.0f;
    if (o->f260 == 1) {
        sq_quad_8c38b09e((void *)(&o->f20), 0.5f);
        sq_quad_8c38b09e((void *)(((char *)o + 0xa0)), 0.5f);
    } else {
        sq_quad_8c38b09e((void *)(&o->f40), 0.5f);
        sq_quad_8c38b09e((void *)(((char *)o + 0xc0)), 0.5f);
    }
    o->f40 = 440.0f;
    o->f20 = 440.0f;
    o->f44 = 124.0f;
    o->f24 = 124.0f;
    o->f48 = 568.0f;
    o->f28 = 568.0f;
    o->f4c = 252.0f;
    o->f2c = 252.0f;
    if (o->f260 == 2) {
        sq_quad_8c38b09e((void *)(&o->f20), 0.5f);
        sq_quad_8c38b09e((void *)(((char *)o + 0xe0)), 0.5f);
    } else {
        sq_quad_8c38b09e((void *)(&o->f40), 0.5f);
        sq_quad_8c38b09e((void *)(((char *)o + 0x100)), 0.5f);
    }
    sq_quad_8c38b09e((void *)(((char *)o + 0x220)), -1.0f / (o->f274->f5c + 0.1495f));
    sq_quad_8c38b09e((void *)(((char *)o + 0x240)), -1.0f / (o->f274->f5c + 0.1495f));
    sq_header_8c38af22(0xa, -1);
    sq_quad_8c38b09e((void *)(((char *)o + 0x120)), 0.5f);
    sq_quad_8c38b09e((void *)(((char *)o + 0x140)), 0.5f);
    sq_quad_8c38b09e((void *)(((char *)o + 0x160)), 0.5f);
    sq_flush_8c38af12();
    restore_child_blend();
    if (o->f278 == 0) {
        operation_8c04b244(69.0f, 275.0f, (int)(*(S_g8c467180_34_0 **)((char *)((char *)g_8c467180->f34 + 0x0) + (o->f260 << 2))), -1.0f / (o->f274->f5c + 0.1495f), -1);
        operation_8c04b244(223.0f, 416.0f, (int)(g_8c467180->f34->f18), -1.0f / (o->f274->f5c + 0.1495f), -1);
        operation_8c04b244(367.0f, 416.0f, (int)(g_8c467180->f34->f1c), -1.0f / (o->f274->f5c + 0.1495f), -1);
        return;
    }
    operation_8c04b244(69.0f, 275.0f, (int)(g_8c467180->f34->f0c), -1.0f / (o->f274->f5c + 0.1495f), -1);
    operation_8c04b244(223.0f, 416.0f, (int)(g_8c467180->f34->f10), -1.0f / (o->f274->f5c + 0.1495f), -1);
    operation_8c04b244(367.0f, 416.0f, (int)(g_8c467180->f34->f14), -1.0f / (o->f274->f5c + 0.1495f), -1);
}
