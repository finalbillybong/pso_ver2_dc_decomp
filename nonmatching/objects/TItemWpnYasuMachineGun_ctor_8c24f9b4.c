/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24f9b4
 * function: TItemWpnYasuMachineGun_ctor_8c24f9b4
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 24 of 56 reference instruction lines
 * differing bytes: 52
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TItemWpnYasuMachineGun.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown200[0x20];
    float f220;
    short f224;
    char unknown226[0x2];
    void *f228;
    int f22c;
    char unknown230[0x4];
    int f234;
    float f238;
    float f23c;
    float f240;
    char unknown244[0x18];
    int f25c;
    int f260;
};
extern int g_8c33f730;
extern void call_8c075398(Object *, int, int);
Object *TItemWpnYasuMachineGun_ctor_8c24f9b4(Object *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c27e7cc;
    o->tag = (int)(g_8c33f730);
    o->size = 0x264;
    o->f224 = 3;
    o->f22c = 0;
    o->f228 = (void *)0x8c1c6058;
    o->f220 = 20.0f;
    o->f1fc |= 0x203;
    o->f234 = 0;
    o->f238 = o->f23c = o->f240 = 0.0f;
    o->f260 = 0;
    o->f25c = 0;
    return o;
}
