/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c086b98
 * function: TObjBattery_ctor_8c086b98
 * language: c
 * reference size: 280 bytes
 * compiled size: 280 bytes (+0.0%)
 * differing lines: 16 of 109 reference instruction lines
 * differing bytes: 14
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
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c469ce0 S_g8c469ce0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Block_c8c122700_60 {
    Vector3 f00;
    Vector3 f0c;
} Block_c8c122700_60;
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
    Vector3 f3c;
    char unknown48[0x18];
    Block_c8c122700_60 f60;
};
struct Object {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
};
struct S_g8c469ce0 {
    int f00;
    int tbl[1];
};
extern int g_8c2ffb74;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c469ce0 *g_8c469ce0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c080360(void *, void *);
extern void operation_8c080444(int, void *, float, float);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
S_c8c122700 *TObjBattery_ctor_8c086b98(Object *o)
{
    int v3;
    float v2;
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xec);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        operation_8c080360((void *)t1, g_8c44be98);
        self->f18 = (void *)0x8c264f14;
        self->f00 = (int)(g_8c2ffb74);
        self->f1e = 0xec;
        *(Vector3 *)&self->f3c = *(Vector3 *)&o->f0c;
        self->f60.f00 = o->f18;
        self->f60.f0c = o->f24;
        operation_8c080444((int)self, (void *)(((char *)self + 0x6c)), 0.0f, 1.0f);
        self->f28 = (int)(g_8c469ce0->f00);
        self->f38 = *(int *)((char *)((char *)g_8c469ce0 + 0x4) + ((unsigned int)self->f60.f0c.x << 2));
        copy_actor_records((void *)self, (void *)((void *)0x8c2ffb48), 1);
        self->f34 |= 0x40000000;
        attach_and_insert_object((void *)self);
    }
    return t1;
}
