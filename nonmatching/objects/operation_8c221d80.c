/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c221d80
 * function: operation_8c221d80
 * language: c
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 8 of 85 reference instruction lines
 * differing bytes: 10
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
    char unknown0[0x20];
    int f20;
    char unknown24[0xc];
    int f30;
};
extern void sq_select_8c38aeb4(int);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
void operation_8c221d80(Object *o)
{
    sq_select_8c38aeb4(1);
    switch (o->f20) {
    case 1:
        sq_header_8c38af22(0, -1);
        sq_quad_8c38b09e((void *)(((char *)o + 0x34)), 0.4f);
        sq_quad_8c38b09e((void *)(((char *)o + 0x54)), 0.4f);
        sq_header_8c38af22((int)((o->f30 << 1) + 2), -1);
        o = (Object *)((char *)o + 0xb4);
        sq_quad_8c38b09e((void *)o, 0.0001f);
        break;
    case 3:
    case 4:
        sq_header_8c38af22(1, -1);
        sq_quad_8c38b09e((void *)(((char *)o + 0x74)), 0.4f);
        sq_quad_8c38b09e((void *)(((char *)o + 0x94)), 0.4f);
        sq_header_8c38af22((int)((o->f30 << 1) + 3), -1);
        o = (Object *)((char *)o + 0xd4);
        sq_quad_8c38b09e((void *)o, 0.0001f);
    case 0:
    case 2:
        break;
    }
    sq_flush_8c38af12();
}
