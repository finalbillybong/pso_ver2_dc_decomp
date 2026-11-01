/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1de27c
 * function: operation_8c1de27c
 * language: c
 * reference size: 672 bytes
 * compiled size: 672 bytes (+0.0%)
 * differing lines: 56 of 278 reference instruction lines
 * differing bytes: 72
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
typedef struct S_c8c1dfb6c S_c8c1dfb6c;
typedef struct S_c8c1dfbd8 S_c8c1dfbd8;
typedef struct Frame Frame;
typedef struct S_g8c46718c S_g8c46718c;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_vv13 S_vv13;
typedef struct S_vv23 S_vv23;
struct Arg1 {
    char unknown0[0x30];
    int f30;
    float f34;
};
struct S_vv1 {
    char unknown0[0x4];
    unsigned char *f04;
};
struct S_vv13 {
    unsigned char f00;
};
struct Frame {
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
};
struct Object {
    char unknown0[0x48];
    float f48;
    float f4c;
};
struct S_vv23 {
    float f00;
    float f04;
};
extern S_vv1 *g_8c46718c;
extern S_g8c46fe00 *g_8c46fe00;
extern int operation_8c1dfb6c(void *);
extern int operation_8c1dfbd8(Object *);
extern int operation_8c1dfc78(Object *);
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
void operation_8c1de27c(Object *o, Arg1 *a1)
{
    Frame frame;
    S_vv1 *g;
    float v4;
    float v3;
    float v2;
    float y;
    unsigned char w;
    unsigned int col;
    unsigned int row;
    unsigned char *p;
    int rowoff;
    int t1;
    int t2;
    int t3;
    unsigned char kind;
    S_vv23 *uv;
    float s;
    g = g_8c46718c;
    if (!(a1->f30 >= 0)) {
        return;
    }
    v2 = -1.0f;
    v3 = v2 / (a1->f34 + 0.0598f);
    v4 = v2 / a1->f34;
    v2 = v2 / (a1->f34 + 0.0299f);
    p = g->f04;
    t1 = operation_8c1dfb6c((void *)o);
    t2 = operation_8c1dfbd8(o);
    t3 = operation_8c1dfc78(o);
    sq_select_8c38aeb4(0);
    call_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(0, -1);
    for (row = 0; row < 7; row++) {
        rowoff = row << 4;
        col = 0;
        y = (float)row * 19.0f;
        for (; col < 0x10; col++, p++) {
            switch (*p) {
            case 2:
                kind = 2;
                w = 1;
                break;
            case 4:
                kind = 3;
                w = 3;
                break;
            case 0:
                kind = 1;
                w = 0;
                break;
            case 1:
            case 3:
            case 5:
            case 6:
            case 7:
            default:
                kind = 0;
                w = 0;
                break;
            }
            if (col + rowoff == t1) {
                uv = (S_vv23 *)((char *)0x8c289568 + (kind << 3));
                s = v3;
            } else if (col + rowoff == t2) {
                uv = (S_vv23 *)((char *)0x8c289588 + (kind << 3));
                s = v2;
            } else if (col + rowoff == t3) {
                uv = (S_vv23 *)((char *)0x8c289588 + (kind << 3));
                s = v2;
            } else {
                uv = (S_vv23 *)((char *)0x8c289548 + (kind << 3));
                s = v4;
            }
            frame.f08 = (float)col * 19.0f + o->f48 - 1.0f + 2.0f;
            frame.f0c = y + o->f4c - 1.0f + 2.0f;
            frame.f10 = (float)(col + w) * 19.0f + o->f48 + 19.0f + 2.0f;
            frame.f14 = y + o->f4c + 19.0f + 2.0f;
            frame.f18 = uv->f00 / 256.0f;
            frame.f1c = uv->f04 / 256.0f;
            frame.f20 = (uv->f00 + 20.0f + (float)w * 19.0f) / 256.0f;
            frame.f24 = (uv->f04 + 20.0f) / 256.0f;
            sq_quad_8c38b09e((void *)&frame, s);
            col += w;
            p += w;
        }
    }
    sq_flush_8c38af12();
}
