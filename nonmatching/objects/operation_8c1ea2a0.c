/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ea2a0
 * function: operation_8c1ea2a0
 * language: c
 * reference size: 212 bytes
 * compiled size: 212 bytes (+0.0%)
 * differing lines: 26 of 72 reference instruction lines
 * differing bytes: 38
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x86416 S_x86416;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x16];
    float f108;
    char unknown10c[0x4];
    int f110;
    char unknown114[0x1f6];
    short f30a;
    char unknown30c[0x260];
    float f56c;
    int f570;
};
struct S_x86416 {
    float f00;
};
extern void operation_8c1e8e60(int, short, int);
extern int operation_02c350(void *);
extern int operation_8c0257ec(void *, int);
extern void store_actor_scale(void *, void *, float);
extern void operation_021f88(void *, int, short);
void operation_8c1ea2a0(Object *o)
{
    int v1;
    int t1;
    int t2;
    operation_8c1e8e60((int)o, o->f30a, 6);
    o->f570 = 0;
    t2 = operation_02c350((void *)o);
    v1 = (int)*(short *)((char *)0x8c2e731c + ((short)t2 << 1));
    t1 = operation_8c0257ec((void *)o, v1);
    if (t1 != 0) {
        o->fe8 |= 0x80;
    }
    store_actor_scale((void *)(((char *)o + 0x564)), (void *)o, 1.5f);
    operation_021f88((void *)o, 4, (short)v1);
    {
        float *p = &o->f108;
        *p = ((S_x86416 *)((int)o->f110 + 8 + (o->ff0 << 4)))->f00 * o->f56c;
    }
    o->fe8 |= 0x100;
}
