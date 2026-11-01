/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c087354
 * function: operation_8c087354
 * language: c
 * reference size: 336 bytes
 * compiled size: 336 bytes (+0.0%)
 * differing lines: 62 of 143 reference instruction lines
 * differing bytes: 150
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467184 S_g8c467184;
typedef struct S_g8c469d20 S_g8c469d20;
typedef struct S_vv4 S_vv4;
typedef struct S_x73648 S_x73648;
struct S_vv4 {
    unsigned char f00;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
struct S_x73648 {
    float f00;
};
extern S_g8c467184 *g_8c467184;
extern S_g8c469d20 *g_8c469d20;
extern void restore_child_blend(void);
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(Frame *, float);
extern void sq_flush_8c38af12(void);
void operation_8c087354(int a0, int a1, float f0, float f1, float f2)
{
    Frame frame;
    int v2;
    int v1;
    int c;
    float *row;
    float fx;
    float fy;
    float v6;
    float v7;
    S_vv4 *v4;
    restore_child_blend();
    sq_select_8c38aeb4(1);
    call_8c3827d8(g_8c467184);
    sq_header_8c38af22(0, a0);
    v4 = (S_vv4 *)a1;
    v1 = (int)-0x100;
    v2 = (int)-0x20;
    while (v4->f00 != 0) {
        c = (unsigned char)*(char *)v4;
        v4 = (S_vv4 *)((char *)v4 + 1);
        (&frame)->f00 = f0;
        (&frame)->f04 = f1;
        row = (float *)((char *)g_8c469d20 + (c + v2 << 3));
        (&frame)->f04 += row[1];
        fx = (float)((c & 0xf) << 4);
        fy = (float)(c & 0xf0);
        (&frame)->f08 = (&frame)->f00 + row[0];
        (&frame)->f0c = (&frame)->f04 + 15.0f;
        (&frame)->f10 = fx / 256.0f;
        (&frame)->f14 = fy / 256.0f;
        (&frame)->f18 = (fx + row[0]) / 256.0f;
        (&frame)->f1c = (fy + 15.0f) / 256.0f;
        sq_quad_8c38b09e((Frame *)((&frame)), f2);
        f0 = (float)((float)(int)((S_x73648 *)((int)g_8c469d20 + v1 + (c << 3)))->f00 + f0);
    }
    sq_flush_8c38af12();
}
