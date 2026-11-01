/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e4f74
 * function: operation_8c1e4f74
 * language: c
 * reference size: 264 bytes
 * compiled size: 268 bytes (+1.5%)
 * differing lines: 90 of 99 reference instruction lines
 * differing bytes: 232
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4e30c0 S_g8c4e30c0;
typedef struct S_g8c4e30c0_42c S_g8c4e30c0_42c;
typedef struct S_g8c4e30c4 S_g8c4e30c4;
typedef struct Object Object;
typedef struct Block_p0_78 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_78;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0x8];
    int f34;
    int f38;
    Vector3 f3c;
    char unknown48[0x30];
    Block_p0_78 f78;
    char unknown84[0x286];
    short f30a;
    char unknown30c[0x18];
    Vector3 f324;
};
struct S_g8c4e30c0 {
    char unknown0[0x42c];
    S_g8c4e30c0_42c *f42c;
};
struct S_g8c4e30c0_42c {
    char unknown0[0x28];
    int f28;
    int f2c;
};
struct S_g8c4e30c4 {
    int f00;
};
extern int g_8c32b6c8;
extern int g_8c32b6d0;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4e30c0 *g_8c4e30c0;
extern S_g8c4e30c4 *g_8c4e30c4;
extern char g_8c32b68c[];
extern void TObjContainerBase_ctor_8c083eac(Object *, void *, int);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
Object *operation_8c1e4f74(Object *o, int a1)
{
    {
        Object *self = o;
        Object **home = &self;
        (void)home;
        TObjContainerBase_ctor_8c083eac(o, g_8c44be98, a1);
        self->dispatch = (void *)0x8c277788;
        self->tag = (int)(g_8c32b6c8);
        self->size = 0x384;
        self->f30a = 0;
        self->f34 |= 0x60000000;
        copy_actor_records((void *)self, (void *)((void *)g_8c32b68c), 1);
        attach_and_insert_object((void *)self);
        *(Vector3 *)&self->f78 = *(Vector3 *)&self->f3c;
        *(Vector3 *)&self->f324 = *(Vector3 *)&self->f3c;
        self->f78.f04 += *(float *)(g_8c32b68c + 0x4);
        self->f38 = (int)(g_8c4e30c0->f42c->f28);
        self->f28 = (int)(g_8c4e30c0->f42c->f2c);
    }
    o->dispatch = (void *)0x8c2774b0;
    o->tag = (int)(g_8c32b6d0);
    o->size = 0x384;
    o->f28 = (int)(g_8c4e30c4->f00);
    return o;
}
