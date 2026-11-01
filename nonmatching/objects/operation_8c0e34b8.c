/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e34b8
 * function: operation_8c0e34b8
 * language: c
 * reference size: 224 bytes
 * compiled size: 240 bytes (+7.1%)
 * differing lines: 56 of 84 reference instruction lines
 * differing bytes: 174
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Object Object;
struct Object {
    char unknown0[0x48];
    float f48;
    float f4c;
    char unknown50[0xc];
    float f5c;
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
extern S_g8c46fe00 *g_8c46fe00;
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void scale_rectangle_fields(void *, void *, float);
extern void sq_quad_8c38b09e(Frame *, float);
extern void sq_flush_8c38af12(void);
void operation_8c0e34b8(Object *o, int a1)
{
    Frame frame;
    float v1;
    float v2;
    v1 = (float)-1.0f;
    v2 = (float)(v1 / o->f5c);
    sq_select_8c38aeb4(1);
    call_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(2, -1);
    (&frame)->f00 = o->f48 + 9.0f;
    (&frame)->f04 = o->f4c + 13.0f;
    (&frame)->f08 = o->f48 + 9.0f + 107.0f;
    (&frame)->f0c = o->f4c + 13.0f + 33.0f;
    (&frame)->f10 = 0.58203125f;
    (&frame)->f14 = 0.87109375f;
    (&frame)->f18 = 1.0f;
    (&frame)->f1c = 1.0f;
    scale_rectangle_fields((void *)a1, (void *)(&frame), 9.0f);
    sq_quad_8c38b09e((Frame *)((&frame)), v2);
    sq_flush_8c38af12();
}
