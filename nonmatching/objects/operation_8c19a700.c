/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19a700
 * function: operation_8c19a700
 * language: c
 * reference size: 248 bytes
 * compiled size: 248 bytes (+0.0%)
 * differing lines: 6 of 100 reference instruction lines
 * differing bytes: 6
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
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    float f20;
    float f24;
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
    float f50;
    float f54;
    float f58;
    float f5c;
    int f60;
};
extern int g_8c4dc484;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int call_8c3727a0(int);
Object *operation_8c19a700(Object *o, int a1)
{
    Object **home = &o;
    int v1;
    int t1;
    float k;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2729b0;
    o->f60 = 0xff;
    g_8c4dc484 = 0;
    o->f20 = 70.0f;
    o->f24 = 174.0f;
    o->f28 = 127.0f;
    o->f2c = 261.0f;
    o->f30 = 0.0f;
    o->f34 = 0.0f;
    o->f38 = 0.4453125f;
    o->f3c = 0.671875f;
    o->f40 = 70.0f;
    o->f44 = 174.0f;
    o->f48 = 127.0f;
    o->f4c = 261.0f;
    o->f50 = 0.4453125f;
    o->f54 = 0.0f;
    k = 0.890625f;
    o->f58 = k;
    o->f5c = 0.671875f;
    v1 = (int)0;
    while ((unsigned int)8 > (unsigned int)(unsigned char)v1) {
        t1 = call_8c3727a0((int)((unsigned char)v1));
        *(int *)((char *)((char *)o + 0x64) + ((unsigned char)v1 << 2)) = (int)(t1);
        v1 = (int)(v1 + 1);
    }
    return o;
}
