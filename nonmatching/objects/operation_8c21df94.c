/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21df94
 * function: operation_8c21df94
 * language: c
 * reference size: 108 bytes
 * compiled size: 108 bytes (+0.0%)
 * differing lines: 4 of 39 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Arg0_30 {
    int f00;
};
extern char g_8c336730[];
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern void call_8c18ec00(int, int);
extern void call_8c0e2278(int, void *, int);
extern void initialize_fields_8c0e24e8(void *);
void operation_8c21df94(Object *o, int a1, int a2)
{
    char *v1;
    v1 = (char *)o->f30->f00;
    reset_text_cursor_8c18ea38();
    operation_8c18ea4c((int)(g_8c336730 + 0x19));
    call_8c18ec00(a1, 3);
    operation_8c18ea4c((int)(g_8c336730 + 0x1d));
    call_8c18ec00(a2, 3);
    call_8c0e2278((int)(v1), (void *)((void *)0x8c4dbe40), 0x20);
    initialize_fields_8c0e24e8((void *)v1);
}
