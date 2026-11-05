/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16a014
 * function: TPlyItem_ctor_8c16a014
 * language: c
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 10 of 74 reference instruction lines
 * differing bytes: 11
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * class header: src/include/classes/TPlyItem.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x28816 S_x28816;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    short f20;
    short f22;
};
struct S_x28816 {
    int f00;
    char unknown4[0x20];
    void *f24;
};
extern int g_8c317ab4;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c18e044(void *, void *, int, int, int);
extern void operation_8c02cc60();
extern void operation_8c0b4020();
extern void operation_8c0b4068();
Object *TPlyItem_ctor_8c16a014(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2701a4;
    {
        S_x28816 *p = (S_x28816 *)((char *)o + 0x24);
        S_x28816 **hp = &p;
        (void)hp;
        {
            S_x28816 *self = p;
            S_x28816 **hs = &self;
            (void)hs;
            p->f24 = (void *)0x8c266054;
            call_8c18e044((void *)((char *)self + 0x4), operation_8c0b4068, 0, 4, 8);
            self->f00 = 0;
            self->f24 = (void *)0x8c266048;
            call_8c18e044((void *)((char *)self + 0x28), operation_8c0b4020, 0, 0x10, 8);
        }
        p->f24 = (void *)0x8c2701c0;
        call_8c18e044((void *)((char *)p + 0xa8), operation_8c02cc60, 0, 0x1c, 8);
    }
    o->tag = (int)(g_8c317ab4);
    o->size = 0x1b4;
    o->f20 = 0;
    o->f22 = 0;
    return o;
}
