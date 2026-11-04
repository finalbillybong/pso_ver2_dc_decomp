/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c159a28
 * function: TObjVoloptCage_ctor_8c159a28
 * language: c
 * reference size: 360 bytes
 * compiled size: 360 bytes (+0.0%)
 * differing lines: 18 of 133 reference instruction lines
 * differing bytes: 28
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjVoloptCage.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c4da884 S_g8c4da884;
typedef struct S_g8c4da884_42c S_g8c4da884_42c;
typedef struct S_g8c4dab00 S_g8c4dab00;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    short f20;
    char unknown22[0xa];
    short f2c;
    short f2e;
    short f30;
    char unknown32[0x2];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    char unknown48[0x3c];
    int f84;
    char unknown88[0x282];
    short f30a;
    char unknown30c[0x48];
    unsigned short f354;
    char unknown356[0x36];
    int f38c;
    int f390;
    char unknown394[0x18];
    int f3ac;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct Arg1 {
    char unknown0[0x2c];
    short f2c;
    short f2e;
};
struct S_g8c4da884 {
    char unknown0[0x42c];
    S_g8c4da884_42c *f42c;
};
struct S_g8c4da884_42c {
    char unknown0[0x12c];
    int f12c;
};
extern int g_8c316538;
extern S_g8c4da884 *g_8c4da884;
extern S_g8c4dab00 *g_8c4dab00;
extern int g_8c4dab10;
extern void TObjEnemyCustom_ctor_8c0c2354(void *);
extern S_c8c021ef8 *lookup_low_id(int);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
extern void call_8c0439bc(Object *, void *, int, int, float, float);
Object *TObjVoloptCage_ctor_8c159a28(Object *o, Arg1 *a1, int a2, int a3, int a4)
{
    Object **home = &o;
    S_c8c021ef8 *t1;
    (void)home;
    TObjEnemyCustom_ctor_8c0c2354((void *)o);
    o->dispatch = (void *)0x8c26ec94;
    o->tag = (int)(g_8c316538);
    o->size = 0x3b0;
    o->f354 = a2;
    t1 = lookup_low_id((int)(o->f354 & 0xffff));
    if (t1 != 0) {
        *(Vector3 *)&o->f3c = *(Vector3 *)&t1->f3c;
    } else {
        o->f04 |= 1;
        return o;
    }
    copy_actor_records((void *)o, (void *)((void *)0x8c3164f0), 1);
    o->f20 = a3;
    o->f30 = a4;
    o->f84 = 0;
    o->f2c = a1->f2c;
    o->f2e = a1->f2e;
    attach_and_insert_object((void *)o);
    o->f38c = 0x2e;
    o->f3c.f04 = -25.0f;
    call_8c0439bc(o, g_8c4dab00, 0, 0, 1.0f, 1.0f);
    o->f34 |= 0x48000;
    o->f34 &= -0xa01;
    o->f390 = 7;
    o->f30a = 7;
    g_8c4dab10 = (int)(g_8c4da884->f42c->f12c);
    o->f3ac = 0;
    return o;
}
