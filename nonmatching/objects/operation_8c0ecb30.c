/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ecb30
 * function: operation_8c0ecb30
 * language: c
 * reference size: 380 bytes
 * compiled size: 380 bytes (+0.0%)
 * differing lines: 10 of 152 reference instruction lines
 * differing bytes: 19
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
typedef struct S_g8c4703c8 S_g8c4703c8;
typedef struct Object Object;
typedef struct Arg0_18c Arg0_18c;
typedef struct S_vv10 S_vv10;
struct Object {
    char unknown0[0x174];
    unsigned char f174;
    char unknown175[0x1];
    char f176;
    char unknown177[0x1];
    int f178;
    char unknown17c[0x10];
    Arg0_18c *f18c;
};
struct S_vv10 {
    char unknown0[0x5c];
    float f5c;
};
extern S_g8c4703c8 *g_8c4703c8;
extern void operation_8c1b0330(float);
extern void hs_8c380ab8(int, int);
extern void hs_8c3827d8(void *);
extern void sq_select_8c38aeb4(int);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(void *, float);
extern void hs_8c38b09e_1(float, void *);
extern void operation_8c0ecf78(Object *, char);
extern void sq_flush_8c38af12(void);
extern void operation_8c0ece88(Object *);
void operation_8c0ecb30(Object *o)
{
    S_vv10 *v10;
    int v7;
    int v8;
    int v9;
    v10 = (S_vv10 *)o->f18c;
    if (v10 != 0) {
        operation_8c1b0330(-1.0f / (v10->f5c + 0.1495f));
    }
    hs_8c380ab8(0, 8);
    hs_8c380ab8(1, 0xa);
    hs_8c3827d8(g_8c4703c8);
    sq_select_8c38aeb4(1);
    sq_header_8c38af22(1, o->f174 << 0x18 | 0xffffff);
    hs_8c38b09e_1(1.0f, ((char *)o + 0x34));
    if (o->f178 > 0) {
        v7 = (int)0xff;
    } else {
        v7 = (int)0x77;
    }
    o->f174 = v7;
    sq_header_8c38af22(1, o->f174 << 0x18 | 0xffffff);
    hs_8c38b09e_1(1.0f, ((char *)o + 0x54));
    if (o->f178 > 1) {
        v8 = (int)0xff;
    } else {
        v8 = (int)0x77;
    }
    o->f174 = v8;
    sq_header_8c38af22(1, o->f174 << 0x18 | 0xffffff);
    hs_8c38b09e_1(1.0f, ((char *)o + 0x74));
    if (o->f178 > 2) {
        v9 = (int)0xff;
    } else {
        v9 = (int)0x77;
    }
    o->f174 = v9;
    sq_header_8c38af22(1, o->f174 << 0x18 | 0xffffff);
    hs_8c38b09e_1(1.0f, ((char *)o + 0x154));
    o->f174 = 0xff;
    operation_8c0ecf78(o, o->f176);
    sq_flush_8c38af12();
    hs_8c380ab8(0, 8);
    hs_8c380ab8(1, 6);
    operation_8c0ece88(o);
}
