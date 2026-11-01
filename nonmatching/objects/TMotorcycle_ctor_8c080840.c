/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c080840
 * function: TMotorcycle_ctor_8c080840
 * language: c
 * reference size: 212 bytes
 * compiled size: 212 bytes (+0.0%)
 * differing lines: 14 of 78 reference instruction lines
 * differing bytes: 17
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_c8c122700_f0 S_c8c122700_f0;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c469ba0 S_g8c469ba0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x8];
    int f28;
    char unknown2c[0x8];
    int f34;
    int f38;
    char unknown3c[0x30];
    float f6c;
    char unknown70[0x80];
    S_c8c122700_f0 *ff0;
};
struct S_g8c469ba0 {
    int f00;
};
extern int g_8c2fec64;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c469ba0 *g_8c469ba0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void TObjMesBase_ctor_8c1ab100(void *, int, int);
extern int call_8c18e8a0(void *, int);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
S_c8c122700 *TMotorcycle_ctor_8c080840(int a0)
{
    S_c8c122700 *t1;
    int t2;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xf4);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        TObjMesBase_ctor_8c1ab100((void *)t1, (int)g_8c44be98, a0);
        self->f18 = (void *)0x8c2643f0;
        self->f00 = (int)(g_8c2fec64);
        self->f1e = 0xf4;
        self->ff0 = (S_c8c122700_f0 *)(int)self->f6c;
        {
            S_c8c122700 *base = self;
            t2 = call_8c18e8a0((void *)(base->ff0), 2);
            base->ff0 = (S_c8c122700_f0 *)t2;
            self->f28 = (int)(g_8c469ba0->f00);
            self->f38 = (int)(*(int *)((char *)((char *)g_8c469ba0 + 0x4) + ((int)(self->ff0) << 2)));
            copy_actor_records((void *)self, (void *)((void *)0x8c2fec38), 1);
            self->f34 |= 0x40000000;
            attach_and_insert_object((void *)self);
        }
    }
    return t1;
}
