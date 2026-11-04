/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c084328
 * function: TObjContainerItem_ctor_8c084328
 * language: c
 * reference size: 240 bytes
 * compiled size: 240 bytes (+0.0%)
 * differing lines: 8 of 90 reference instruction lines
 * differing bytes: 7
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjContainerItem.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c469c80 S_g8c469c80;
typedef struct S_g8c469c80_42c S_g8c469c80_42c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Block_c8c122700_78 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_c8c122700_78;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x14];
    int f34;
    int f38;
    Vector3 f3c;
    char unknown48[0x30];
    Block_c8c122700_78 f78;
    char unknown84[0x286];
    short f30a;
    char unknown30c[0x18];
    Vector3 f324;
};
struct S_g8c469c80 {
    char unknown0[0x42c];
    S_g8c469c80_42c *f42c;
};
struct S_g8c469c80_42c {
    char unknown0[0x18];
    int f18;
};
extern int g_8c2ff594;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c469c80 *g_8c469c80;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c2ff564[];
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void TObjContainerBase_ctor_8c083eac(S_c8c122700 *, void *, int);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
S_c8c122700 *TObjContainerItem_ctor_8c084328(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x384);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        TObjContainerBase_ctor_8c083eac(t1, g_8c44be98, a0);
        self->f18 = (void *)0x8c264bb0;
        self->f00 = (int)(g_8c2ff594);
        self->f1e = 0x384;
        self->f38 = (int)(g_8c469c80->f42c->f18);
        self->f30a = 0;
        self->f34 |= 0x60000000;
        copy_actor_records((void *)self, (void *)((void *)g_8c2ff564), 1);
        attach_and_insert_object((void *)self);
        *(Vector3 *)&self->f78 = *(Vector3 *)&self->f3c;
        *(Vector3 *)&self->f324 = *(Vector3 *)&self->f3c;
        self->f78.f04 += *(float *)(g_8c2ff564 + 0x4);
    }
    return t1;
}
