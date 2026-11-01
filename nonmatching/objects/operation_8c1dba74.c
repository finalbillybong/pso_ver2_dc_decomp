/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1dba74
 * function: operation_8c1dba74
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 4 of 52 reference instruction lines
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
typedef struct Arg0_1c Arg0_1c;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    char unknownc[0xc];
    int dispatch;
    Arg0_1c *f1c;
};
extern void operator_delete_8c18de08(void *);
extern int operation_8c257e2c(int);
extern int operator_new_8c18de4c(int);
extern void strncpy_8c12b154(void *, int, int);
extern void call_8c1dbaf4(Object *, int);
void operation_8c1dba74(Object *o, int a1, int a2, int a3)
{
    int t1;
    operator_delete_8c18de08((void *)o->f1c);
    o->f1c = (Arg0_1c *)0;
    if (a1 != 0) {
        t1 = operation_8c257e2c(a1);
        o->f1c = (Arg0_1c *)operator_new_8c18de4c(t1 + 1);
        strncpy_8c12b154((void *)o->f1c, a1, ++t1);
    }
    o->dispatch = a3;
    o->f08 = 11.0f;
    o->tag |= 5;
    call_8c1dbaf4(o, a2);
}
