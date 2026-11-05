/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c193658
 * function: operation_8c193658
 * language: c
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 4 of 68 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
struct Object {
    Arg0_0 *tag;
    int f04;
};
struct Frame {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x4];
    int f20;
    int f24;
    char unknown28[0x18];
};
extern int operator_new_8c18de4c(int);
extern int operation_8c258020(int);
extern int file_load_8c104d00(int, int);
extern int hs_8c0787cc(int, void *);
extern void TObject_ctor_8c0330e4(Frame *, int);
extern int relocate_resource_trailer(Frame *);
extern void TObject_dtor_8c03311c(Frame *, int);
extern void operation_8c258088(void);
Object *operation_8c193658(Object *o, int a1, int a2)
{
    Frame frame;
    int t1;
    int t4;
    int t3;
    int t2;
    int t5;
    o->tag = (Arg0_0 *)0;
    o->f04 = 0;
    if (a2 != 0 && a1 != 0) {
        t1 = operator_new_8c18de4c(a2);
        o->tag = (Arg0_0 *)t1;
        t2 = operation_8c258020(a2);
        if (t2 != 0 && o->tag != 0) {
            t3 = file_load_8c104d00(a1, t2);
            if (t3 > 0) {
                t4 = hs_8c0787cc(t2, o->tag);
                TObject_ctor_8c0330e4((&frame), 0);
                (&frame)->f18 = (void *)0x8c26586c;
                (&frame)->f20 = (int)(o->tag);
                (&frame)->f24 = (int)(t4);
                t5 = relocate_resource_trailer((&frame));
                o->f04 = (int)(t5);
                (&frame)->f18 = (void *)0x8c26586c;
                TObject_dtor_8c03311c((&frame), 0);
            }
        }
        operation_8c258088();
    }
    return o;
}
