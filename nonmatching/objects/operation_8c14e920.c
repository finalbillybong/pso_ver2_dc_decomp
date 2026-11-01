/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14e920
 * function: operation_8c14e920
 * language: c
 * reference size: 528 bytes
 * compiled size: 532 bytes (+0.8%)
 * differing lines: 166 of 210 reference instruction lines
 * differing bytes: 310
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block56 {
    int words[14];
} Block56;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_c8c053d84_64 S_c8c053d84_64;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_1e0 Arg0_1e0;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    char unknown24[0xc];
    Arg0_1e0 *f30;
    int f34;
} Block_frame_0;
typedef struct Block_frame_5c {
    float f00;
    float f04;
    float f08;
} Block_frame_5c;
typedef struct Block_frame_38 {
    float f00;
    float f04;
    float f08;
} Block_frame_38;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x148];
    unsigned short f190;
    char unknown192[0x42];
    int f1d4;
    char unknown1d8[0x8];
    Arg0_1e0 *f1e0;
    float f1e4;
    float f1e8;
    float f1ec;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_38 f38;
    int f44;
    char unknown48[0x8];
    float f50;
    float f54;
    float f58;
    Block_frame_5c f5c;
};
struct S_c8c053d84 {
    char unknown0[0x40];
    float f40;
    char unknown44[0x20];
    S_c8c053d84_64 *f64;
};
struct Arg0_1e0 {
    char unknown0[0x324];
    Vector3 f324;
};
extern Block56 g_8c3156e8;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern void call_8c3bdf60(void *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern void njUnitVector_8c37b630(void *);
extern int rand(void);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TPhotonConcentrate_ctor_8c167614(int, Frame *, Object *, int);
void operation_8c14e920(Object *o)
{
    Frame frame;
    S_c8c053d84 *t1;
    int t2;
    int t3;
    if (o->f1d4 == 0) {
        t1 = lookup_object_by_id((unsigned short)(o->f190));
        (&frame)->f50 = 0.0f;
        if (t1 != 0) {
            (&frame)->f54 = t1->f40;
        }
        (&frame)->f58 = 100.0f;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        if (t1 != 0) {
            njRotateY_8c37df90(0, (void *)(t1->f64));
        }
        call_8c3be38c(0, (void *)(&(&frame)->f50), (void *)(&(&frame)->f44));
        njPopMatrix_8c38accc(1);
        *(Vector3 *)&(&frame)->f5c = *(Vector3 *)&o->f3c;
        call_8c3bdf60((void *)(&(&frame)->f5c), (void *)(&(&frame)->f44));
    } else {
        *(Vector3 *)&(&frame)->f5c = *(Vector3 *)&o->f1e0->f324;
    }
    *(Vector3 *)&(&frame)->f38 = *(Vector3 *)&(&frame)->f5c;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f38), (void *)(&o->f1e4));
    njUnitVector_8c37b630((void *)(&(&frame)->f38));
    t2 = rand();
    *(Block56 *)&(&frame)->f00 = *(Block56 *)&g_8c3156e8;
    (&frame)->f00.f00 = o->f1e4;
    (&frame)->f00.f04 = o->f1e8;
    (&frame)->f00.f08 = o->f1ec;
    (&frame)->f00.f0c = (&frame)->f5c.f00;
    (&frame)->f00.f10 = (&frame)->f5c.f04;
    (&frame)->f00.f14 = (&frame)->f5c.f08;
    (&frame)->f00.f18 = (&frame)->f38.f00;
    (&frame)->f00.f1c = (&frame)->f38.f04;
    (&frame)->f00.f20 = (&frame)->f38.f08;
    (&frame)->f00.f30 = o->f1e0;
    (&frame)->f00.f34 = (unsigned int)((float)t2 / 32768.0f * 360.0f + 1.0f);
    t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x144);
    if (t3 != 0) {
        TPhotonConcentrate_ctor_8c167614(t3, (Frame *)((&frame)), o, (int)(o->f190));
    }
}
