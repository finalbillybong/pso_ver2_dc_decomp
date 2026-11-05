/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18bafc
 * function: TWindowMainMenu_ctor_8c18bafc
 * language: c
 * reference size: 276 bytes
 * compiled size: 280 bytes (+1.4%)
 * differing lines: 82 of 113 reference instruction lines
 * differing bytes: 241
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * class header: src/include/classes/TWindowMainMenu.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    char unknown24[0x4];
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    char f50;
    char f51;
    short f52;
    short f54;
    char unknown56[0x1a];
    int f70;
    int f74;
    int f78;
};
extern int g_8c319fc8;
extern void TObject_ctor_8c0330e4(void *, void *);
Object *TWindowMainMenu_ctor_8c18bafc(Object *o, int a1)
{
    unsigned int v2;
    unsigned int v1;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c272630;
    o->tag = (int)(g_8c319fc8);
    o->size = 0x9c;
    o->f20 = 0;
    o->f52 = 0;
    o->f54 = 0;
    o->f50 = 0;
    o->f51 = 0;
    o->f30 = 320.0f;
    o->f34 = 240.0f;
    o->f28 = 640.0f;
    o->f2c = 480.0f;
    o->f3c = o->f38 = 0.0f;
    o->f40 = 20.0f;
    o->f44 = 15.0f;
    o->f48 = 1.0f;
    o->f4c = 0.85f;
    v1 = (unsigned int)0;
    while ((unsigned int)6 > v1) {
        *(int *)((char *)((char *)o + 0x58) + (v1 << 2)) = 0;
        v1 = (unsigned int)(v1 + 1);
    }
    v2 = (unsigned int)0;
    while ((unsigned int)4 > v2) {
        *(short *)((char *)((char *)o + 0x7c) + (v2 << 3)) = 0;
        *(short *)((char *)((char *)o + 0x7e) + (v2 << 3)) = 0;
        *(int *)((char *)((char *)o + 0x80) + (v2 << 3)) = 0;
        v2 = (unsigned int)(v2 + 1);
    }
    o->f74 = 0;
    o->f70 = 0;
    o->f78 = 0;
    return o;
}
