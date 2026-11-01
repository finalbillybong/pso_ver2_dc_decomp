/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2217e0
 * function: operation_8c2217e0
 * language: c
 * reference size: 168 bytes
 * compiled size: 164 bytes (-2.4%)
 * differing lines: 14 of 65 reference instruction lines
 * differing bytes: 92
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    float f2c;
    float f30;
};
extern void call_8c3827d8(void *);
extern void sq_select_8c38aeb4(int);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
void operation_8c2217e0(Object *o)
{
    call_8c3827d8((void *)((void *)0x8c337038));
    sq_select_8c38aeb4(1);
    sq_header_8c38af22(1, (int)((int)(o->f2c * 255.0f) << 0x18 | 0xffffff));
    sq_quad_8c38b09e((void *)(((char *)o + 0x34)), 0.6f);
    sq_quad_8c38b09e((void *)(((char *)o + 0x54)), 0.6f);
    {
        int c = (int)((int)(o->f30 * 255.0f) << 0x18 | 0xffffff);
        sq_header_8c38af22(0, c);
    }
    sq_quad_8c38b09e((void *)(((char *)o + 0x74)), 0.6f);
    sq_flush_8c38af12();
}
