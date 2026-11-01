/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19f884
 * function: operation_8c19f884
 * language: c
 * reference size: 152 bytes
 * compiled size: 156 bytes (+2.6%)
 * differing lines: 18 of 58 reference instruction lines
 * differing bytes: 119
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x20];
    int f24;
};
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern void operation_8c18eb44(int);
extern void operator_delete_8c18de08(int);
extern int operation_8c257e2c(int);
extern int operator_new_8c18de4c(int);
extern void strncpy_8c12b154(int, void *, int);
void operation_8c19f884(Object *o, int a1)
{
    int v1;
    int t1;
    int t2;
    reset_text_cursor_8c18ea38();
    operation_8c18ea4c((int)((void *)0x8c287b98));
    operation_8c18eb44(a1);
    v1 = (int)o->f24;
    if (v1 != 0 && ((o->tag & 0x10)) != 0) {
        o->tag &= -0x11;
        operator_delete_8c18de08(v1);
    }
    if ((void *)0x8c4dbe40 != 0) {
        t1 = operation_8c257e2c((int)((void *)0x8c4dbe40));
        t2 = operator_new_8c18de4c((int)(t1 + 1));
        a1 = t2;
        strncpy_8c12b154(t2, (void *)((void *)0x8c4dbe40), (int)(t1 + 1));
        o->tag |= 0x10;
    } else {
        a1 = (int)(void *)0x8c4dbe40;
    }
    o->f24 = a1;
}
