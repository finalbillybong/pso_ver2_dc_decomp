/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07c9c0
 * function: operation_8c07c9c0
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 26 of 80 reference instruction lines
 * differing bytes: 38
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
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x1a];
    short size;
    Vector3 f20;
    Vector3 f2c;
    int f38;
    int f3c;
    int f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    int f54;
};
struct Arg1 {
    Vector3 f00;
};
struct Arg2 {
    Vector3 f00;
};
extern int g_8c2feb18;
extern int rand(void);
void operation_8c07c9c0(Object *o, Arg1 *a1, Arg2 *a2, int a3)
{
    int t1;
    int t2;
    o->tag = (int)(g_8c2feb18);
    o->size = 0x58;
    *(Vector3 *)&o->f20 = *(Vector3 *)&a1->f00;
    *(Vector3 *)&o->f2c = *(Vector3 *)&a2->f00;
    t1 = rand();
    o->f38 = (int)((float)t1 / 32768.0f * 65536.0f);
    t2 = rand();
    o->f3c = (int)((float)t2 / 32768.0f * 65536.0f);
    o->f40 = 0;
    o->f50 = o->f4c = o->f48 = o->f44 = 1.0f;
    if (a3 == 0) {
        o->f54 = 3;
        return;
    }
    o->f54 = 2;
}
