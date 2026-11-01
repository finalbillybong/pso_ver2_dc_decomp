/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21dedc
 * function: operation_8c21dedc
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 28 of 71 reference instruction lines
 * differing bytes: 24
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
extern int call_8c18e808(int, int);
extern int call_8c18e954(int, int);
extern void operation_8c18ea4c(int);
extern void call_8c18ec00(int, int);
extern void call_8c0e2278(int, void *, int);
extern void initialize_fields_8c0e24e8(void *);
void operation_8c21dedc(Object *o, int a1)
{
    char *v1;
    int t1;
    int t4;
    int t3;
    v1 = (char *)o->f30->f00;
    reset_text_cursor_8c18ea38();
    t1 = call_8c18e808(a1, 0xe10);
    a1 = call_8c18e954(a1, 0xe10);
    if ((unsigned int)t1 > (unsigned int)9) {
        operation_8c18ea4c((int)(g_8c336730 + 0xd));
    } else {
        call_8c18ec00(t1, 1);
        operation_8c18ea4c((int)(g_8c336730 + 0x15));
        t3 = call_8c18e808(a1, 0x3c);
        t4 = call_8c18e954(a1, 0x3c);
        call_8c18ec00(t3, 2);
        operation_8c18ea4c((int)(g_8c336730 + 0x17));
        call_8c18ec00(t4, 2);
    }
    call_8c0e2278((int)(v1), (void *)((void *)0x8c4dbe40), 0x20);
    initialize_fields_8c0e24e8((void *)v1);
}
