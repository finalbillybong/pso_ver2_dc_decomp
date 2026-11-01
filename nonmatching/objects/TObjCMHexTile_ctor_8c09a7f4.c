/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09a7f4
 * function: TObjCMHexTile_ctor_8c09a7f4
 * language: c
 * reference size: 352 bytes
 * compiled size: 352 bytes (+0.0%)
 * differing lines: 108 of 150 reference instruction lines
 * differing bytes: 122
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    int f2c;
    float f30;
    float f34;
    char unknown38[0x8];
    Block8 f40;
    float f48;
    float f4c;
    float f50;
    int f54;
};
struct Arg2 {
    Block8 f00;
};
extern int g_8c30128c;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int rand(void);
Object *TObjCMHexTile_ctor_8c09a7f4(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    int v1;
    int v2;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c265714;
    o->tag = (int)(g_8c30128c);
    o->size = 0x58;
    t5 = rand();
    v1 = (int)(int)((float)t5 / 32768.0f * 22.0f + 7.0f);
    o->f24 = (int)(v1);
    t6 = rand();
    v2 = (int)(int)((float)v1 + ((float)t6 / 32768.0f * 7.0f + 22.0f));
    o->f28 = (int)(v2);
    t1 = rand();
    o->f2c = (int)((float)v2 + ((float)t1 / 32768.0f * 45.0f + 30.0f));
    t2 = rand();
    o->f48 = (float)t2 / 32768.0f * 0.0333333351f + 0.00833333377f;
    t3 = rand();
    o->f30 = (float)t3 / 32768.0f * 20.0f - 10.0f;
    t4 = rand();
    o->f34 = (float)t4 / 32768.0f * 20.0f - 10.0f;
    *(Block8 *)&o->f40 = *(Block8 *)&a2->f00;
    o->f50 = 0.0f;
    o->f4c = 1.0f;
    o->f54 = 0;
    o->f20 = 0;
    return o;
}
