/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0df3e0
 * function: operation_8c0df3e0
 * language: c
 * reference size: 832 bytes
 * compiled size: 832 bytes (+0.0%)
 * differing lines: 58 of 348 reference instruction lines
 * differing bytes: 16
 * provenance: hand pass on a generator draft (address casts converted to prototypes)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Pos2 Pos2;
typedef struct Rect Rect;
typedef struct S_g8c467184 S_g8c467184;
typedef struct Object Object;
typedef struct Arg0_88 Arg0_88;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x88];
    Arg0_88 *f88;
};
struct Arg1 {
    float f00;
    float f04;
    char unknown8[0x28];
    int f30;
    float f34;
};
struct Pos2 {
    float f00;
    float f04;
};
struct Rect {
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
};
extern S_g8c467184 *g_8c467184;
extern int hs_8c087348(void *);
extern void sq_select_8c38aeb4(int);
extern void hs_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void scale_rectangle_fields(Arg1 *, void *);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
extern void operation_8c19a370(Arg1 *, int, int, float, float);
extern void hs_8c19a56c(Pos2 *, void *, int, float);
void operation_8c0df3e0(Object *o, Arg1 *a1, int a2)
{
    Rect r;
    Pos2 pos;
    float v1;
    int v7;
    int v22;
    float v11;
    float v4;
    int t1;
    if (o->f88 == 0) {
        return;
    }
    t1 = hs_8c087348(o->f88);
    v4 = (float)(float)t1;
    if (0.0f > (float)t1) {
        v1 = (float)((float)t1 + 4294967296.0f);
        v4 = (float)v1;
    }
    if (6 > a1->f30) {
        v7 = (int)(int)((float)(a1->f30 * 0xff) * 0.166666672f);
    } else {
        v7 = (int)0xff;
    }
    v22 = (int)((unsigned char)v7 << 0x18);
    pos.f00 = a1->f00 - 11.0f;
    pos.f04 = a1->f04 - 10.0f;
    v11 = (float)(-1.0f / (a1->f34 + 0.0598f));
    a2 = a2 & 0xffffff | v22;
    sq_select_8c38aeb4(1);
    hs_8c3827d8(g_8c467184);
    sq_header_8c38af22(0, a2);
    r.f08 = pos.f00;
    r.f0c = pos.f04;
    r.f10 = r.f08 + 16.0f;
    r.f14 = r.f0c + 19.0f;
    r.f18 = 0.56640625f;
    r.f1c = 0.92578125f;
    r.f20 = 0.62890625f;
    r.f24 = 1.0f;
    scale_rectangle_fields(a1, &r);
    sq_quad_8c38b09e(&r, v11);
    if (20.0f > v4) {
        r.f08 = pos.f00 + 20.0f - 16.0f + 12.0f;
    } else {
        r.f08 = pos.f00 + v4 - 16.0f + 12.0f;
    }
    r.f0c = pos.f04;
    r.f10 = r.f08 + 16.0f;
    r.f14 = r.f0c + 19.0f;
    r.f18 = 0.69140625f;
    r.f1c = 0.92578125f;
    r.f20 = 0.75390625f;
    r.f24 = 1.0f;
    scale_rectangle_fields(a1, &r);
    sq_quad_8c38b09e(&r, v11);
    if (v4 > 20.0f) {
        r.f08 = pos.f00 + 16.0f;
        r.f0c = pos.f04;
        r.f10 = pos.f00 + v4 - 16.0f + 12.0f;
        r.f14 = r.f0c + 19.0f;
        r.f18 = 0.62890625f;
        r.f1c = 0.92578125f;
        r.f20 = 0.69140625f;
        r.f24 = 1.0f;
        scale_rectangle_fields(a1, &r);
        sq_quad_8c38b09e(&r, v11);
    }
    sq_flush_8c38af12();
    pos.f00 += 6.0f;
    if (20.0f > v4) {
        pos.f00 += (20.0f - v4) * 0.5f;
    }
    pos.f04 += 3.0f;
    operation_8c19a370(a1, 0, 1, -1.0f / (a1->f34 + 0.07475f), 100000.0f);
    hs_8c19a56c(&pos, o->f88, v22, 1000000.0f);
}
