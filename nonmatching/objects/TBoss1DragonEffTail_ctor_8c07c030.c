/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07c030
 * function: TBoss1DragonEffTail_ctor_8c07c030
 * language: c
 * reference size: 256 bytes
 * compiled size: 256 bytes (+0.0%)
 * differing lines: 46 of 98 reference instruction lines
 * differing bytes: 35
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TBoss1DragonEffTail.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct Object Object;
typedef struct S_x2640 S_x2640;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0xbc];
    int fdc;
    char unknowne0[0x8];
    int fe8;
    int fec;
    int ff0;
    int ff4;
    float ff8;
    float ffc;
    float f100;
};
struct S_x2640 {
    Block44 f00;
};
extern Block44 g_8c2fe7f0;
extern int g_8c2feadc;
extern void operation_8c0f3458(void *, int, int, int, int);
extern int game_malloc_8c011ecc(int);
extern void operation_8c0f336c(int, int);
Object *TBoss1DragonEffTail_ctor_8c07c030(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v1;
    int t1;
    (void)home;
    operation_8c0f3458((void *)o, 0, a1, (int)((void *)&g_8c2fe7f0), 0x11);
    o->dispatch = (void *)0x8c264148;
    o->tag = (int)(g_8c2feadc);
    o->size = 0x104;
    v1 = (int)1;
    while (0x11 > v1) {
        *(Block44 *)&((S_x2640 *)((int)o->fdc + v1 * 0x2c))->f00 = *(Block44 *)&g_8c2fe7f0;
        v1 = (int)(v1 + 1);
    }
    o->fe8 = a1;
    o->fec = a2;
    t1 = game_malloc_8c011ecc(0x10);
    if (t1 != 0) {
        operation_8c0f336c(t1, 4);
    }
    o->ff0 = (int)(t1);
    o->ff4 = 0;
    o->ff8 = 0.0f;
    o->ffc = 0.0f;
    o->f100 = 0.0f;
    return o;
}
