/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17a824
 * function: TItemWpnPsychowand_ctor_8c17a824
 * language: c
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 8 of 82 reference instruction lines
 * differing bytes: 17
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TItemWpnPsychowand.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown20[0x1dc];
    int f1fc;
    char unknown200[0x34];
    short f234;
    char unknown236[0x2];
    float f238;
    float f23c;
    float f240;
    int f244;
    char unknown248[0x58];
    int f2a0;
    char unknown2a4[0xc];
    float f2b0;
    int f2b4;
};
extern int g_8c319768;
extern void call_8c075398(Object *, int, int);
extern void call_8c18e044(void *, void *, int, int, int);
extern void operation_8c07de9c();
Object *TItemWpnPsychowand_ctor_8c17a824(Object *o, int a1, int a2)
{
    Object **home = &o;
    int pm2;
    int pm1;
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c27194c;
    call_8c18e044((void *)((0x248 + (char *)o)), operation_8c07de9c, 0, 8, 0xb);
    pm1 = (short)0x2b8;
    o->f244 = 0;
    (void)home;
    o->tag = (g_8c319768);
    o->size = (short)pm1;
    a1 = o->f1fc;
    pm1 = a1;
    pm2 = pm1;
    a2 = pm2;
    o->f1fc = 0x22 | a2;
    o->f2b4 = 0;
    o->f2b0 = 0.0f;
    o->f234 = -1;
    o->f240 = 0.0f;
    o->f23c = 0.0f;
    o->f238 = 0.0f;
    o->f2a0 = 0;
    o->f244 = 0;
    return o;
}
