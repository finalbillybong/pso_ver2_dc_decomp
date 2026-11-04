/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cd2ac
 * function: TObjBoss1MokoHill_Solo_ctor_8c0cd2ac
 * language: c
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 40 of 95 reference instruction lines
 * differing bytes: 98
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjBoss1MokoHill_Solo.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0cd3dc S_c8c0cd3dc;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0xc];
    Vector3 f2c;
    float f38;
    float f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
};
struct S_c8c0cd3dc {
    Vector3 f00;
};
extern int g_8c3069b0;
extern void TObject_ctor_8c0330e4(void *, void *);
extern S_c8c0cd3dc *operation_8c0cd3dc(Object *);
extern int rand(void);
extern int operation_8c05bbf8(void);
Object *TObjBoss1MokoHill_Solo_ctor_8c0cd2ac(Object *o, int a1, int a2)
{
    Object **home = &o;
    S_c8c0cd3dc *t1;
    int t2;
    int t3;
    int t4;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c266d04;
    o->tag = (int)(g_8c3069b0);
    o->size = 0x54;
    t1 = operation_8c0cd3dc(o);
    *(Vector3 *)&o->f2c = *(Vector3 *)&t1->f00;
    o->f38 = -32.0f;
    o->f3c = -((float)rand() / 32768.0f * 8.0f + 2.0f);
    o->f40 = (int)((float)rand() / 32768.0f * 20.0f + 20.0f);
    o->f44 = 0;
    o->f48 = 0;
    t4 = operation_8c05bbf8();
    if (t4 != 0) {
        o->f4c = 1;
    } else {
        o->f4c = 0;
    }
    o->f50 = a2;
    return o;
}
