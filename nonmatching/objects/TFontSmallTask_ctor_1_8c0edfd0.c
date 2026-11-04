/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0edfd0
 * function: TFontSmallTask_ctor_1_8c0edfd0
 * language: c
 * reference size: 260 bytes
 * compiled size: 260 bytes (+0.0%)
 * differing lines: 2 of 101 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TFontSmallTask.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    float f20;
    char unknown24[0x4];
    float f28;
    char unknown2c[0xf];
    char f3b;
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern int call_8c0ee474(Object *, int);
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern void strncpy_8c12b154(void *, void *, int);
extern unsigned int operation_8c087268(void *);
Object *TFontSmallTask_ctor_1_8c0edfd0(Object *o, int a1, int a2, int a3, int a4)
{
    Object **home = &o;
    int t1;
    unsigned int t2;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)(*(S_g8c44bea0 **)0x8c44bea0));
    o->dispatch = (void *)0x8c268060;
    o->tag = (int)(*(int *)0x8c308de8);
    o->size = 0x50;
    t1 = call_8c0ee474(o, a1);
    if (t1 == 0) {
        return o;
    }
    o->f3c = a2 & 0xffffff;
    o->f40 = 0;
    o->f44 = a3;
    o->f48 = 0;
    o->f4c = 1;
    reset_text_cursor_8c18ea38();
    operation_8c18ea4c(a4);
    strncpy_8c12b154((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c4dbe40), 0xf);
    o->f3b = 0;
    t2 = operation_8c087268((void *)(((char *)o + 0x2c)));
    o->f28 = (float)t2;
    o->f20 -= o->f28 * 0.5f * 1.4f;
    return o;
}
