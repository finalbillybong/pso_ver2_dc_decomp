/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c164e44
 * function: operation_8c164e44
 * language: c
 * reference size: 284 bytes
 * compiled size: 284 bytes (+0.0%)
 * differing lines: 32 of 116 reference instruction lines
 * differing bytes: 58
 * provenance: generator draft (mode bgotoext)
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
typedef struct Block32 {
    int words[8];
} Block32;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_c8c053d84_64 S_c8c053d84_64;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    char unknown18[0x4];
    float f1c;
} Block_frame_0;
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x140];
    float f188;
    char unknown18c[0x28];
    unsigned short f1b4;
};
struct Frame {
    Block_frame_0 f00;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
};
struct S_c8c053d84 {
    char unknown0[0x64];
    S_c8c053d84_64 *f64;
};
extern Block32 g_8c3173ec;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TPhotonLine_ctor_8c167a90(int, Frame *, Object *, int);
void operation_8c164e44(Object *o)
{
    Frame frame;
    S_c8c053d84 *t1;
    int t2;
    t1 = lookup_object_by_id((unsigned short)(o->f1b4));
    (&frame)->f2c = 0.0f;
    (&frame)->f30 = 0.0f;
    (&frame)->f34 = 1.0f;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    if (t1 != 0) {
        njRotateY_8c37df90(0, (void *)(t1->f64));
    }
    call_8c3be38c(0, (void *)(&(&frame)->f2c), (void *)(&(&frame)->f20));
    njPopMatrix_8c38accc(1);
    *(Block32 *)&(&frame)->f00 = *(Block32 *)&g_8c3173ec;
    (&frame)->f00.f00 = o->f3c;
    (&frame)->f00.f04 = o->f40;
    (&frame)->f00.f08 = o->f44;
    (&frame)->f00.f0c = (&frame)->f20;
    (&frame)->f00.f10 = (&frame)->f24;
    (&frame)->f00.f14 = (&frame)->f28;
    (&frame)->f00.f1c = o->f188;
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x394);
    if (t2 != 0) {
        TPhotonLine_ctor_8c167a90(t2, (Frame *)((&frame)), o, (int)(o->f1b4));
    }
}
