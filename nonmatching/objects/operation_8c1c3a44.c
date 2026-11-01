/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c3a44
 * function: operation_8c1c3a44
 * language: c
 * reference size: 96 bytes
 * compiled size: 96 bytes (+0.0%)
 * differing lines: 4 of 29 reference instruction lines
 * differing bytes: 4
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
typedef struct Object Object;
struct Object {
    char unknown0[0x184];
    int f184;
    char unknown188[0x58];
    char f1e0[4];
};
extern void call_8c3827d8(int);
extern void sq_select_8c38aeb4(int);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
void operation_8c1c3a44(Object *o)
{
    call_8c3827d8((int)((int)o->f184 + 0x3cc));
    sq_select_8c38aeb4(1);
    sq_header_8c38af22(0, -1);
    sq_quad_8c38b09e((void *)o->f1e0, 0.3f);
    sq_flush_8c38af12();
}
